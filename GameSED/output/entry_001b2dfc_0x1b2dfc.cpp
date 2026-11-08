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

// Function: entry_001b2dfc
// Address: 0x1b2dfc - 0x1b2e08
void entry_001b2dfc_0x1b2dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2dfc_0x1b2dfc");
#endif

    ctx->pc = 0x1b2dfcu;

    // 0x1b2dfc: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b2dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b2e00: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b2e00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b2e04: 0x2610a6c0  addiu       $s0, $s0, -0x5940
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    ctx->pc = 0x1b2e08u;
}
