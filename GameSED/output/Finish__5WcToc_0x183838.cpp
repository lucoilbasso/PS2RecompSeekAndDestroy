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

// Function: Finish__5WcToc
// Address: 0x183838 - 0x18388c
void Finish__5WcToc_0x183838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__5WcToc_0x183838");
#endif

    switch (ctx->pc) {
        case 0x183860u: goto label_183860;
        case 0x183874u: goto label_183874;
        case 0x18387cu: goto label_18387c;
        default: break;
    }

    ctx->pc = 0x183838u;

    // 0x183838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18383c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183844: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x183844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x183848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18384c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x18384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x183850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183850u;
    {
        const bool branch_taken_0x183850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183850u;
        // 0x183854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183850) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x183858u;
    // 0x183858: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x183858u;
    SET_GPR_U32(ctx, 31, 0x183860u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x183858u, 0x183860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183860u;
label_183860:
    // 0x183860: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183864u;
    {
        const bool branch_taken_0x183864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183864) {
            ctx->pc = 0x183874u;
            goto label_183874;
        }
    }
    ctx->pc = 0x18386Cu;
    // 0x18386c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18386Cu;
    SET_GPR_U32(ctx, 31, 0x183874u);
    ctx->pc = 0x183870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18386Cu;
    // 0x183870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18386Cu, 0x183874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183874u;
label_183874:
    // 0x183874: 0xc05f3c8  jal         func_17CF20
    ctx->pc = 0x183874u;
    SET_GPR_U32(ctx, 31, 0x18387Cu);
    ctx->pc = 0x183878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183874u;
    // 0x183878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF20u, 0x183874u, 0x18387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18387Cu;
label_18387c:
    // 0x18387c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18387cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x183880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183884: 0x3e00008  jr          $ra
    ctx->pc = 0x183884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183884u;
        // 0x183888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18388Cu;
}
