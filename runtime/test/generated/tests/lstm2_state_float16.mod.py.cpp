// clang-format off
// Generated file (from: lstm2_state_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm2_state_float16 {
// Generated lstm2_state_float16 test
#include "generated/examples/lstm2_state_float16.example.cpp"
// Generated model constructor
#include "generated/models/lstm2_state_float16.model.cpp"
} // namespace lstm2_state_float16

TEST_F(GeneratedTests, lstm2_state_float16) {
    execute(lstm2_state_float16::CreateModel,
            lstm2_state_float16::is_ignored,
            lstm2_state_float16::get_examples());
}

