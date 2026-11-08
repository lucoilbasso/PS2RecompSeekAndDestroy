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

// Function: entry_0013b464
// Address: 0x13b464 - 0x13b48c
void entry_0013b464_0x13b464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b464_0x13b464");
#endif

    ctx->pc = 0x13b464u;

    // 0x13b464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13b468: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13b46c: 0x8c420208  lw          $v0, 0x208($v0)
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
    // 0x13b470: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B470u;
    {
        const bool branch_taken_0x13b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b470) {
            ctx->pc = 0x13B48Cu;
            return;
        }
    }
    ctx->pc = 0x13B478u;
    // 0x13b478: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x13b47c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13b480: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x13b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13b484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B484u;
    {
        const bool branch_taken_0x13b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b484) {
            ctx->pc = 0x13B494u;
            return;
        }
    }
    ctx->pc = 0x13B48Cu;
}
