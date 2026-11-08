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

// Function: Finish__7WcSheet
// Address: 0x192830 - 0x19289c
void Finish__7WcSheet_0x192830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcSheet_0x192830");
#endif

    switch (ctx->pc) {
        case 0x192860u: goto label_192860;
        case 0x192868u: goto label_192868;
        case 0x192880u: goto label_192880;
        default: break;
    }

    ctx->pc = 0x192830u;

    // 0x192830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19283c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192840: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x192840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x192844: 0x263301d0  addiu       $s3, $s1, 0x1D0
    ctx->pc = 0x192844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x192848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19284c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192850: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x192850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x192854: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192854u;
    {
        const bool branch_taken_0x192854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x192858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192854u;
        // 0x192858: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192854) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x19285Cu;
    // 0x19285c: 0x8c9007e0  lw          $s0, 0x7E0($a0)
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
label_192860:
    // 0x192860: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x192860u;
    SET_GPR_U32(ctx, 31, 0x192868u);
    ctx->pc = 0x192864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192860u;
    // 0x192864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x192860u, 0x192868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192868u;
label_192868:
    // 0x192868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19286c: 0x5480fffc  bnel        $a0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19286Cu;
    {
        const bool branch_taken_0x19286c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19286c) {
            ctx->pc = 0x192870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19286Cu;
            // 0x192870: 0x8c9007e0  lw          $s0, 0x7E0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192860;
        }
    }
    ctx->pc = 0x192874u;
label_192874:
    // 0x192874: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x192874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x192878: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x192878u;
    SET_GPR_U32(ctx, 31, 0x192880u);
    ctx->pc = 0x19287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192878u;
    // 0x19287c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x192878u, 0x192880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192880u;
label_192880:
    // 0x192880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19288c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19288cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192894: 0x3e00008  jr          $ra
    ctx->pc = 0x192894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192894u;
        // 0x192898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19289Cu;
}
