/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_POW_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_POW_H

#include "OperationsValidationUtils.h"

namespace android {
namespace nn {
namespace pow {

Result<Version> validate(const IOperationValidationContext* context);

bool prepare(const Shape& in1, const Shape& in2, Shape* output);

bool eval(const void* baseData, const Shape& baseShape, const void* exponentData,
          const Shape& exponentShape, void* outputData, const Shape& outputShape);

}  // namespace pow
}  // namespace nn
}  // namespace android

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_POW_H
