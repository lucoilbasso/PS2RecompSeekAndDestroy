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

// Function: entry_001aaf28
// Address: 0x1aaf28 - 0x1aaf44
void entry_001aaf28_0x1aaf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf28_0x1aaf28");
#endif

    ctx->pc = 0x1aaf28u;

label_1aaf28:
    // 0x1aaf28: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1aaf28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaf2c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AAF2Cu;
    {
        const bool branch_taken_0x1aaf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF2Cu;
        // 0x1aaf30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf2c) {
            ctx->pc = 0x1AAFD4u;
            return;
        }
    }
    ctx->pc = 0x1AAF34u;
    // 0x1aaf34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aaf38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aaf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aaf3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAF3Cu;
    {
        const bool branch_taken_0x1aaf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF3Cu;
        // 0x1aaf40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf3c) {
            ctx->pc = 0x1AAF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf28;
        }
    }
    ctx->pc = 0x1AAF44u;
}
