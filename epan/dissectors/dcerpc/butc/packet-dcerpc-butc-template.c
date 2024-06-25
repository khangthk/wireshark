/* DO NOT EDIT
 * This dissector is autogenerated
 */

/* packet-dcerpc-butc.c
 * Routines for BUTC packet disassembly
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "config.h"

#include <glib.h>
#include <string.h>

#include <epan/packet.h>
#include "packet-dcerpc.h"
#include "packet-dcerpc-nt.h"
#include "packet-windows-common.h"
#include "packet-dcerpc-butc.h"

void proto_register_butc(void);
void proto_reg_handoff_butc(void);

static int proto_butc;
ETH_HF

ETH_ETT

static int
butc_dissect_NameString_t(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param _U_)
{
    offset=dissect_ndr_vstring(tvb, offset, pinfo, tree, di, drep, 1, hf_index, FALSE, NULL);
    return offset;
}

ETH_CODE

void
proto_register_butc(void)
{
        static hf_register_info hf[] = {

ETH_HFARR
	};

        static gint *ett[] = {
ETH_ETTARR
        };

        proto_butc = proto_register_protocol("DCE/RPC BUTC", "BUTC", "butc");
	proto_register_field_array(proto_butc, hf, array_length(hf));
        proto_register_subtree_array(ett, array_length(ett));
}

static const dcerpc_sub_dissector function_dissectors[] = {
ETH_FT
	{ 0, NULL, NULL, NULL },
};

void
proto_reg_handoff_butc(void)
{
ETH_HANDOFF
}
