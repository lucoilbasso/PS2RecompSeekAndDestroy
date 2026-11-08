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

// Function: entry_001aaf58
// Address: 0x1aaf58 - 0x1aaf74
void entry_001aaf58_0x1aaf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf58_0x1aaf58");
#endif

    ctx->pc = 0x1aaf58u;

label_1aaf58:
    // 0x1aaf58: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaf5c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AAF5Cu;
    {
        const bool branch_taken_0x1aaf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF5Cu;
        // 0x1aaf60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf5c) {
            ctx->pc = 0x1AAFE0u;
            return;
        }
    }
    ctx->pc = 0x1AAF64u;
    // 0x1aaf64: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1aaf64u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x1aaf68: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1aaf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1aaf6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAF6Cu;
    {
        const bool branch_taken_0x1aaf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF6Cu;
        // 0x1aaf70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf6c) {
            ctx->pc = 0x1AAF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf58;
        }
    }
    ctx->pc = 0x1AAF74u;
}
