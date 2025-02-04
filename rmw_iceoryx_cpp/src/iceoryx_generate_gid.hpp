// Copyright (c) 2019 by Robert Bosch GmbH. All rights reserved.
// Copyright (c) 2022 by Apex.AI Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ICEORYX_GENERATE_GID_HPP_
#define ICEORYX_GENERATE_GID_HPP_

#include "rmw/types.h"

#include "iceoryx_posh/popo/untyped_publisher.hpp"

rmw_gid_t generate_publisher_gid(iox::popo::UntypedPublisher * const publisher);

#endif  // ICEORYX_GENERATE_GID_HPP_
