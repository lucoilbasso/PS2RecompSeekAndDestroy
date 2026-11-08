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

// Function: caseD_8
// Address: 0x111e90 - 0x111ea0
void caseD_8_0x111e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x111e90");
#endif

    ctx->pc = 0x111e90u;

    // 0x111e90: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x111e90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e94: 0x8e133630  lw          $s3, 0x3630($s0)
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
    // 0x111e98: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x111E98u;
    {
        const bool branch_taken_0x111e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E98u;
        // 0x111e9c: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e98) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111EA0u;
}
