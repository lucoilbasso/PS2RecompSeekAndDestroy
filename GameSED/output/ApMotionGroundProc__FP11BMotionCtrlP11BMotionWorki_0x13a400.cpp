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

// Function: ApMotionGroundProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x13a400 - 0x13a4f4
void ApMotionGroundProc__FP11BMotionCtrlP11BMotionWorki_0x13a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionGroundProc__FP11BMotionCtrlP11BMotionWorki_0x13a400");
#endif

    switch (ctx->pc) {
        case 0x13a434u: goto label_13a434;
        case 0x13a464u: goto label_13a464;
        case 0x13a48cu: goto label_13a48c;
        case 0x13a4a0u: goto label_13a4a0;
        case 0x13a4b4u: goto label_13a4b4;
        case 0x13a4d8u: goto label_13a4d8;
        default: break;
    }

    ctx->pc = 0x13a400u;

    // 0x13a400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13a404: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13a404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a408: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x13a408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13a40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a410: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x13a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13a414: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x13a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13a418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13a41c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13a41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13a420: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x13a420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a424: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x13a424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13a428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a42c: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x13A42Cu;
    SET_GPR_U32(ctx, 31, 0x13A434u);
    ctx->pc = 0x13A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A42Cu;
    // 0x13a430: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x13A42Cu, 0x13A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A434u;
label_13a434:
    // 0x13a434: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x13a434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13a438: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13a438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13a43c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x13a43cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13a440: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13a440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13a444: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13a444u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13a448: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13a448u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13a44c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13a44cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13a450: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13a454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13a454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a45c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A45Cu;
    SET_GPR_U32(ctx, 31, 0x13A464u);
    ctx->pc = 0x13A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A45Cu;
    // 0x13a460: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A45Cu, 0x13A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A464u;
label_13a464:
    // 0x13a464: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x13a464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x13a468: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13a468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a46c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13a46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13a470: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13a474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a47c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13a480: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x13a480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13a484: 0xc06760e  jal         func_19D838
    ctx->pc = 0x13A484u;
    SET_GPR_U32(ctx, 31, 0x13A48Cu);
    ctx->pc = 0x13A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A484u;
    // 0x13a488: 0x63023  negu        $a2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x13A484u, 0x13A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A48Cu;
label_13a48c:
    // 0x13a48c: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x13a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a490: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x13a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a494: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x13a494u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x13a498: 0xc067a02  jal         func_19E808
    ctx->pc = 0x13A498u;
    SET_GPR_U32(ctx, 31, 0x13A4A0u);
    ctx->pc = 0x13A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A498u;
    // 0x13a49c: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x13A498u, 0x13A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4A0u;
label_13a4a0:
    // 0x13a4a0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x13a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a4a4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x13a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a4a8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x13a4a8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x13a4ac: 0xc067a02  jal         func_19E808
    ctx->pc = 0x13A4ACu;
    SET_GPR_U32(ctx, 31, 0x13A4B4u);
    ctx->pc = 0x13A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4ACu;
    // 0x13a4b0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x13A4ACu, 0x13A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4B4u;
label_13a4b4:
    // 0x13a4b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x13a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13a4b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13a4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4c0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x13a4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a4c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13a4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4cc: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x13a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x13a4d0: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A4D0u;
    SET_GPR_U32(ctx, 31, 0x13A4D8u);
    ctx->pc = 0x13A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4D0u;
    // 0x13a4d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A4D0u, 0x13A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4D8u;
label_13a4d8:
    // 0x13a4d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13a4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a4dc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x13a4dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13a4e0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13a4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a4e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13a4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a4e8: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4ECu;
        // 0x13a4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A4F4u;
}
