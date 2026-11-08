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

// Function: caseD_b
// Address: 0x116040 - 0x11604c
void caseD_b_0x116040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x116040");
#endif

    ctx->pc = 0x116040u;

    // 0x116040: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116044: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116048: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    ctx->pc = 0x11604cu;
}
