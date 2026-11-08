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
// Address: 0x115668 - 0x115674
void caseD_b_0x115668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x115668");
#endif

    ctx->pc = 0x115668u;

    // 0x115668: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11566c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115670: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    ctx->pc = 0x115674u;
}
