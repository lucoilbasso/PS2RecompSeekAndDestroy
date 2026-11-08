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

// Function: entry_0013c370
// Address: 0x13c370 - 0x13c438
void entry_0013c370_0x13c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c370_0x13c370");
#endif

    switch (ctx->pc) {
        case 0x13c378u: goto label_13c378;
        case 0x13c388u: goto label_13c388;
        case 0x13c3a8u: goto label_13c3a8;
        case 0x13c3d0u: goto label_13c3d0;
        case 0x13c3f8u: goto label_13c3f8;
        case 0x13c410u: goto label_13c410;
        default: break;
    }

    ctx->pc = 0x13c370u;

    // 0x13c370: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13C370u;
    SET_GPR_U32(ctx, 31, 0x13C378u);
    ctx->pc = 0x13C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C370u;
    // 0x13c374: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13C370u, 0x13C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C378u;
label_13c378:
    // 0x13c378: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x13c37c: 0x34840220  ori         $a0, $a0, 0x220
    ctx->pc = 0x13c37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)544);
    // 0x13c380: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13C380u;
    SET_GPR_U32(ctx, 31, 0x13C388u);
    ctx->pc = 0x13C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C380u;
    // 0x13c384: 0x13880a  movz        $s1, $zero, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13C380u, 0x13C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C388u;
label_13c388:
    // 0x13c388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c390: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13c394: 0x2442ecf0  addiu       $v0, $v0, -0x1310
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x13c398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c39c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13c3a0: 0xc043fc4  jal         func_10FF10
    ctx->pc = 0x13C3A0u;
    SET_GPR_U32(ctx, 31, 0x13C3A8u);
    ctx->pc = 0x13C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3A0u;
    // 0x13c3a4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF10u, 0x13C3A0u, 0x13C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3A8u;
label_13c3a8:
    // 0x13c3a8: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x13c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x13c3ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13c3b0: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x13c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x13c3b4: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x13c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x13c3b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x13c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x13c3bc: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x13c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x13c3c0: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x13c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x13c3c4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x13c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x13c3c8: 0xc06727a  jal         func_19C9E8
    ctx->pc = 0x13C3C8u;
    SET_GPR_U32(ctx, 31, 0x13C3D0u);
    ctx->pc = 0x13C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3C8u;
    // 0x13c3cc: 0xae000204  sw          $zero, 0x204($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9E8u, 0x13C3C8u, 0x13C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3D0u;
label_13c3d0:
    // 0x13c3d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c3d4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13c3d8: 0xac200208  sw          $zero, 0x208($at)
    ctx->pc = 0x13c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 0));
    // 0x13c3dc: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x13c3e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c3e4: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13c3e8: 0xac20020c  sw          $zero, 0x20C($at)
    ctx->pc = 0x13c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 0));
    // 0x13c3ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c3f0: 0xc05237a  jal         func_148DE8
    ctx->pc = 0x13C3F0u;
    SET_GPR_U32(ctx, 31, 0x13C3F8u);
    ctx->pc = 0x13C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C3F0u;
    // 0x13c3f4: 0xae0201e0  sw          $v0, 0x1E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148DE8u, 0x13C3F0u, 0x13C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3F8u;
label_13c3f8:
    // 0x13c3f8: 0xaf80912c  sw          $zero, -0x6ED4($gp)
    ctx->pc = 0x13c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 0));
    // 0x13c3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c404: 0xaf809130  sw          $zero, -0x6ED0($gp)
    ctx->pc = 0x13c404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 0));
    // 0x13c408: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13C408u;
    SET_GPR_U32(ctx, 31, 0x13C410u);
    ctx->pc = 0x13C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C408u;
    // 0x13c40c: 0xaf809134  sw          $zero, -0x6ECC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13C408u, 0x13C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C410u;
label_13c410:
    // 0x13c410: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c414: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13c414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13c418: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x13C418u;
    {
        const bool branch_taken_0x13c418 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C418u;
        // 0x13c41c: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c418) {
            ctx->pc = 0x13C470u;
            return;
        }
    }
    ctx->pc = 0x13C420u;
    // 0x13c420: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C420u;
    {
        const bool branch_taken_0x13c420 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x13C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C420u;
        // 0x13c424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c420) {
            ctx->pc = 0x13C464u;
            return;
        }
    }
    ctx->pc = 0x13C428u;
    // 0x13c428: 0x24070126  addiu       $a3, $zero, 0x126
    ctx->pc = 0x13c428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13c42c: 0x262401ec  addiu       $a0, $s1, 0x1EC
    ctx->pc = 0x13c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
    // 0x13c430: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c434: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x13c438u;
}
