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

// Function: entry_00160c2c
// Address: 0x160c2c - 0x160c34
void entry_00160c2c_0x160c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160c2c_0x160c2c");
#endif

    ctx->pc = 0x160c2cu;

    // 0x160c2c: 0x1012  mflo        $v0
    ctx->pc = 0x160c2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x160c30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x160c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160c34u;
}
