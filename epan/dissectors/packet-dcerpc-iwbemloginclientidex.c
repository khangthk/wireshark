/* DO NOT EDIT
	This file was automatically generated by Pidl
	from iwbemloginclientidex.idl and iwbemloginclientidex.cnf.

	Pidl is a perl based IDL compiler for DCE/RPC idl files.
	It is maintained by the Samba team, not the Wireshark team.
	Instructions on how to download and install Pidl can be
	found at https://gitlab.com/wireshark/wireshark/-/wikis/Pidl
*/


#include "config.h"
#include <glib.h>
#include <string.h>
#include <epan/packet.h>

#include "packet-dcerpc.h"
#include "packet-dcerpc-nt.h"
#include "packet-windows-common.h"
#include "packet-dcerpc-iwbemloginclientidex.h"
void proto_register_dcerpc_IWbemLoginClientIDEx(void);
void proto_reg_handoff_dcerpc_IWbemLoginClientIDEx(void);

/* Ett declarations */
static gint ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis;
static gint ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat;
static gint ett_dcerpc_IWbemLoginClientIDEx;
static gint ett_IWbemLoginClientIDEx_ORPCTHIS;
static gint ett_IWbemLoginClientIDEx_ORPCTHAT;
static gint ett_IWbemLoginClientIDEx_FILETIME;


/* Header field declarations */
static gint hf_IWbemLoginClientIDEx_FILETIME_dwHighDateTime;
static gint hf_IWbemLoginClientIDEx_FILETIME_dwLowDateTime;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachine;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachineFQDN;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcId;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcessCreationTime;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_Reserved;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat;
static gint hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis;
static gint hf_IWbemLoginClientIDEx_opnum;
static gint hf_IWbemLoginClientIDEx_werror;

static gint proto_dcerpc_IWbemLoginClientIDEx = -1;
/* Version information */


static e_guid_t uuid_dcerpc_IWbemLoginClientIDEx = {
	0x9f6c78ef, 0xfce5, 0x42fa,
	{ 0xab, 0xea, 0x3e, 0x7d, 0xf9, 0x19, 0x21, 0xdc }
};
static guint16 ver_dcerpc_IWbemLoginClientIDEx = 0;

static int IWbemLoginClientIDEx_dissect_element_FILETIME_dwLowDateTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_FILETIME_dwHighDateTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthis(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcId(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcessCreationTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_Reserved(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
static int IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_);
	#include "packet-dcom.h"
/* SetClientInfoEx */
static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthis(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	proto_item *sub_item;
	proto_tree *sub_tree;
	sub_item = proto_tree_add_item(tree, hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis, tvb, offset, 0, ENC_NA);
	sub_tree = proto_item_add_subtree(sub_item, ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis);
	offset = dissect_dcom_this(tvb, offset, pinfo, sub_tree, di, drep);
	return offset;
}
static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	proto_item *sub_item;
	proto_tree *sub_tree;
	sub_item = proto_tree_add_item(tree, hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat, tvb, offset, 0, ENC_NA);
	sub_tree = proto_item_add_subtree(sub_item, ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat);
	offset = dissect_dcom_that(tvb, offset, pinfo, sub_tree, di, drep);
	return offset;
}


/* IDL: struct { */
/* IDL: } */

int
IWbemLoginClientIDEx_dissect_struct_ORPCTHIS(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_)
{
	proto_item *item = NULL;
	int old_offset;

	old_offset = offset;

	if (parent_tree) {
		item = proto_tree_add_item(parent_tree, hf_index, tvb, offset, -1, ENC_NA);
	}


	proto_item_set_len(item, offset-old_offset);


	return offset;
}


/* IDL: struct { */
/* IDL: } */

int
IWbemLoginClientIDEx_dissect_struct_ORPCTHAT(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_)
{
	proto_item *item = NULL;
	int old_offset;

	old_offset = offset;

	if (parent_tree) {
		item = proto_tree_add_item(parent_tree, hf_index, tvb, offset, -1, ENC_NA);
	}


	proto_item_set_len(item, offset-old_offset);


	return offset;
}


/* IDL: struct { */
/* IDL: 	uint32 dwLowDateTime; */
/* IDL: 	uint32 dwHighDateTime; */
/* IDL: } */

static int
IWbemLoginClientIDEx_dissect_element_FILETIME_dwLowDateTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_FILETIME_dwLowDateTime, 0);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_FILETIME_dwHighDateTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_FILETIME_dwHighDateTime, 0);

	return offset;
}

int
IWbemLoginClientIDEx_dissect_struct_FILETIME(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_)
{
	proto_item *item = NULL;
	proto_tree *tree = NULL;
	int old_offset;

	ALIGN_TO_4_BYTES;

	old_offset = offset;

	if (parent_tree) {
		item = proto_tree_add_item(parent_tree, hf_index, tvb, offset, -1, ENC_NA);
		tree = proto_item_add_subtree(item, ett_IWbemLoginClientIDEx_FILETIME);
	}

	offset = IWbemLoginClientIDEx_dissect_element_FILETIME_dwLowDateTime(tvb, offset, pinfo, tree, di, drep);

	offset = IWbemLoginClientIDEx_dissect_element_FILETIME_dwHighDateTime(tvb, offset, pinfo, tree, di, drep);


	proto_item_set_len(item, offset-old_offset);


	if (di->call_data->flags & DCERPC_IS_NDR64) {
		ALIGN_TO_4_BYTES;
	}

	return offset;
}

/* IDL: WERROR iwbemloginclientidex_opnum0( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum0_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	guint32 status;

	di->dcerpc_procedure_name="iwbemloginclientidex_opnum0";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str(status, WERR_errors, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum0_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientidex_opnum0";
	return offset;
}

/* IDL: WERROR iwbemloginclientidex_opnum1( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum1_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	guint32 status;

	di->dcerpc_procedure_name="iwbemloginclientidex_opnum1";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str(status, WERR_errors, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum1_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientidex_opnum1";
	return offset;
}

/* IDL: WERROR iwbemloginclientidex_opnum2( */
/* IDL:  */
/* IDL: ); */

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum2_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	guint32 status;

	di->dcerpc_procedure_name="iwbemloginclientidex_opnum2";
	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str(status, WERR_errors, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum2_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	di->dcerpc_procedure_name="iwbemloginclientidex_opnum2";
	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = dissect_ndr_toplevel_pointer(tvb, offset, pinfo, tree, di, drep, IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine_, NDR_POINTER_UNIQUE, "Pointer to ClientMachine (uint16)",hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachine);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	char *data;

	offset = dissect_ndr_cvstring(tvb, offset, pinfo, tree, di, drep, sizeof(guint16), hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachine, FALSE, &data);
	proto_item_append_text(tree, ": %s", data);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = dissect_ndr_toplevel_pointer(tvb, offset, pinfo, tree, di, drep, IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN_, NDR_POINTER_UNIQUE, "Pointer to ClientMachineFQDN (uint16)",hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachineFQDN);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN_(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	char *data;

	offset = dissect_ndr_cvstring(tvb, offset, pinfo, tree, di, drep, sizeof(guint16), hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachineFQDN, FALSE, &data);
	proto_item_append_text(tree, ": %s", data);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcId(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcId, 0);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcessCreationTime(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = IWbemLoginClientIDEx_dissect_struct_FILETIME(tvb,offset,pinfo,tree,di,drep,hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcessCreationTime,0);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_Reserved(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = PIDL_dissect_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_SetClientInfoEx_Reserved, 0);

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	offset = dissect_ndr_toplevel_pointer(tvb, offset, pinfo, tree, di, drep, IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat_, NDR_POINTER_REF, "Pointer to Orpcthat (ORPCTHAT)",hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat);

	return offset;
}

/* IDL: WERROR SetClientInfoEx( */
/* IDL: [in] ORPCTHIS orpcthis, */
/* IDL: [charset(UTF16)] [in] [unique(1)] uint16 *ClientMachine, */
/* IDL: [charset(UTF16)] [in] [unique(1)] uint16 *ClientMachineFQDN, */
/* IDL: [in] uint32 ClientProcId, */
/* IDL: [in] FILETIME ClientProcessCreationTime, */
/* IDL: [in] uint32 Reserved, */
/* IDL: [out] [ref] ORPCTHAT *orpcthat */
/* IDL: ); */

static int
IWbemLoginClientIDEx_dissect_SetClientInfoEx_response(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	guint32 status;

	di->dcerpc_procedure_name="SetClientInfoEx";
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthat(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);

	offset = dissect_ndr_uint32(tvb, offset, pinfo, tree, di, drep, hf_IWbemLoginClientIDEx_werror, &status);

	if (status != 0)
		col_append_fstr(pinfo->cinfo, COL_INFO, ", Error: %s", val_to_str(status, WERR_errors, "Unknown DOS error 0x%08x"));

	return offset;
}

static int
IWbemLoginClientIDEx_dissect_SetClientInfoEx_request(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_)
{
	di->dcerpc_procedure_name="SetClientInfoEx";
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_orpcthis(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachine(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientMachineFQDN(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcId(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_ClientProcessCreationTime(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	offset = IWbemLoginClientIDEx_dissect_element_SetClientInfoEx_Reserved(tvb, offset, pinfo, tree, di, drep);
	offset = dissect_deferred_pointers(pinfo, tvb, offset, di, drep);
	return offset;
}


static const dcerpc_sub_dissector IWbemLoginClientIDEx_dissectors[] = {
	{ 0, "iwbemloginclientidex_opnum0",
	   IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum0_request, IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum0_response},
	{ 1, "iwbemloginclientidex_opnum1",
	   IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum1_request, IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum1_response},
	{ 2, "iwbemloginclientidex_opnum2",
	   IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum2_request, IWbemLoginClientIDEx_dissect_iwbemloginclientidex_opnum2_response},
	{ 3, "SetClientInfoEx",
	   IWbemLoginClientIDEx_dissect_SetClientInfoEx_request, IWbemLoginClientIDEx_dissect_SetClientInfoEx_response},
	{ 0, NULL, NULL, NULL }
};

void proto_register_dcerpc_IWbemLoginClientIDEx(void)
{
	static hf_register_info hf[] = {
	{ &hf_IWbemLoginClientIDEx_FILETIME_dwHighDateTime,
	  { "DwHighDateTime", "IWbemLoginClientIDEx.FILETIME.dwHighDateTime", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_FILETIME_dwLowDateTime,
	  { "DwLowDateTime", "IWbemLoginClientIDEx.FILETIME.dwLowDateTime", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachine,
	  { "ClientMachine", "IWbemLoginClientIDEx.SetClientInfoEx.ClientMachine", FT_STRING, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientMachineFQDN,
	  { "ClientMachineFQDN", "IWbemLoginClientIDEx.SetClientInfoEx.ClientMachineFQDN", FT_STRING, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcId,
	  { "ClientProcId", "IWbemLoginClientIDEx.SetClientInfoEx.ClientProcId", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_ClientProcessCreationTime,
	  { "ClientProcessCreationTime", "IWbemLoginClientIDEx.SetClientInfoEx.ClientProcessCreationTime", FT_NONE, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_Reserved,
	  { "Reserved", "IWbemLoginClientIDEx.SetClientInfoEx.Reserved", FT_UINT32, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat,
	  { "Orpcthat", "IWbemLoginClientIDEx.SetClientInfoEx.orpcthat", FT_NONE, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis,
	  { "Orpcthis", "IWbemLoginClientIDEx.SetClientInfoEx.orpcthis", FT_NONE, BASE_NONE, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_opnum,
	  { "Operation", "IWbemLoginClientIDEx.opnum", FT_UINT16, BASE_DEC, NULL, 0, NULL, HFILL }},
	{ &hf_IWbemLoginClientIDEx_werror,
	  { "Windows Error", "IWbemLoginClientIDEx.werror", FT_UINT32, BASE_HEX, VALS(WERR_errors), 0, NULL, HFILL }},
	};


	static gint *ett[] = {
		&ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthis,
		&ett_IWbemLoginClientIDEx_SetClientInfoEx_orpcthat,
		&ett_dcerpc_IWbemLoginClientIDEx,
		&ett_IWbemLoginClientIDEx_ORPCTHIS,
		&ett_IWbemLoginClientIDEx_ORPCTHAT,
		&ett_IWbemLoginClientIDEx_FILETIME,
	};

	proto_dcerpc_IWbemLoginClientIDEx = proto_register_protocol("IWBEMLOGINCLIENTIDEX (pidl)", "IWBEMLOGINCLIENTIDEX", "IWbemLoginClientIDEx");
	proto_register_field_array(proto_dcerpc_IWbemLoginClientIDEx, hf, array_length (hf));
	proto_register_subtree_array(ett, array_length(ett));
}

void proto_reg_handoff_dcerpc_IWbemLoginClientIDEx(void)
{
	dcerpc_init_uuid(proto_dcerpc_IWbemLoginClientIDEx, ett_dcerpc_IWbemLoginClientIDEx,
		&uuid_dcerpc_IWbemLoginClientIDEx, ver_dcerpc_IWbemLoginClientIDEx,
		IWbemLoginClientIDEx_dissectors, hf_IWbemLoginClientIDEx_opnum);
}
