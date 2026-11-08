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

// Function: MoverMotionExec__9ApcCopper
// Address: 0x16c700 - 0x16c858
void MoverMotionExec__9ApcCopper_0x16c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverMotionExec__9ApcCopper_0x16c700");
#endif

    switch (ctx->pc) {
        case 0x16c810u: goto label_16c810;
        case 0x16c840u: goto label_16c840;
        case 0x16c848u: goto label_16c848;
        default: break;
    }

    ctx->pc = 0x16c700u;

    // 0x16c700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c70c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c710: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x16c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16c714: 0x26020250  addiu       $v0, $s0, 0x250
    ctx->pc = 0x16c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x16c718: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16c718u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c71c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x16c71cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c720: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16c720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16c724: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16c724u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16c728: 0x26030240  addiu       $v1, $s0, 0x240
    ctx->pc = 0x16c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x16c72c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16c72cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c730: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16c730u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c734: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16c734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16c738: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x16c738u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c73c: 0x26020280  addiu       $v0, $s0, 0x280
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x16c740: 0x260302a0  addiu       $v1, $s0, 0x2A0
    ctx->pc = 0x16c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x16c744: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16c744u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c748: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x16c748u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c74c: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16c74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16c750: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16c750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16c754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c758: 0x8e070150  lw          $a3, 0x150($s0)
    ctx->pc = 0x16c758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x16c75c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16c75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c760: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x16c760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x16c764: 0x8ce30098  lw          $v1, 0x98($a3)
    ctx->pc = 0x16c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x16c768: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x16c768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x16c76c: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x16c76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
    // 0x16c770: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x16c770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x16c774: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16c774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16c778: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x16c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16c77c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x16c77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x16c780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c784: 0xc7868480  lwc1        $f6, -0x7B80($gp)
    ctx->pc = 0x16c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16c788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16c788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16c78c: 0xc6040284  lwc1        $f4, 0x284($s0)
    ctx->pc = 0x16c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16c790: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c794: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x16c794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16c798: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16c79c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x16c79cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x16c7a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16c7a4: 0xc6010228  lwc1        $f1, 0x228($s0)
    ctx->pc = 0x16c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c7ac: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x16c7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c7b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16c7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16c7b4: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x16c7b8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x16c7bc: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x16c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c7c0: 0x3063c800  andi        $v1, $v1, 0xC800
    ctx->pc = 0x16c7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)51200);
    // 0x16c7c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16c7c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16c7c8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x16c7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x16c7cc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x16c7ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x16c7d0: 0xe6010228  swc1        $f1, 0x228($s0)
    ctx->pc = 0x16c7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x16c7d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x16c7d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x16c7d8: 0xe6040284  swc1        $f4, 0x284($s0)
    ctx->pc = 0x16c7d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x16c7dc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c7e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16c7e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16c7e4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C7E4u;
    {
        const bool branch_taken_0x16c7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7E4u;
        // 0x16c7e8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7e4) {
            ctx->pc = 0x16C7FCu;
            goto label_16c7fc;
        }
    }
    ctx->pc = 0x16C7ECu;
    // 0x16c7ec: 0x8ce20184  lw          $v0, 0x184($a3)
    ctx->pc = 0x16c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x16c7f0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x16c7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x16c7f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C7F4u;
    {
        const bool branch_taken_0x16c7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7f4) {
            ctx->pc = 0x16C800u;
            goto label_16c800;
        }
    }
    ctx->pc = 0x16C7FCu;
label_16c7fc:
    // 0x16c7fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c800:
    // 0x16c800: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x16C800u;
    {
        const bool branch_taken_0x16c800 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c800) {
            ctx->pc = 0x16C838u;
            goto label_16c838;
        }
    }
    ctx->pc = 0x16C808u;
    // 0x16c808: 0xc052fa2  jal         func_14BE88
    ctx->pc = 0x16C808u;
    SET_GPR_U32(ctx, 31, 0x16C810u);
    ctx->pc = 0x16C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C808u;
    // 0x16c80c: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BE88u, 0x16C808u, 0x16C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C810u;
label_16c810:
    // 0x16c810: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16c814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c81c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16C81Cu;
    {
        const bool branch_taken_0x16c81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c81c) {
            ctx->pc = 0x16C838u;
            goto label_16c838;
        }
    }
    ctx->pc = 0x16C824u;
    // 0x16c824: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c828: 0xc6010284  lwc1        $f1, 0x284($s0)
    ctx->pc = 0x16c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c82c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16c82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x16c830: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16c830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c834: 0xe6010284  swc1        $f1, 0x284($s0)
    ctx->pc = 0x16c834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_16c838:
    // 0x16c838: 0xc05b32a  jal         func_16CCA8
    ctx->pc = 0x16C838u;
    SET_GPR_U32(ctx, 31, 0x16C840u);
    ctx->pc = 0x16C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C838u;
    // 0x16c83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CCA8u, 0x16C838u, 0x16C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C840u;
label_16c840:
    // 0x16c840: 0xc05b216  jal         func_16C858
    ctx->pc = 0x16C840u;
    SET_GPR_U32(ctx, 31, 0x16C848u);
    ctx->pc = 0x16C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C840u;
    // 0x16c844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C858u, 0x16C840u, 0x16C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C848u;
label_16c848:
    // 0x16c848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c850: 0x3e00008  jr          $ra
    ctx->pc = 0x16C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C850u;
        // 0x16c854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C858u;
}
