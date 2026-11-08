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

// Function: entry_001b646c
// Address: 0x1b646c - 0x1b6478
void entry_001b646c_0x1b646c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b646c_0x1b646c");
#endif

    ctx->pc = 0x1b646cu;

    // 0x1b646c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1b646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b6470: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b6474: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1b6474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b6478u;
}
