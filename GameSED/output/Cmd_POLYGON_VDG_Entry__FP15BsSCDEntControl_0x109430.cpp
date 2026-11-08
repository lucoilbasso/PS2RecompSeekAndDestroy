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

// Function: Cmd_POLYGON_VDG_Entry__FP15BsSCDEntControl
// Address: 0x109430 - 0x1096c4
void Cmd_POLYGON_VDG_Entry__FP15BsSCDEntControl_0x109430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_VDG_Entry__FP15BsSCDEntControl_0x109430");
#endif

    switch (ctx->pc) {
        case 0x109470u: goto label_109470;
        case 0x1094a0u: goto label_1094a0;
        case 0x1094b0u: goto label_1094b0;
        case 0x1094c8u: goto label_1094c8;
        case 0x1094e0u: goto label_1094e0;
        case 0x1094f0u: goto label_1094f0;
        case 0x109530u: goto label_109530;
        case 0x109540u: goto label_109540;
        case 0x109570u: goto label_109570;
        case 0x109580u: goto label_109580;
        case 0x1095b0u: goto label_1095b0;
        case 0x1095c0u: goto label_1095c0;
        case 0x1095f0u: goto label_1095f0;
        case 0x109600u: goto label_109600;
        case 0x109630u: goto label_109630;
        case 0x109640u: goto label_109640;
        case 0x109670u: goto label_109670;
        case 0x109680u: goto label_109680;
        case 0x109690u: goto label_109690;
        default: break;
    }

    ctx->pc = 0x109430u;

    // 0x109430: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x109434: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x109438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10943c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x109440: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x109440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x109444: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x109444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x109448: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10944c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x10944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x109450: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x109450u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x109454: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x109454u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x109458: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x109458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10945c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x10945cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x109460: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x109460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x109464: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x109464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x109468: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109468u;
    SET_GPR_U32(ctx, 31, 0x109470u);
    ctx->pc = 0x10946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109468u;
    // 0x10946c: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109468u, 0x109470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109470u;
label_109470:
    // 0x109470: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109474: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x109474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x109478: 0x2442d630  addiu       $v0, $v0, -0x29D0
    ctx->pc = 0x109478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x10947c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10947cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x109480: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x109484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x109488: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x109488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x10948c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x10948cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x109490: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x109494: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x109494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x109498: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109498u;
    SET_GPR_U32(ctx, 31, 0x1094A0u);
    ctx->pc = 0x10949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109498u;
    // 0x10949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109498u, 0x1094A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094A0u;
label_1094a0:
    // 0x1094a0: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1094a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1094a4: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x1094a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1094a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1094A8u;
    SET_GPR_U32(ctx, 31, 0x1094B0u);
    ctx->pc = 0x1094ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094A8u;
    // 0x1094ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1094A8u, 0x1094B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094B0u;
label_1094b0:
    // 0x1094b0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1094b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1094b4: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x1094b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x1094b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1094b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1094bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094c0: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1094C0u;
    SET_GPR_U32(ctx, 31, 0x1094C8u);
    ctx->pc = 0x1094C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094C0u;
    // 0x1094c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1094C0u, 0x1094C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094C8u;
label_1094c8:
    // 0x1094c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1094c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094cc: 0x4615b582  mul.s       $f22, $f22, $f21
    ctx->pc = 0x1094ccu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x1094d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1094d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094d4: 0x4615bdc2  mul.s       $f23, $f23, $f21
    ctx->pc = 0x1094d4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x1094d8: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1094D8u;
    SET_GPR_U32(ctx, 31, 0x1094E0u);
    ctx->pc = 0x1094DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094D8u;
    // 0x1094dc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1094D8u, 0x1094E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094E0u;
label_1094e0:
    // 0x1094e0: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1094e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1094e4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1094e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1094e8: 0xc06406e  jal         func_1901B8
    ctx->pc = 0x1094E8u;
    SET_GPR_U32(ctx, 31, 0x1094F0u);
    ctx->pc = 0x1094ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1094E8u;
    // 0x1094ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x1094E8u, 0x1094F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1094F0u;
label_1094f0:
    // 0x1094f0: 0x4600b607  neg.s       $f24, $f22
    ctx->pc = 0x1094f0u;
    ctx->f[24] = FPU_NEG_S(ctx->f[22]);
    // 0x1094f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1094f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1094f8: 0x4600bd47  neg.s       $f21, $f23
    ctx->pc = 0x1094f8u;
    ctx->f[21] = FPU_NEG_S(ctx->f[23]);
    // 0x1094fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1094fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x109500: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x109500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109504: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x109504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109508: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10950c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109510: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109510u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109514: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109514u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109518: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109518u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10951c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10951cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x109520: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109528: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109528u;
    SET_GPR_U32(ctx, 31, 0x109530u);
    ctx->pc = 0x10952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109528u;
    // 0x10952c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109528u, 0x109530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109530u;
label_109530:
    // 0x109530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109538: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109538u;
    SET_GPR_U32(ctx, 31, 0x109540u);
    ctx->pc = 0x10953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109538u;
    // 0x10953c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109538u, 0x109540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109540u;
label_109540:
    // 0x109540: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x109540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109544: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x109544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109548: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10954c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10954cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109550: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109550u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109554: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109554u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109558: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109558u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10955c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10955cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x109560: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109568: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109568u;
    SET_GPR_U32(ctx, 31, 0x109570u);
    ctx->pc = 0x10956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109568u;
    // 0x10956c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109568u, 0x109570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109570u;
label_109570:
    // 0x109570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109578: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109578u;
    SET_GPR_U32(ctx, 31, 0x109580u);
    ctx->pc = 0x10957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109578u;
    // 0x10957c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109578u, 0x109580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109580u;
label_109580:
    // 0x109580: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x109580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109584: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x109584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109588: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10958c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10958cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109590: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109590u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109594: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109594u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109598: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109598u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10959c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10959cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1095a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1095a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095a8: 0xc0640d6  jal         func_190358
    ctx->pc = 0x1095A8u;
    SET_GPR_U32(ctx, 31, 0x1095B0u);
    ctx->pc = 0x1095ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095A8u;
    // 0x1095ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x1095A8u, 0x1095B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095B0u;
label_1095b0:
    // 0x1095b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1095b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1095b8: 0xc0640ca  jal         func_190328
    ctx->pc = 0x1095B8u;
    SET_GPR_U32(ctx, 31, 0x1095C0u);
    ctx->pc = 0x1095BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095B8u;
    // 0x1095bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x1095B8u, 0x1095C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095C0u;
label_1095c0:
    // 0x1095c0: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x1095c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1095c4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1095c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1095c8: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x1095c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1095cc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1095ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1095d0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1095d0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1095d4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1095d4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1095d8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1095d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1095dc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1095dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1095e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1095e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095e8: 0xc0640d6  jal         func_190358
    ctx->pc = 0x1095E8u;
    SET_GPR_U32(ctx, 31, 0x1095F0u);
    ctx->pc = 0x1095ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095E8u;
    // 0x1095ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x1095E8u, 0x1095F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095F0u;
label_1095f0:
    // 0x1095f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1095f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1095f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1095f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1095f8: 0xc0640ca  jal         func_190328
    ctx->pc = 0x1095F8u;
    SET_GPR_U32(ctx, 31, 0x109600u);
    ctx->pc = 0x1095FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095F8u;
    // 0x1095fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x1095F8u, 0x109600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109600u;
label_109600:
    // 0x109600: 0x4402c000  mfc1        $v0, $f24
    ctx->pc = 0x109600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109604: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x109604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109608: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10960c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10960cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109610: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109610u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109614: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109614u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109618: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109618u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10961c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10961cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x109620: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109628: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109628u;
    SET_GPR_U32(ctx, 31, 0x109630u);
    ctx->pc = 0x10962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109628u;
    // 0x10962c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109628u, 0x109630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109630u;
label_109630:
    // 0x109630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109634: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x109634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109638: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109638u;
    SET_GPR_U32(ctx, 31, 0x109640u);
    ctx->pc = 0x10963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109638u;
    // 0x10963c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109638u, 0x109640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109640u;
label_109640:
    // 0x109640: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x109640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109644: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x109644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109648: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x109648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10964c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10964cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109650: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109650u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109654: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109654u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109658: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10965c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10965cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x109660: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109668: 0xc0640d6  jal         func_190358
    ctx->pc = 0x109668u;
    SET_GPR_U32(ctx, 31, 0x109670u);
    ctx->pc = 0x10966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109668u;
    // 0x10966c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109668u, 0x109670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109670u;
label_109670:
    // 0x109670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109678: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109678u;
    SET_GPR_U32(ctx, 31, 0x109680u);
    ctx->pc = 0x10967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109678u;
    // 0x10967c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109678u, 0x109680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109680u;
label_109680:
    // 0x109680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x109680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109684: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109688: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x109688u;
    SET_GPR_U32(ctx, 31, 0x109690u);
    ctx->pc = 0x10968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109688u;
    // 0x10968c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109688u, 0x109690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109690u;
label_109690:
    // 0x109690: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109694: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x109694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109698: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x109698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10969c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x10969cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1096a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1096a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1096a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1096a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1096a8: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x1096a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1096ac: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x1096acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1096b0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1096b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1096b4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1096b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1096b8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1096b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1096bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1096BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1096C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096BCu;
        // 0x1096c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1096BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1096C4u;
}
