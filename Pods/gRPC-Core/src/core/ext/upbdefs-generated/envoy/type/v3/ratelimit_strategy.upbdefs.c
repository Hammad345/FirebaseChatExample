/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/v3/ratelimit_strategy.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/v3/ratelimit_strategy.upbdefs.h"
#include "envoy/type/v3/ratelimit_strategy.upb.h"

extern _upb_DefPool_Init envoy_type_v3_ratelimit_unit_proto_upbdefinit;
extern _upb_DefPool_Init envoy_type_v3_token_bucket_proto_upbdefinit;
extern _upb_DefPool_Init xds_annotations_v3_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[853] = {'\n', '&', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'v', '3', '/', 'r', 'a', 't', 'e', 'l', 'i', 'm', 'i', 't', 
'_', 's', 't', 'r', 'a', 't', 'e', 'g', 'y', '.', 'p', 'r', 'o', 't', 'o', '\022', '\r', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 
'p', 'e', '.', 'v', '3', '\032', '\"', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'v', '3', '/', 'r', 'a', 't', 'e', 
'l', 'i', 'm', 'i', 't', '_', 'u', 'n', 'i', 't', '.', 'p', 'r', 'o', 't', 'o', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 't', 
'y', 'p', 'e', '/', 'v', '3', '/', 't', 'o', 'k', 'e', 'n', '_', 'b', 'u', 'c', 'k', 'e', 't', '.', 'p', 'r', 'o', 't', 'o', 
'\032', '\037', 'x', 'd', 's', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', '3', '/', 's', 't', 'a', 't', 
'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 
's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 
'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\355', '\003', '\n', '\021', 'R', 'a', 't', 'e', 'L', 'i', 
'm', 'i', 't', 'S', 't', 'r', 'a', 't', 'e', 'g', 'y', '\022', '[', '\n', '\014', 'b', 'l', 'a', 'n', 'k', 'e', 't', '_', 'r', 'u', 
'l', 'e', '\030', '\001', ' ', '\001', '(', '\016', '2', ',', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', '3', '.', 
'R', 'a', 't', 'e', 'L', 'i', 'm', 'i', 't', 'S', 't', 'r', 'a', 't', 'e', 'g', 'y', '.', 'B', 'l', 'a', 'n', 'k', 'e', 't', 
'R', 'u', 'l', 'e', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'H', '\000', 'R', '\013', 'b', 'l', 'a', 'n', 'k', 'e', 't', 
'R', 'u', 'l', 'e', '\022', 'k', '\n', '\026', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'p', 'e', 'r', '_', 't', 'i', 'm', 'e', 
'_', 'u', 'n', 'i', 't', '\030', '\002', ' ', '\001', '(', '\013', '2', '4', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 
'v', '3', '.', 'R', 'a', 't', 'e', 'L', 'i', 'm', 'i', 't', 'S', 't', 'r', 'a', 't', 'e', 'g', 'y', '.', 'R', 'e', 'q', 'u', 
'e', 's', 't', 's', 'P', 'e', 'r', 'T', 'i', 'm', 'e', 'U', 'n', 'i', 't', 'H', '\000', 'R', '\023', 'r', 'e', 'q', 'u', 'e', 's', 
't', 's', 'P', 'e', 'r', 'T', 'i', 'm', 'e', 'U', 'n', 'i', 't', '\022', '?', '\n', '\014', 't', 'o', 'k', 'e', 'n', '_', 'b', 'u', 
'c', 'k', 'e', 't', '\030', '\003', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', 
'3', '.', 'T', 'o', 'k', 'e', 'n', 'B', 'u', 'c', 'k', 'e', 't', 'H', '\000', 'R', '\013', 't', 'o', 'k', 'e', 'n', 'B', 'u', 'c', 
'k', 'e', 't', '\032', '\217', '\001', '\n', '\023', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', 'P', 'e', 'r', 'T', 'i', 'm', 'e', 'U', 'n', 
'i', 't', '\022', '3', '\n', '\026', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', '_', 'p', 'e', 'r', '_', 't', 'i', 'm', 'e', '_', 'u', 
'n', 'i', 't', '\030', '\001', ' ', '\001', '(', '\004', 'R', '\023', 'r', 'e', 'q', 'u', 'e', 's', 't', 's', 'P', 'e', 'r', 'T', 'i', 'm', 
'e', 'U', 'n', 'i', 't', '\022', 'C', '\n', '\t', 't', 'i', 'm', 'e', '_', 'u', 'n', 'i', 't', '\030', '\002', ' ', '\001', '(', '\016', '2', 
'\034', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', '3', '.', 'R', 'a', 't', 'e', 'L', 'i', 'm', 'i', 't', 
'U', 'n', 'i', 't', 'B', '\010', '\372', 'B', '\005', '\202', '\001', '\002', '\020', '\001', 'R', '\010', 't', 'i', 'm', 'e', 'U', 'n', 'i', 't', '\"', 
'*', '\n', '\013', 'B', 'l', 'a', 'n', 'k', 'e', 't', 'R', 'u', 'l', 'e', '\022', '\r', '\n', '\t', 'A', 'L', 'L', 'O', 'W', '_', 'A', 
'L', 'L', '\020', '\000', '\022', '\014', '\n', '\010', 'D', 'E', 'N', 'Y', '_', 'A', 'L', 'L', '\020', '\001', 'B', '\017', '\n', '\010', 's', 't', 'r', 
'a', 't', 'e', 'g', 'y', '\022', '\003', '\370', 'B', '\001', 'B', '\204', '\001', '\n', '\033', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 
'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', '3', 'B', '\026', 'R', 'a', 't', 'e', 'l', 'i', 
'm', 'i', 't', 'S', 't', 'r', 'a', 't', 'e', 'g', 'y', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', ';', 'g', 'i', 't', 'h', 'u', 
'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 
'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'v', '3', ';', 't', 'y', 
'p', 'e', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', '\322', '\306', '\244', '\341', '\006', '\002', '\010', '\001', 'b', '\006', 'p', 'r', 'o', 
't', 'o', '3', 
};

static _upb_DefPool_Init *deps[6] = {
  &envoy_type_v3_ratelimit_unit_proto_upbdefinit,
  &envoy_type_v3_token_bucket_proto_upbdefinit,
  &xds_annotations_v3_status_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_type_v3_ratelimit_strategy_proto_upbdefinit = {
  deps,
  &envoy_type_v3_ratelimit_strategy_proto_upb_file_layout,
  "envoy/type/v3/ratelimit_strategy.proto",
  UPB_STRINGVIEW_INIT(descriptor, 853)
};
