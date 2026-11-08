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

// Function: Cmd_EXPLO_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10a328 - 0x10a4b4
void Cmd_EXPLO_MAKE_Entry__FP15BsSCDEntControl_0x10a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXPLO_MAKE_Entry__FP15BsSCDEntControl_0x10a328");
#endif

    switch (ctx->pc) {
        case 0x10a34cu: goto label_10a34c;
        case 0x10a3b8u: goto label_10a3b8;
        case 0x10a3d4u: goto label_10a3d4;
        case 0x10a410u: goto label_10a410;
        case 0x10a424u: goto label_10a424;
        case 0x10a48cu: goto label_10a48c;
        case 0x10a49cu: goto label_10a49c;
        default: break;
    }

    ctx->pc = 0x10a328u;

    // 0x10a328: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10a32c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10a330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a334: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x10a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x10a338: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10a33c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x10a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x10a340: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a344: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A344u;
    SET_GPR_U32(ctx, 31, 0x10A34Cu);
    ctx->pc = 0x10A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A344u;
    // 0x10a348: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A344u, 0x10A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A34Cu;
label_10a34c:
    // 0x10a34c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a350: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x10a354: 0x244bb000  addiu       $t3, $v0, -0x5000
    ctx->pc = 0x10a354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x10a358: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10a35c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a364: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x10a364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10a368: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a36c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10A36Cu;
    {
        const bool branch_taken_0x10a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A36Cu;
        // 0x10a370: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a36c) {
            ctx->pc = 0x10A3F0u;
            goto label_10a3f0;
        }
    }
    ctx->pc = 0x10A374u;
    // 0x10a374: 0xdd6c0038  ld          $t4, 0x38($t3)
    ctx->pc = 0x10a374u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x10a378: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x10a378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10a37c: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x10a37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x10a380: 0xdd670010  ld          $a3, 0x10($t3)
    ctx->pc = 0x10a380u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x10a384: 0xdd680018  ld          $t0, 0x18($t3)
    ctx->pc = 0x10a384u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x10a388: 0xdd690020  ld          $t1, 0x20($t3)
    ctx->pc = 0x10a388u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x10a38c: 0xdd6a0028  ld          $t2, 0x28($t3)
    ctx->pc = 0x10a38cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x10a390: 0xdd6b0030  ld          $t3, 0x30($t3)
    ctx->pc = 0x10a390u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x10a394: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x10a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x10a398: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x10a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x10a39c: 0xffa70010  sd          $a3, 0x10($sp)
    ctx->pc = 0x10a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    // 0x10a3a0: 0xffa80018  sd          $t0, 0x18($sp)
    ctx->pc = 0x10a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
    // 0x10a3a4: 0xffa90020  sd          $t1, 0x20($sp)
    ctx->pc = 0x10a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 9));
    // 0x10a3a8: 0xffaa0028  sd          $t2, 0x28($sp)
    ctx->pc = 0x10a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 10));
    // 0x10a3ac: 0xffab0030  sd          $t3, 0x30($sp)
    ctx->pc = 0x10a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 11));
    // 0x10a3b0: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x10A3B0u;
    SET_GPR_U32(ctx, 31, 0x10A3B8u);
    ctx->pc = 0x10A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3B0u;
    // 0x10a3b4: 0xffac0038  sd          $t4, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x10A3B0u, 0x10A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3B8u;
label_10a3b8:
    // 0x10a3b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10a3bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a3c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a3c4: 0x1065002d  beq         $v1, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x10A3C4u;
    {
        const bool branch_taken_0x10a3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C4u;
        // 0x10a3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3c4) {
            ctx->pc = 0x10A47Cu;
            goto label_10a47c;
        }
    }
    ctx->pc = 0x10A3CCu;
    // 0x10a3cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A3CCu;
    SET_GPR_U32(ctx, 31, 0x10A3D4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A3CCu, 0x10A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D4u;
label_10a3d4:
    // 0x10a3d4: 0x97a4000e  lhu         $a0, 0xE($sp)
    ctx->pc = 0x10a3d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x10a3d8: 0x97a30008  lhu         $v1, 0x8($sp)
    ctx->pc = 0x10a3d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a3dc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x10a3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a3e4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x10A3E4u;
    {
        const bool branch_taken_0x10a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E4u;
        // 0x10a3e8: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3e4) {
            ctx->pc = 0x10A47Cu;
            goto label_10a47c;
        }
    }
    ctx->pc = 0x10A3ECu;
    // 0x10a3ec: 0x0  nop
    ctx->pc = 0x10a3ecu;
    // NOP
label_10a3f0:
    // 0x10a3f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a3f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a3f8: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x10A3F8u;
    {
        const bool branch_taken_0x10a3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x10A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F8u;
        // 0x10a3fc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3f8) {
            ctx->pc = 0x10A430u;
            goto label_10a430;
        }
    }
    ctx->pc = 0x10A400u;
    // 0x10a400: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a408: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A408u;
    SET_GPR_U32(ctx, 31, 0x10A410u);
    ctx->pc = 0x10A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A408u;
    // 0x10a40c: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A408u, 0x10A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A410u;
label_10a410:
    // 0x10a410: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10a414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a41c: 0xc040438  jal         func_1010E0
    ctx->pc = 0x10A41Cu;
    SET_GPR_U32(ctx, 31, 0x10A424u);
    ctx->pc = 0x10A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A41Cu;
    // 0x10a420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x10A41Cu, 0x10A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A424u;
label_10a424:
    // 0x10a424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10A424u;
    {
        const bool branch_taken_0x10a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A424u;
        // 0x10a428: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a424) {
            ctx->pc = 0x10A478u;
            goto label_10a478;
        }
    }
    ctx->pc = 0x10A42Cu;
    // 0x10a42c: 0x0  nop
    ctx->pc = 0x10a42cu;
    // NOP
label_10a430:
    // 0x10a430: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x10a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x10a434: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x10a434u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a438: 0xdc490038  ld          $t1, 0x38($v0)
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10a43c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x10a43cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a440: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x10a440u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10a444: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x10a444u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a448: 0xdc470028  ld          $a3, 0x28($v0)
    ctx->pc = 0x10a448u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a44c: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x10a44cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a450: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x10a450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x10a454: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x10a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x10a458: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x10a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x10a45c: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x10a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x10a460: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x10a460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x10a464: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x10a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x10a468: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x10a468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x10a46c: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x10a46cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a470: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x10a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x10a474: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x10a474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a478:
    // 0x10a478: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x10a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_10a47c:
    // 0x10a47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a480: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a484: 0xc06448c  jal         func_191230
    ctx->pc = 0x10A484u;
    SET_GPR_U32(ctx, 31, 0x10A48Cu);
    ctx->pc = 0x10A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A484u;
    // 0x10a488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x10A484u, 0x10A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A48Cu;
label_10a48c:
    // 0x10a48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a494: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10A494u;
    SET_GPR_U32(ctx, 31, 0x10A49Cu);
    ctx->pc = 0x10A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A494u;
    // 0x10a498: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10A494u, 0x10A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A49Cu;
label_10a49c:
    // 0x10a49c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10a49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a4a0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x10a4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10a4a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10a4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a4a8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x10a4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10a4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4ACu;
        // 0x10a4b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4B4u;
}
