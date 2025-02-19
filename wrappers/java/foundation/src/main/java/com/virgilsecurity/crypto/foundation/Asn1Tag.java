/*
* Copyright (C) 2015-2021 Virgil Security, Inc.
*
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* (1) Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
*
* (2) Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in
* the documentation and/or other materials provided with the
* distribution.
*
* (3) Neither the name of the copyright holder nor the names of its
* contributors may be used to endorse or promote products derived from
* this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
* Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
*/

package com.virgilsecurity.crypto.foundation;

/*
* ASN.1 constants.
*/
public enum Asn1Tag {

    BOOLEAN(0x01),
    INTEGER(0x02),
    BIT_STRING(0x03),
    OCTET_STRING(0x04),
    NULL(0x05),
    OID(0x06),
    UTF8_STRING(0x0C),
    SEQUENCE(0x10),
    SET(0x11),
    PRINTABLE_STRING(0x13),
    T61_STRING(0x14),
    IA5_STRING(0x16),
    UTC_TIME(0x17),
    GENERALIZED_TIME(0x18),
    UNIVERSAL_STRING(0x1C),
    BMP_STRING(0x1E),
    PRIMITIVE(0x00),
    CONSTRUCTED(0x20),
    CONTEXT_SPECIFIC(0x80);

    private final int code;

    private Asn1Tag(int code) {
        this.code = code;
    }

    public int getCode() {
        return code;
    }

    public static Asn1Tag fromCode(int code) {
        for (Asn1Tag a : Asn1Tag.values()) {
            if (a.code == code) {
                return a;
            }
        }
        return null;
    }
}

