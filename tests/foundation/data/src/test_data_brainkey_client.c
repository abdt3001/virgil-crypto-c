//  Copyright (C) 2015-2021 Virgil Security, Inc.
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


#include "test_data_brainkey_client.h"

const byte test_data_brainkey_client_fake_rng_BYTES[] = {
        0x57, 0x75, 0xae, 0x50, 0xe4, 0x73, 0xeb, 0x36,
        0xca, 0x34, 0xe6, 0x90, 0xb3, 0x67, 0x5f, 0x04,
        0x5d, 0x29, 0x58, 0x37, 0x20, 0x6e, 0x73, 0xd3,
        0x75, 0x49, 0x6b, 0x43, 0xd3, 0x86, 0x64, 0xcc,
};

const byte test_data_brainkey_client_pwd_BYTES[] = {
        0x3f, 0x48, 0x9e, 0x94, 0xd5, 0x0e, 0x1f, 0xe4,
        0xd6, 0x0d, 0xf0, 0x4b, 0x22, 0x99, 0x1d, 0x54,
        0x50, 0x5d, 0xe7, 0xd9, 0x52, 0xd9, 0xa8, 0x2b,
        0x5b, 0x87, 0xba, 0x70, 0x9d, 0xe0, 0x7e, 0xf7,
};

const byte test_data_brainkey_client_deblind_factor_BYTES[] = {
        0xA8, 0x6D, 0x53, 0x8F, 0xF2, 0x11, 0xE2, 0xFC,
        0x67, 0x2B, 0x2C, 0x16, 0x35, 0xB0, 0x00, 0x8D,
        0x49, 0x49, 0x6A, 0x68, 0x8D, 0x52, 0xCF, 0x0A,
        0xB8, 0x60, 0x4C, 0x39, 0x07, 0xDD, 0xE3, 0x43,
};

const byte test_data_brainkey_client_blinded_point_BYTES[] = {
        0x04, 0xB3, 0xD7, 0x5A, 0x7E, 0xB1, 0xEE, 0x72,
        0xF8, 0xCA, 0x0E, 0x8B, 0x39, 0x91, 0x5B, 0x94,
        0xC9, 0x75, 0xA3, 0xE3, 0x85, 0x18, 0x6F, 0x49,
        0x7A, 0xCF, 0x5C, 0xA4, 0x6C, 0x50, 0x8F, 0x34,
        0xE9, 0x3C, 0x96, 0x69, 0x89, 0x7D, 0x8C, 0x43,
        0xF2, 0x35, 0x1F, 0x64, 0x05, 0x89, 0xAA, 0xB5,
        0xE9, 0xD1, 0xB1, 0x12, 0x01, 0x64, 0x65, 0xEA,
        0xC7, 0x16, 0x58, 0x13, 0xA0, 0x41, 0x0E, 0x5E,
        0xA0
};

const byte test_data_brainkey_client_key_name_BYTES[] = {
        0x74, 0x18, 0x83, 0x66, 0x31, 0x6b, 0x50, 0x2e,
        0xb8, 0xe6, 0xbf, 0x64, 0x3b, 0x81, 0x80, 0x02,
        0x47, 0xf6, 0xae, 0xee, 0x57, 0x1e, 0x47, 0xce,
        0x19, 0x90, 0xa4, 0x8f, 0x71, 0xed, 0xfb, 0xdb,
};

const byte test_data_brainkey_client_seed_BYTES[] = {
        0xA1, 0x02, 0x7E, 0xE7, 0xD4, 0x73, 0x6C, 0x2A,
        0x93, 0xA3, 0x59, 0xBE, 0x19, 0xEA, 0xD8, 0xC6,
        0x4B, 0x18, 0x22, 0xFF, 0x2C, 0x9D, 0x8C, 0x09,
        0xE0, 0x92, 0x56, 0x34, 0x15, 0xB4, 0xE9, 0x23,
};

const byte test_data_brainkey_client_hardened_point_BYTES[] = {
        0x04, 0xBF, 0x7D, 0x64, 0x8D, 0xA0, 0xB2, 0x28,
        0xCC, 0xB5, 0x2F, 0x5B, 0xD4, 0x08, 0x95, 0x99,
        0x87, 0x59, 0x88, 0x0E, 0xC6, 0x5A, 0x73, 0x6F,
        0x64, 0x26, 0xE3, 0xD6, 0xC1, 0x40, 0xC3, 0x5C,
        0xA4, 0x81, 0x1A, 0x0D, 0xA8, 0x40, 0x23, 0x96,
        0x18, 0x91, 0x5D, 0xEC, 0xF1, 0x1B, 0xED, 0x40,
        0xB7, 0xD2, 0x03, 0x3A, 0x2E, 0x12, 0x70, 0x9A,
        0x39, 0x9F, 0xE4, 0x7C, 0x9F, 0x4A, 0x68, 0xA7,
        0x45
};

const vsc_data_t test_data_brainkey_client_fake_rng = {
        test_data_brainkey_client_fake_rng_BYTES, sizeof(test_data_brainkey_client_fake_rng_BYTES)
};

const vsc_data_t test_data_brainkey_client_pwd = {
        test_data_brainkey_client_pwd_BYTES, sizeof(test_data_brainkey_client_pwd_BYTES)
};

const vsc_data_t test_data_brainkey_client_deblind_factor = {
        test_data_brainkey_client_deblind_factor_BYTES, sizeof(test_data_brainkey_client_deblind_factor_BYTES)
};

const vsc_data_t test_data_brainkey_client_blinded_point = {
        test_data_brainkey_client_blinded_point_BYTES, sizeof(test_data_brainkey_client_blinded_point_BYTES)
};

const vsc_data_t test_data_brainkey_client_key_name = {
        test_data_brainkey_client_key_name_BYTES, sizeof(test_data_brainkey_client_key_name_BYTES)
};

const vsc_data_t test_data_brainkey_client_seed = {
        test_data_brainkey_client_seed_BYTES, sizeof(test_data_brainkey_client_seed_BYTES)
};

const vsc_data_t test_data_brainkey_client_hardened_point = {
        test_data_brainkey_client_hardened_point_BYTES, sizeof(test_data_brainkey_client_hardened_point_BYTES)
};
