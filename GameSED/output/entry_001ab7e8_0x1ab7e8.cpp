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

// Function: entry_001ab7e8
// Address: 0x1ab7e8 - 0x1ab804
void entry_001ab7e8_0x1ab7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab7e8_0x1ab7e8");
#endif

    ctx->pc = 0x1ab7e8u;

label_1ab7e8:
    // 0x1ab7e8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ab7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab7ec: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1AB7ECu;
    {
        const bool branch_taken_0x1ab7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7ECu;
        // 0x1ab7f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7ec) {
            ctx->pc = 0x1AB8A8u;
            return;
        }
    }
    ctx->pc = 0x1AB7F4u;
    // 0x1ab7f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab7f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ab7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ab7fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AB7FCu;
    {
        const bool branch_taken_0x1ab7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7FCu;
        // 0x1ab800: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7fc) {
            ctx->pc = 0x1AB7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab7e8;
        }
    }
    ctx->pc = 0x1AB804u;
}
