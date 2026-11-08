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

// Function: entry_0014174c
// Address: 0x14174c - 0x141750
void entry_0014174c_0x14174c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014174c_0x14174c");
#endif

    ctx->pc = 0x14174cu;

    // 0x14174c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x141750u;
}
