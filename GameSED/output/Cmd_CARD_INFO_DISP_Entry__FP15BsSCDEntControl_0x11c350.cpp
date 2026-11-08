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

// Function: Cmd_CARD_INFO_DISP_Entry__FP15BsSCDEntControl
// Address: 0x11c350 - 0x11c514
void Cmd_CARD_INFO_DISP_Entry__FP15BsSCDEntControl_0x11c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_INFO_DISP_Entry__FP15BsSCDEntControl_0x11c350");
#endif

    switch (ctx->pc) {
        case 0x11c370u: goto label_11c370;
        case 0x11c380u: goto label_11c380;
        case 0x11c398u: goto label_11c398;
        case 0x11c3a8u: goto label_11c3a8;
        case 0x11c3b8u: goto label_11c3b8;
        case 0x11c3d8u: goto label_11c3d8;
        case 0x11c42cu: goto label_11c42c;
        case 0x11c438u: goto label_11c438;
        case 0x11c448u: goto label_11c448;
        case 0x11c488u: goto label_11c488;
        case 0x11c4b8u: goto label_11c4b8;
        case 0x11c4ccu: goto label_11c4cc;
        case 0x11c4e4u: goto label_11c4e4;
        case 0x11c4f8u: goto label_11c4f8;
        default: break;
    }

    ctx->pc = 0x11c350u;

    // 0x11c350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c354: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11c358: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11c35c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c360: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x11c364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11c368: 0xc043258  jal         func_10C960
    ctx->pc = 0x11C368u;
    SET_GPR_U32(ctx, 31, 0x11C370u);
    ctx->pc = 0x11C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C368u;
    // 0x11c36c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x11C368u, 0x11C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C370u;
label_11c370:
    // 0x11c370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c378: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C378u;
    SET_GPR_U32(ctx, 31, 0x11C380u);
    ctx->pc = 0x11C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C378u;
    // 0x11c37c: 0x8f918d10  lw          $s1, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C378u, 0x11C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C380u;
label_11c380:
    // 0x11c380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c388: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c38c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x11c38cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x11c390: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C390u;
    SET_GPR_U32(ctx, 31, 0x11C398u);
    ctx->pc = 0x11C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C390u;
    // 0x11c394: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C390u, 0x11C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C398u;
label_11c398:
    // 0x11c398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c39c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3a0: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x11C3A0u;
    SET_GPR_U32(ctx, 31, 0x11C3A8u);
    ctx->pc = 0x11C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3A0u;
    // 0x11c3a4: 0x2610d228  addiu       $s0, $s0, -0x2DD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x11C3A0u, 0x11C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3A8u;
label_11c3a8:
    // 0x11c3a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b0: 0xc067260  jal         func_19C980
    ctx->pc = 0x11C3B0u;
    SET_GPR_U32(ctx, 31, 0x11C3B8u);
    ctx->pc = 0x11C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C3B0u;
    // 0x11c3b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x11C3B0u, 0x11C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3B8u;
label_11c3b8:
    // 0x11c3b8: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x11c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x11c3bc: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x11c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x11c3c0: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c3c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11c3c8: 0x8c435a0c  lw          $v1, 0x5A0C($v0)
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23052)));
    // 0x11c3cc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C3CCu;
    {
        const bool branch_taken_0x11c3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3CCu;
        // 0x11c3d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3cc) {
            ctx->pc = 0x11C410u;
            goto label_11c410;
        }
    }
    ctx->pc = 0x11C3D4u;
    // 0x11c3d4: 0x27a70002  addiu       $a3, $sp, 0x2
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_11c3d8:
    // 0x11c3d8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x11c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x11c3dc: 0x412c0  sll         $v0, $a0, 11
    ctx->pc = 0x11c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x11c3e0: 0x42300  sll         $a0, $a0, 12
    ctx->pc = 0x11c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x11c3e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11c3e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11c3ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11c3f0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x11c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11c3f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11c3f8: 0x94435a0e  lhu         $v1, 0x5A0E($v0)
    ctx->pc = 0x11c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 23054)));
    // 0x11c3fc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x11c3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x11c400: 0x8c825a0c  lw          $v0, 0x5A0C($a0)
    ctx->pc = 0x11c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23052)));
    // 0x11c404: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11c404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11c408: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11C408u;
    {
        const bool branch_taken_0x11c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C408u;
        // 0x11c40c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c408) {
            ctx->pc = 0x11C3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c3d8;
        }
    }
    ctx->pc = 0x11C410u;
label_11c410:
    // 0x11c410: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x11c410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11c414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c418: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11c41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c420: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x11c420u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c424: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C424u;
    SET_GPR_U32(ctx, 31, 0x11C42Cu);
    ctx->pc = 0x11C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C424u;
    // 0x11c428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C424u, 0x11C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C42Cu;
label_11c42c:
    // 0x11c42c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c430: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x11C430u;
    SET_GPR_U32(ctx, 31, 0x11C438u);
    ctx->pc = 0x11C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C430u;
    // 0x11c434: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x11C430u, 0x11C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C438u;
label_11c438:
    // 0x11c438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c440: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C440u;
    SET_GPR_U32(ctx, 31, 0x11C448u);
    ctx->pc = 0x11C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C440u;
    // 0x11c444: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C440u, 0x11C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C448u;
label_11c448:
    // 0x11c448: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x11c448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x11c44c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11c450: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x11c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11c454: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c458: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11c458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11c45c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11c460: 0x24a54818  addiu       $a1, $a1, 0x4818
    ctx->pc = 0x11c460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18456));
    // 0x11c464: 0x24504e00  addiu       $s0, $v0, 0x4E00
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x11c468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c46c: 0x8e060c2c  lw          $a2, 0xC2C($s0)
    ctx->pc = 0x11c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3116)));
    // 0x11c470: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C470u;
    {
        const bool branch_taken_0x11c470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c470) {
            ctx->pc = 0x11C474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C470u;
            // 0x11c474: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C478u;
            goto label_11c478;
        }
    }
    ctx->pc = 0x11C478u;
label_11c478:
    // 0x11c478: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x11c478u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x11c47c: 0x3012  mflo        $a2
    ctx->pc = 0x11c47cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11c480: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C480u;
    SET_GPR_U32(ctx, 31, 0x11C488u);
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C480u, 0x11C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C488u;
label_11c488:
    // 0x11c488: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11c48c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11c490: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C490u;
    {
        const bool branch_taken_0x11c490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C490u;
        // 0x11c494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c490) {
            ctx->pc = 0x11C4A8u;
            goto label_11c4a8;
        }
    }
    ctx->pc = 0x11C498u;
    // 0x11c498: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11C498u;
    {
        const bool branch_taken_0x11c498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C498u;
        // 0x11c49c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c498) {
            ctx->pc = 0x11C4D8u;
            goto label_11c4d8;
        }
    }
    ctx->pc = 0x11C4A0u;
    // 0x11c4a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A0u;
        // 0x11c4a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4A8u;
label_11c4a8:
    // 0x11c4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c4b0: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C4B0u;
    SET_GPR_U32(ctx, 31, 0x11C4B8u);
    ctx->pc = 0x11C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4B0u;
    // 0x11c4b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C4B0u, 0x11C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4B8u;
label_11c4b8:
    // 0x11c4b8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11c4bc: 0x8e061cb0  lw          $a2, 0x1CB0($s0)
    ctx->pc = 0x11c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7344)));
    // 0x11c4c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4c4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C4C4u;
    SET_GPR_U32(ctx, 31, 0x11C4CCu);
    ctx->pc = 0x11C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4C4u;
    // 0x11c4c8: 0x24a5d230  addiu       $a1, $a1, -0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C4C4u, 0x11C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4CCu;
label_11c4cc:
    // 0x11c4cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C4CCu;
    {
        const bool branch_taken_0x11c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4CCu;
        // 0x11c4d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4cc) {
            ctx->pc = 0x11C4FCu;
            goto label_11c4fc;
        }
    }
    ctx->pc = 0x11C4D4u;
    // 0x11c4d4: 0x0  nop
    ctx->pc = 0x11c4d4u;
    // NOP
label_11c4d8:
    // 0x11c4d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c4dc: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x11C4DCu;
    SET_GPR_U32(ctx, 31, 0x11C4E4u);
    ctx->pc = 0x11C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4DCu;
    // 0x11c4e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x11C4DCu, 0x11C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4E4u;
label_11c4e4:
    // 0x11c4e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11c4e8: 0x8e061cb0  lw          $a2, 0x1CB0($s0)
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7344)));
    // 0x11c4ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x11C4F0u;
    SET_GPR_U32(ctx, 31, 0x11C4F8u);
    ctx->pc = 0x11C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4F0u;
    // 0x11c4f4: 0x24a54828  addiu       $a1, $a1, 0x4828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x11C4F0u, 0x11C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4F8u;
label_11c4f8:
    // 0x11c4f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11c4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11c4fc:
    // 0x11c4fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11c4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c500: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c504: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11c504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c508: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C50Cu;
        // 0x11c510: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C514u;
}
