/**************************************************************************************************
 * Copyright (c) 2021 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * See the NOTICE file(s) distributed with this work for additional information regarding         *
 * copyright ownership.                                                                           *
 *                                                                                                *
 * This program and the accompanying materials are made available under the terms of the Eclipse  *
 * Public License 2.0 which is available at http://www.eclipse.org/legal/epl-2.0                  *
 *                                                                                                *
 * SPDX-License-Identifier: EPL-2.0                                                               *
 **************************************************************************************************/

#pragma once

#include <string>

namespace keyple {
namespace core {
namespace common {

/**
 * Generic type for a Keyple card extension.
 *
 * @since 2.0
 */
class KeypleCardExtension {
public:
    /**
     * Gets the Reader API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0
     */
    virtual const std::string& getReaderApiVersion() const = 0;

    /**
     * Gets the Card API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0
     */
    virtual const std::string& getCardApiVersion() const = 0;

    /**
     * Gets the Common API version used at compile time
     *
     * @return A not empty String.
     * @since 2.0
     */
    virtual const std::string& getCommonApiVersion() const = 0;
 };

}
}
}
