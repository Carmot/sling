// Copyright 2017 Google Inc. All Rights Reserved.
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
// =============================================================================

#ifndef SYNTAXNET_DRAGNN_CORE_COMPONENT_REGISTRY_H_
#define SYNTAXNET_DRAGNN_CORE_COMPONENT_REGISTRY_H_

#include "base/registry.h"
#include "dragnn/core/interfaces/component.h"

// Macro to add a component to the registry. This macro associates a class with
// its class name as a string, so FooComponent would be associated with the
// string "FooComponent".
#define REGISTER_DRAGNN_COMPONENT(component) \
  REGISTER_COMPONENT_TYPE(syntaxnet::dragnn::Component, #component, component)

#endif  // SYNTAXNET_DRAGNN_CORE_COMPONENT_REGISTRY_H_
