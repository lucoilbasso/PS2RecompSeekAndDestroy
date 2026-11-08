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

// Function: entry_0019ae70
// Address: 0x19ae70 - 0x19aea0
void entry_0019ae70_0x19ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae70_0x19ae70");
#endif

    ctx->pc = 0x19ae70u;

label_19ae70:
    // 0x19ae70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ae74: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19ae74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ae78: 0x0  nop
    ctx->pc = 0x19ae78u;
    // NOP
    // 0x19ae7c: 0x0  nop
    ctx->pc = 0x19ae7cu;
    // NOP
    // 0x19ae80: 0x0  nop
    ctx->pc = 0x19ae80u;
    // NOP
    // 0x19ae84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AE84u;
    {
        const bool branch_taken_0x19ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE84u;
        // 0x19ae88: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae84) {
            ctx->pc = 0x19AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE8Cu;
    // 0x19ae8c: 0x1109002e  beq         $t0, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x19AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE8Cu;
        // 0x19ae90: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AF48u;
            return;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19ae98: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19ae9c: 0x0  nop
    ctx->pc = 0x19ae9cu;
    // NOP
    ctx->pc = 0x19aea0u;
}
