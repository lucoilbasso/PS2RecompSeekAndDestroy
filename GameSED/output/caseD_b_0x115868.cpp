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
// Address: 0x115868 - 0x115874
void caseD_b_0x115868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x115868");
#endif

    ctx->pc = 0x115868u;

    // 0x115868: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11586c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115870: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x115870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    ctx->pc = 0x115874u;
}
