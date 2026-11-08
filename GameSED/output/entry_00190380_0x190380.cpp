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

// Function: entry_00190380
// Address: 0x190380 - 0x19038c
void entry_00190380_0x190380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190380_0x190380");
#endif

    ctx->pc = 0x190380u;

    // 0x190380: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x190384: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x190384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x19038cu;
}
