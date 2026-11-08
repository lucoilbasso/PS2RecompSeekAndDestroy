#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001c7f2c
// Address: 0x1c7f2c - 0x1c7f30
void entry_001c7f2c_0x1c7f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7f2c_0x1c7f2c");
#endif

    ctx->pc = 0x1c7f2cu;

    // 0x1c7f2c: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x1c7f2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    ctx->pc = 0x1c7f30u;
}
