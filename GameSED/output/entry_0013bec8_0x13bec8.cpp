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

// Function: entry_0013bec8
// Address: 0x13bec8 - 0x13bee0
void entry_0013bec8_0x13bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bec8_0x13bec8");
#endif

    ctx->pc = 0x13bec8u;

    // 0x13bec8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BEC8u;
    {
        const bool branch_taken_0x13bec8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEC8u;
        // 0x13becc: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bec8) {
            ctx->pc = 0x13BEE0u;
            return;
        }
    }
    ctx->pc = 0x13BED0u;
    // 0x13bed0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13bed4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x13bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x13bed8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13BED8u;
    {
        const bool branch_taken_0x13bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bed8) {
            ctx->pc = 0x13BF94u;
            return;
        }
    }
    ctx->pc = 0x13BEE0u;
}
