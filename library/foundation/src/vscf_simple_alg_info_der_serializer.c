//  @license
// --------------------------------------------------------------------------
//  Copyright (C) 2015-2019 Virgil Security, Inc.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//      (1) Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//      (2) Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//
//      (3) Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
//  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
//  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//  Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
// --------------------------------------------------------------------------
// clang-format off


//  @description
// --------------------------------------------------------------------------
//  This module contains 'simple alg info der serializer' implementation.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vscf_simple_alg_info_der_serializer.h"
#include "vscf_assert.h"
#include "vscf_memory.h"
#include "vscf_oid.h"
#include "vscf_asn1wr.h"
#include "vscf_asn1_tag.h"
#include "vscf_alg_info.h"
#include "vscf_simple_alg_info.h"
#include "vscf_asn1_writer.h"
#include "vscf_simple_alg_info_der_serializer_defs.h"
#include "vscf_simple_alg_info_der_serializer_internal.h"

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Setup predefined values to the uninitialized class dependencies.
//
VSCF_PUBLIC vscf_error_t
vscf_simple_alg_info_der_serializer_setup_defaults(
        vscf_simple_alg_info_der_serializer_t *simple_alg_info_der_serializer) {

    VSCF_ASSERT_PTR(simple_alg_info_der_serializer);

    if (NULL == simple_alg_info_der_serializer->asn1_writer) {
        vscf_simple_alg_info_der_serializer_take_asn1_writer(
                simple_alg_info_der_serializer, vscf_asn1wr_impl(vscf_asn1wr_new()));
    }

    return vscf_SUCCESS;
}

//
//  Return buffer size enough to hold serialized algorithm.
//
VSCF_PUBLIC size_t
vscf_simple_alg_info_der_serializer_serialize_len(
        vscf_simple_alg_info_der_serializer_t *simple_alg_info_der_serializer, const vscf_impl_t *alg_info) {

    VSCF_ASSERT_PTR(simple_alg_info_der_serializer);
    VSCF_ASSERT_PTR(alg_info);

    size_t len = 1 + 1 +      //  AlgorithmIdentifier ::= SEQUENCE {
                 1 + 1 + 32 + //          algorithm OBJECT IDENTIFIER,
                 0;           //          parameters ANY DEFINED BY algorithm OPTIONAL
                              //  }

    return len;
}

//
//  Serialize algorithm info to buffer class.
//
VSCF_PUBLIC void
vscf_simple_alg_info_der_serializer_serialize(vscf_simple_alg_info_der_serializer_t *simple_alg_info_der_serializer,
        const vscf_impl_t *alg_info, vsc_buffer_t *out) {

    //  AlgorithmIdentifier ::= SEQUENCE {
    //          algorithm OBJECT IDENTIFIER,
    //          parameters ANY DEFINED BY algorithm OPTIONAL
    //  }

    VSCF_ASSERT_PTR(simple_alg_info_der_serializer);
    VSCF_ASSERT_PTR(alg_info);
    VSCF_ASSERT_PTR(out);
    VSCF_ASSERT(vsc_buffer_is_valid(out));
    VSCF_ASSERT_PTR(simple_alg_info_der_serializer->asn1_writer);

    VSCF_ASSERT(vsc_buffer_unused_len(out) >=
                vscf_simple_alg_info_der_serializer_serialize_len(simple_alg_info_der_serializer, alg_info));

    vscf_impl_t *asn1_writer = simple_alg_info_der_serializer->asn1_writer;
    vscf_asn1_writer_reset(asn1_writer, vsc_buffer_unused_bytes(out), vsc_buffer_unused_len(out));

    vsc_data_t oid = vscf_oid_from_alg_id(vscf_alg_info_alg_id(alg_info));
    size_t len = vscf_asn1_writer_write_oid(asn1_writer, oid);
    vscf_asn1_writer_write_sequence(asn1_writer, len);
    VSCF_ASSERT(vscf_asn1_writer_error(asn1_writer) == vscf_SUCCESS);

    vsc_buffer_inc_used(out, vscf_asn1_writer_written_len(asn1_writer));

    if (!vsc_buffer_is_reverse(out)) {
        vscf_asn1_writer_finish(asn1_writer);
    }
}
