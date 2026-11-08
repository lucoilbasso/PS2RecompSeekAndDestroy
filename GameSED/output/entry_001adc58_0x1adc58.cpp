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

// Function: entry_001adc58
// Address: 0x1adc58 - 0x1adc9c
void entry_001adc58_0x1adc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adc58_0x1adc58");
#endif

    switch (ctx->pc) {
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc88u: goto label_1adc88;
        default: break;
    }

    ctx->pc = 0x1adc58u;

label_1adc58:
    // 0x1adc58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1adc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc64: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adc68: 0xc06b90c  jal         func_1AE430
    ctx->pc = 0x1ADC68u;
    SET_GPR_U32(ctx, 31, 0x1ADC70u);
    ctx->pc = 0x1ADC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC68u;
    // 0x1adc6c: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE430u, 0x1ADC68u, 0x1ADC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC70u;
label_1adc70:
    // 0x1adc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1adc74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1adc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1adc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc80: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1ADC80u;
    SET_GPR_U32(ctx, 31, 0x1ADC88u);
    ctx->pc = 0x1ADC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC80u;
    // 0x1adc84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1ADC80u, 0x1ADC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC88u;
label_1adc88:
    // 0x1adc88: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x1adc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1adc8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1ADC8Cu;
    {
        const bool branch_taken_0x1adc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC8Cu;
        // 0x1adc90: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc8c) {
            ctx->pc = 0x1ADC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc58;
        }
    }
    ctx->pc = 0x1ADC94u;
    // 0x1adc94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADC94u;
    {
        const bool branch_taken_0x1adc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC94u;
        // 0x1adc98: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc94) {
            ctx->pc = 0x1ADCA4u;
            return;
        }
    }
    ctx->pc = 0x1ADC9Cu;
}
