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

// Function: CleanMotionWork__11BMotionCtrl
// Address: 0x1a43a0 - 0x1a4428
void CleanMotionWork__11BMotionCtrl_0x1a43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CleanMotionWork__11BMotionCtrl_0x1a43a0");
#endif

    switch (ctx->pc) {
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a4414u: goto label_1a4414;
        default: break;
    }

    ctx->pc = 0x1a43a0u;

label_1a43a0:
    // 0x1a43a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a43a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a43a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a43a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a43a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a43b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a43b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a43b8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a43bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A43BCu;
    {
        const bool branch_taken_0x1a43bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43BCu;
        // 0x1a43c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43bc) {
            ctx->pc = 0x1A43D4u;
            goto label_1a43d4;
        }
    }
    ctx->pc = 0x1A43C4u;
    // 0x1a43c4: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A43C4u;
    SET_GPR_U32(ctx, 31, 0x1A43CCu);
    ctx->pc = 0x1A43A0u;
    goto label_1a43a0;
    ctx->pc = 0x1A43CCu;
label_1a43cc:
    // 0x1a43cc: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A43CCu;
    SET_GPR_U32(ctx, 31, 0x1A43D4u);
    ctx->pc = 0x1A43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43CCu;
    // 0x1a43d0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A43CCu, 0x1A43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43D4u;
label_1a43d4:
    // 0x1a43d4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a43d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A43D8u;
    {
        const bool branch_taken_0x1a43d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43d8) {
            ctx->pc = 0x1A43DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43D8u;
            // 0x1a43dc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A43F4u;
            goto label_1a43f4;
        }
    }
    ctx->pc = 0x1A43E0u;
    // 0x1a43e0: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A43E0u;
    SET_GPR_U32(ctx, 31, 0x1A43E8u);
    ctx->pc = 0x1A43A0u;
    goto label_1a43a0;
    ctx->pc = 0x1A43E8u;
label_1a43e8:
    // 0x1a43e8: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A43E8u;
    SET_GPR_U32(ctx, 31, 0x1A43F0u);
    ctx->pc = 0x1A43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43E8u;
    // 0x1a43ec: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A43E8u, 0x1A43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F0u;
label_1a43f0:
    // 0x1a43f0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a43f4:
    // 0x1a43f4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A43F4u;
    {
        const bool branch_taken_0x1a43f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43f4) {
            ctx->pc = 0x1A43F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43F4u;
            // 0x1a43f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4418u;
            goto label_1a4418;
        }
    }
    ctx->pc = 0x1A43FCu;
    // 0x1a43fc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1a43fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a4400: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a4400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a4404: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4404u;
    {
        const bool branch_taken_0x1a4404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4404) {
            ctx->pc = 0x1A4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4404u;
            // 0x1a4408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4418u;
            goto label_1a4418;
        }
    }
    ctx->pc = 0x1A440Cu;
    // 0x1a440c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A440Cu;
    SET_GPR_U32(ctx, 31, 0x1A4414u);
    ctx->pc = 0x1A4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A440Cu;
    // 0x1a4410: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A440Cu, 0x1A4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4414u;
label_1a4414:
    // 0x1a4414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4418:
    // 0x1a4418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a441c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4420: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4420u;
        // 0x1a4424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4428u;
}
