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

// Function: Cmd_OBJ_ANGLE_Entry__FP15BsSCDEntControl
// Address: 0x1073e0 - 0x107474
void Cmd_OBJ_ANGLE_Entry__FP15BsSCDEntControl_0x1073e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_ANGLE_Entry__FP15BsSCDEntControl_0x1073e0");
#endif

    switch (ctx->pc) {
        case 0x107408u: goto label_107408;
        case 0x107434u: goto label_107434;
        case 0x107444u: goto label_107444;
        case 0x107460u: goto label_107460;
        default: break;
    }

    ctx->pc = 0x1073e0u;

    // 0x1073e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1073e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1073e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1073e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1073e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1073e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1073ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1073ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1073f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1073f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1073f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1073f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1073fc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x107400: 0xc04110c  jal         func_104430
    ctx->pc = 0x107400u;
    SET_GPR_U32(ctx, 31, 0x107408u);
    ctx->pc = 0x107404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107400u;
    // 0x107404: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107400u, 0x107408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107408u;
label_107408:
    // 0x107408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10740c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10740cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107410: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107414: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x107414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x107418: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107418u;
    {
        const bool branch_taken_0x107418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107418u;
        // 0x10741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107418) {
            ctx->pc = 0x107450u;
            goto label_107450;
        }
    }
    ctx->pc = 0x107420u;
    // 0x107420: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x107420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x107424: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x107424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10742c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10742Cu;
    SET_GPR_U32(ctx, 31, 0x107434u);
    ctx->pc = 0x107430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10742Cu;
    // 0x107430: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10742Cu, 0x107434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107434u;
label_107434:
    // 0x107434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107438: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10743c: 0xc0618da  jal         func_186368
    ctx->pc = 0x10743Cu;
    SET_GPR_U32(ctx, 31, 0x107444u);
    ctx->pc = 0x107440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10743Cu;
    // 0x107440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x10743Cu, 0x107444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107444u;
label_107444:
    // 0x107444: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107444u;
    {
        const bool branch_taken_0x107444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107444u;
        // 0x107448: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107444) {
            ctx->pc = 0x107464u;
            goto label_107464;
        }
    }
    ctx->pc = 0x10744Cu;
    // 0x10744c: 0x0  nop
    ctx->pc = 0x10744cu;
    // NOP
label_107450:
    // 0x107450: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x107454: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x107454u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x107458: 0xc0618da  jal         func_186368
    ctx->pc = 0x107458u;
    SET_GPR_U32(ctx, 31, 0x107460u);
    ctx->pc = 0x10745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107458u;
    // 0x10745c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x107458u, 0x107460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107460u;
label_107460:
    // 0x107460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107464:
    // 0x107464: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x107464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x107468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x107468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10746c: 0x3e00008  jr          $ra
    ctx->pc = 0x10746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10746Cu;
        // 0x107470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107474u;
}
