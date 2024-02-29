//
// SPDX-License-Identifier: Apache-2.0
//

// Copyright 2022 Autodesk, Inc.
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
#pragma once

#include <ai_nodes.h>

#include <pxr/usd/usd/prim.h>

#include <string>
#include <unordered_map>
#include <vector>

#include "prim_writer.h"

PXR_NAMESPACE_USING_DIRECTIVE

class UsdArnoldWriteOptions : public UsdArnoldPrimWriter {
public:

    UsdArnoldWriteOptions() : UsdArnoldPrimWriter() {}
    void Write(const AtNode *node, UsdArnoldWriter &writer) override;
};

class UsdArnoldWriteDriver : public UsdArnoldPrimWriter {
public:

    UsdArnoldWriteDriver() : UsdArnoldPrimWriter() {}
    void Write(const AtNode *node, UsdArnoldWriter &writer) override;

};
