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

// Function: BMotionGetCtrl__FP5BcObj
// Address: 0x1a57d0 - 0x1a5844
void BMotionGetCtrl__FP5BcObj_0x1a57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionGetCtrl__FP5BcObj_0x1a57d0");
#endif

    switch (ctx->pc) {
        case 0x1a57ecu: goto label_1a57ec;
        case 0x1a5828u: goto label_1a5828;
        case 0x1a5830u: goto label_1a5830;
        default: break;
    }

    ctx->pc = 0x1a57d0u;

    // 0x1a57d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a57d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a57d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a57d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57dc: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a57e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a57e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a57e4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A57E4u;
    SET_GPR_U32(ctx, 31, 0x1A57ECu);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A57E4u, 0x1A57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57ECu;
label_1a57ec:
    // 0x1a57ec: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a57f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57f4: 0x8f90917c  lw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a57f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a57f8: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1a57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x1a57fc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A57FCu;
    {
        const bool branch_taken_0x1a57fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57FCu;
        // 0x1a5800: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57fc) {
            ctx->pc = 0x1A5820u;
            goto label_1a5820;
        }
    }
    ctx->pc = 0x1A5804u;
    // 0x1a5804: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a5804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a5808: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1a5808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a580c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5810: 0xaf83917c  sw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a5810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 3));
    // 0x1a5814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5814u;
    {
        const bool branch_taken_0x1a5814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5814u;
        // 0x1a5818: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5814) {
            ctx->pc = 0x1A5828u;
            goto label_1a5828;
        }
    }
    ctx->pc = 0x1A581Cu;
    // 0x1a581c: 0x0  nop
    ctx->pc = 0x1a581cu;
    // NOP
label_1a5820:
    // 0x1a5820: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5820u;
    SET_GPR_U32(ctx, 31, 0x1A5828u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5820u, 0x1A5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5828u;
label_1a5828:
    // 0x1a5828: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A5828u;
    SET_GPR_U32(ctx, 31, 0x1A5830u);
    ctx->pc = 0x1A582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5828u;
    // 0x1a582c: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A5828u, 0x1A5830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5830u;
label_1a5830:
    // 0x1a5830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5834: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a583c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A583Cu;
        // 0x1a5840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5844u;
}
