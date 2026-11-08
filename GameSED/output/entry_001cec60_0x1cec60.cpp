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

// Function: entry_001cec60
// Address: 0x1cec60 - 0x1ceca0
void entry_001cec60_0x1cec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec60_0x1cec60");
#endif

    switch (ctx->pc) {
        case 0x1cec68u: goto label_1cec68;
        case 0x1cec9cu: goto label_1cec9c;
        default: break;
    }

    ctx->pc = 0x1cec60u;

    // 0x1cec60: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEC60u;
    SET_GPR_U32(ctx, 31, 0x1CEC68u);
    ctx->pc = 0x1CEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC60u;
    // 0x1cec64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEC60u, 0x1CEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC68u;
label_1cec68:
    // 0x1cec68: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CEC68u;
    {
        const bool branch_taken_0x1cec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC68u;
        // 0x1cec6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec68) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEC70u;
    // 0x1cec70: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CEC70u;
    {
        const bool branch_taken_0x1cec70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC70u;
        // 0x1cec74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec70) {
            ctx->pc = 0x1CECA0u;
            return;
        }
    }
    ctx->pc = 0x1CEC78u;
    // 0x1cec78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cec7c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1cec7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec80: 0x26e51de8  addiu       $a1, $s7, 0x1DE8
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7656));
    // 0x1cec84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec88: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cec88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec8c: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cec8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cec90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cec94: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEC94u;
    SET_GPR_U32(ctx, 31, 0x1CEC9Cu);
    ctx->pc = 0x1CEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC94u;
    // 0x1cec98: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEC94u, 0x1CEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC9Cu;
label_1cec9c:
    // 0x1cec9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cec9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ceca0u;
}
