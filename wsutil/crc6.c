/*
 *  crc6.c
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

/*
   Patch by Ross Jacobs <rossbjacobs@gmail.com>:
      Fixed CRC6 0x6F lookup table + function per Wireshark bug 14875
*/

#include "config.h"

#include "crc6.h"

/**
 * Functions and types for CRC checks.
 *
 * Generated on Wed Jan 2 2019,
 * by pycrc v0.9.1, http://www.tty1.net/pycrc/
 * using the configuration:
 *    Width        = 6
 *    Poly         = 0x6f
 *    XorIn        = 0
 *    ReflectIn    = False
 *    XorOut       = 0
 *    ReflectOut   = False
 */
static const guint8 crc6_table[256] = {
        0x00, 0x2f, 0x31, 0x1e, 0x0d, 0x22, 0x3c, 0x13, 0x1a, 0x35, 0x2b, 0x04, 0x17, 0x38, 0x26, 0x09,
        0x34, 0x1b, 0x05, 0x2a, 0x39, 0x16, 0x08, 0x27, 0x2e, 0x01, 0x1f, 0x30, 0x23, 0x0c, 0x12, 0x3d,
        0x07, 0x28, 0x36, 0x19, 0x0a, 0x25, 0x3b, 0x14, 0x1d, 0x32, 0x2c, 0x03, 0x10, 0x3f, 0x21, 0x0e,
        0x33, 0x1c, 0x02, 0x2d, 0x3e, 0x11, 0x0f, 0x20, 0x29, 0x06, 0x18, 0x37, 0x24, 0x0b, 0x15, 0x3a,
        0x0e, 0x21, 0x3f, 0x10, 0x03, 0x2c, 0x32, 0x1d, 0x14, 0x3b, 0x25, 0x0a, 0x19, 0x36, 0x28, 0x07,
        0x3a, 0x15, 0x0b, 0x24, 0x37, 0x18, 0x06, 0x29, 0x20, 0x0f, 0x11, 0x3e, 0x2d, 0x02, 0x1c, 0x33,
        0x09, 0x26, 0x38, 0x17, 0x04, 0x2b, 0x35, 0x1a, 0x13, 0x3c, 0x22, 0x0d, 0x1e, 0x31, 0x2f, 0x00,
        0x3d, 0x12, 0x0c, 0x23, 0x30, 0x1f, 0x01, 0x2e, 0x27, 0x08, 0x16, 0x39, 0x2a, 0x05, 0x1b, 0x34,
        0x1c, 0x33, 0x2d, 0x02, 0x11, 0x3e, 0x20, 0x0f, 0x06, 0x29, 0x37, 0x18, 0x0b, 0x24, 0x3a, 0x15,
        0x28, 0x07, 0x19, 0x36, 0x25, 0x0a, 0x14, 0x3b, 0x32, 0x1d, 0x03, 0x2c, 0x3f, 0x10, 0x0e, 0x21,
        0x1b, 0x34, 0x2a, 0x05, 0x16, 0x39, 0x27, 0x08, 0x01, 0x2e, 0x30, 0x1f, 0x0c, 0x23, 0x3d, 0x12,
        0x2f, 0x00, 0x1e, 0x31, 0x22, 0x0d, 0x13, 0x3c, 0x35, 0x1a, 0x04, 0x2b, 0x38, 0x17, 0x09, 0x26,
        0x12, 0x3d, 0x23, 0x0c, 0x1f, 0x30, 0x2e, 0x01, 0x08, 0x27, 0x39, 0x16, 0x05, 0x2a, 0x34, 0x1b,
        0x26, 0x09, 0x17, 0x38, 0x2b, 0x04, 0x1a, 0x35, 0x3c, 0x13, 0x0d, 0x22, 0x31, 0x1e, 0x00, 0x2f,
        0x15, 0x3a, 0x24, 0x0b, 0x18, 0x37, 0x29, 0x06, 0x0f, 0x20, 0x3e, 0x11, 0x02, 0x2d, 0x33, 0x1c,
        0x21, 0x0e, 0x10, 0x3f, 0x2c, 0x03, 0x1d, 0x32, 0x3b, 0x14, 0x0a, 0x25, 0x36, 0x19, 0x07, 0x28
};

/**
 * CRC6 is used by 3GPP (TS 25.415, TS 25.446) for header CRCs
 * Poly: D^6 + D^5 + D^3 + D^2 + D^1 + 1
 *
 * TS 25.415 docs: https://www.etsi.org/deliver/etsi_ts/125400_125499/125415/04.06.00_60/ts_125415v040600p.pdf
 * TS 25.446 docs: https://www.etsi.org/deliver/etsi_ts/125400_125499/125446/10.01.00_60/ts_125446v100100p.pdf
*/
guint16 crc6_0X6F(guint16 crc, const guint8 *data, int data_len)
{
    guint8 tbl_idx;

    while (data_len--) {
        tbl_idx = (crc << 2) ^ *data;
        crc = crc6_table[tbl_idx] & 0x3f;
        data++;
    }
    return crc & 0x3f;
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */
