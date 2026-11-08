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

// Function: entry_001b4f94
// Address: 0x1b4f94 - 0x1b4fa0
void entry_001b4f94_0x1b4f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4f94_0x1b4f94");
#endif

    ctx->pc = 0x1b4f94u;

    // 0x1b4f94: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4f94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f98: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f9c: 0x2610a6c0  addiu       $s0, $s0, -0x5940
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    ctx->pc = 0x1b4fa0u;
}
