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

namespace keyple {
namespace core {
namespace common {

/**
 * Generic type for a factory of Keyple plugin extension.
 *
 * <p>Any Keyple plugin must provide a factory that implements this interface.
 *
 * @since 2.0
 */
class KeyplePluginExtensionFactory {
public:
    /**
     * /!\ C++: added virtual destructor to make class polymorphic
     */
    virtual ~KeyplePluginExtensionFactory() = default;
};

}
}
}
