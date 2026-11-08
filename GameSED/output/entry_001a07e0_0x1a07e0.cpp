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

// Function: entry_001a07e0
// Address: 0x1a07e0 - 0x1a07e8
void entry_001a07e0_0x1a07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07e0_0x1a07e0");
#endif

    ctx->pc = 0x1a07e0u;

    // 0x1a07e0: 0x2447d8c8  addiu       $a3, $v0, -0x2738
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957256));
    // 0x1a07e4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1a07e8u;
}
