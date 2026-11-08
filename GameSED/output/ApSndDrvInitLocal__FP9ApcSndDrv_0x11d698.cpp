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

// Function: ApSndDrvInitLocal__FP9ApcSndDrv
// Address: 0x11d698 - 0x11d750
void ApSndDrvInitLocal__FP9ApcSndDrv_0x11d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSndDrvInitLocal__FP9ApcSndDrv_0x11d698");
#endif

    switch (ctx->pc) {
        case 0x11d6c0u: goto label_11d6c0;
        case 0x11d6c8u: goto label_11d6c8;
        case 0x11d6d0u: goto label_11d6d0;
        case 0x11d6d8u: goto label_11d6d8;
        case 0x11d6ecu: goto label_11d6ec;
        case 0x11d720u: goto label_11d720;
        case 0x11d73cu: goto label_11d73c;
        default: break;
    }

    ctx->pc = 0x11d698u;

    // 0x11d698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d69c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d6a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11d6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11d6ac: 0x3411c010  ori         $s1, $zero, 0xC010
    ctx->pc = 0x11d6acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x11d6b0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11d6b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11d6b8: 0xc05e954  jal         func_17A550
    ctx->pc = 0x11D6B8u;
    SET_GPR_U32(ctx, 31, 0x11D6C0u);
    ctx->pc = 0x11D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6B8u;
    // 0x11d6bc: 0xac500040  sw          $s0, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A550u, 0x11D6B8u, 0x11D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C0u;
label_11d6c0:
    // 0x11d6c0: 0xc05eaec  jal         func_17ABB0
    ctx->pc = 0x11D6C0u;
    SET_GPR_U32(ctx, 31, 0x11D6C8u);
    ctx->pc = 0x17ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB0u, 0x11D6C0u, 0x11D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6C8u;
label_11d6c8:
    // 0x11d6c8: 0xc05ef9a  jal         func_17BE68
    ctx->pc = 0x11D6C8u;
    SET_GPR_U32(ctx, 31, 0x11D6D0u);
    ctx->pc = 0x17BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BE68u, 0x11D6C8u, 0x11D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6D0u;
label_11d6d0:
    // 0x11d6d0: 0xc05edae  jal         func_17B6B8
    ctx->pc = 0x11D6D0u;
    SET_GPR_U32(ctx, 31, 0x11D6D8u);
    ctx->pc = 0x17B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B6B8u, 0x11D6D0u, 0x11D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6D8u;
label_11d6d8:
    // 0x11d6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d6e0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11d6e4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x11D6E4u;
    SET_GPR_U32(ctx, 31, 0x11D6ECu);
    ctx->pc = 0x11D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D6E4u;
    // 0x11d6e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x11D6E4u, 0x11D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D6ECu;
label_11d6ec:
    // 0x11d6ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11d6f0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11d6f4: 0xac22c030  sw          $v0, -0x3FD0($at)
    ctx->pc = 0x11d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950960), GPR_U32(ctx, 2));
    // 0x11d6f8: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11d6fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d700: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11d704: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x11d704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d708: 0x24c6d798  addiu       $a2, $a2, -0x2868
    ctx->pc = 0x11d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956952));
    // 0x11d70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d710: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x11d710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x11d714: 0x24093000  addiu       $t1, $zero, 0x3000
    ctx->pc = 0x11d714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x11d718: 0xc068620  jal         func_1A1880
    ctx->pc = 0x11D718u;
    SET_GPR_U32(ctx, 31, 0x11D720u);
    ctx->pc = 0x11D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D718u;
    // 0x11d71c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x11D718u, 0x11D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D720u;
label_11d720:
    // 0x11d720: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d728: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x11d728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x11d72c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d730: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11d730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x11d734: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x11D734u;
    SET_GPR_U32(ctx, 31, 0x11D73Cu);
    ctx->pc = 0x11D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D734u;
    // 0x11d738: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x11D734u, 0x11D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D73Cu;
label_11d73c:
    // 0x11d73c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d740: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11d740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d744: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d748: 0x3e00008  jr          $ra
    ctx->pc = 0x11D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D748u;
        // 0x11d74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D750u;
}
