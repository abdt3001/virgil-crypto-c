/*
* Copyright (C) 2015-2019 Virgil Security, Inc.
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
* Implements PKCS#8 key serialization to PEM format.
*/
public class Pkcs8Serializer implements AutoCloseable, KeySerializer {

    public long cCtx;

    /* Create underlying C context. */
    public Pkcs8Serializer() {
        super();
        this.cCtx = FoundationJNI.INSTANCE.pkcs8Serializer_new();
    }

    /*
    * Acquire C context.
    * Note. This method is used in generated code only, and SHOULD NOT be used in another way.
    */
    public Pkcs8Serializer(long cCtx) {
        super();
        this.cCtx = cCtx;
    }

    public void setAsn1Writer(Asn1Writer asn1Writer) {
        FoundationJNI.INSTANCE.pkcs8Serializer_setAsn1Writer(this.cCtx, asn1Writer);
    }

    public void setDerSerializer(KeySerializer derSerializer) {
        FoundationJNI.INSTANCE.pkcs8Serializer_setDerSerializer(this.cCtx, derSerializer);
    }

    /*
    * Setup predefined values to the uninitialized class dependencies.
    */
    public void setupDefaults() {
        FoundationJNI.INSTANCE.pkcs8Serializer_setupDefaults(this.cCtx);
    }

    /* Close resource. */
    public void close() {
        FoundationJNI.INSTANCE.pkcs8Serializer_close(this.cCtx);
    }

    /*
    * Calculate buffer size enough to hold serialized public key.
    *
    * Precondition: public key must be exportable.
    */
    public int serializedPublicKeyLen(PublicKey publicKey) {
        return FoundationJNI.INSTANCE.pkcs8Serializer_serializedPublicKeyLen(this.cCtx, publicKey);
    }

    /*
    * Serialize given public key to an interchangeable format.
    *
    * Precondition: public key must be exportable.
    */
    public byte[] serializePublicKey(PublicKey publicKey) throws FoundationException {
        return FoundationJNI.INSTANCE.pkcs8Serializer_serializePublicKey(this.cCtx, publicKey);
    }

    /*
    * Calculate buffer size enough to hold serialized private key.
    *
    * Precondition: private key must be exportable.
    */
    public int serializedPrivateKeyLen(PrivateKey privateKey) {
        return FoundationJNI.INSTANCE.pkcs8Serializer_serializedPrivateKeyLen(this.cCtx, privateKey);
    }

    /*
    * Serialize given private key to an interchangeable format.
    *
    * Precondition: private key must be exportable.
    */
    public byte[] serializePrivateKey(PrivateKey privateKey) throws FoundationException {
        return FoundationJNI.INSTANCE.pkcs8Serializer_serializePrivateKey(this.cCtx, privateKey);
    }
}

