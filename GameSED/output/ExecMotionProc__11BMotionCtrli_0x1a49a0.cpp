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

// Function: ExecMotionProc__11BMotionCtrli
// Address: 0x1a49a0 - 0x1a49ec
void ExecMotionProc__11BMotionCtrli_0x1a49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecMotionProc__11BMotionCtrli_0x1a49a0");
#endif

    switch (ctx->pc) {
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        default: break;
    }

    ctx->pc = 0x1a49a0u;

label_1a49a0:
    // 0x1a49a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a49a4:
    // 0x1a49a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a49a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a49a8:
    // 0x1a49a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a49ac:
    // 0x1a49ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a49acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a49b0:
    // 0x1a49b0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a49b4:
    // 0x1a49b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a49b8:
    if (ctx->pc == 0x1A49B8u) {
        ctx->pc = 0x1A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49B4u;
        // 0x1a49b8: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49BCu;
        goto label_1a49bc;
    }
    ctx->pc = 0x1A49B4u;
    {
        const bool branch_taken_0x1a49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49B4u;
        // 0x1a49b8: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49b4) {
            ctx->pc = 0x1A49D0u;
            goto label_1a49d0;
        }
    }
    ctx->pc = 0x1A49BCu;
label_1a49bc:
    // 0x1a49bc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_1a49c0:
    if (ctx->pc == 0x1A49C0u) {
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49BCu;
        // 0x1a49c0: 0xac650024  sw          $a1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49C4u;
        goto label_1a49c4;
    }
    ctx->pc = 0x1A49BCu;
    {
        const bool branch_taken_0x1a49bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49BCu;
        // 0x1a49c0: 0xac650024  sw          $a1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49bc) {
            ctx->pc = 0x1A49D0u;
            goto label_1a49d0;
        }
    }
    ctx->pc = 0x1A49C4u;
label_1a49c4:
    // 0x1a49c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a49c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a49c8:
    // 0x1a49c8: 0x806881e  j           func_1A2078
label_1a49cc:
    if (ctx->pc == 0x1A49CCu) {
        ctx->pc = 0x1A49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49C8u;
        // 0x1a49cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49D0u;
        goto label_1a49d0;
    }
    ctx->pc = 0x1A49C8u;
    ctx->pc = 0x1A49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A49C8u;
    // 0x1a49cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    ChangeNextProc__11BMotionCtrl_0x1a2078(rdram, ctx, runtime); return;
    ctx->pc = 0x1A49D0u;
label_1a49d0:
    // 0x1a49d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a49d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a49d4:
    // 0x1a49d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a49d8:
    // 0x1a49d8: 0x40f809  jalr        $v0
label_1a49dc:
    if (ctx->pc == 0x1A49DCu) {
        ctx->pc = 0x1A49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49D8u;
        // 0x1a49dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49E0u;
        goto label_1a49e0;
    }
    ctx->pc = 0x1A49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A49E0u);
        ctx->pc = 0x1A49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49D8u;
        // 0x1a49dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49D8u, 0x1A49E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49E0u;
label_1a49e0:
    // 0x1a49e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a49e4:
    // 0x1a49e4: 0x3e00008  jr          $ra
label_1a49e8:
    if (ctx->pc == 0x1A49E8u) {
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E4u;
        // 0x1a49e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49ECu;
        goto label_fallthrough_0x1a49e4;
    }
    ctx->pc = 0x1A49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E4u;
        // 0x1a49e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a49e4:
    ctx->pc = 0x1A49ECu;
}
