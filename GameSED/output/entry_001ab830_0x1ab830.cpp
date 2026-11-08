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

// Function: entry_001ab830
// Address: 0x1ab830 - 0x1ab850
void entry_001ab830_0x1ab830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab830_0x1ab830");
#endif

    ctx->pc = 0x1ab830u;

label_1ab830:
    // 0x1ab830: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ab830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab834: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AB834u;
    {
        const bool branch_taken_0x1ab834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB834u;
        // 0x1ab838: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab834) {
            ctx->pc = 0x1AB8BCu;
            return;
        }
    }
    ctx->pc = 0x1AB83Cu;
    // 0x1ab83c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1ab83cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab840: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ab840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ab844: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AB844u;
    {
        const bool branch_taken_0x1ab844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB844u;
        // 0x1ab848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab844) {
            ctx->pc = 0x1AB830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab830;
        }
    }
    ctx->pc = 0x1AB84Cu;
    // 0x1ab84c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1ab850u;
}
