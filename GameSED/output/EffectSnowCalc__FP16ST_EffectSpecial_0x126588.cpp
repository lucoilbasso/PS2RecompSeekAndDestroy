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

// Function: EffectSnowCalc__FP16ST_EffectSpecial
// Address: 0x126588 - 0x126780
void EffectSnowCalc__FP16ST_EffectSpecial_0x126588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSnowCalc__FP16ST_EffectSpecial_0x126588");
#endif

    switch (ctx->pc) {
        case 0x1265c4u: goto label_1265c4;
        case 0x126614u: goto label_126614;
        case 0x1266b0u: goto label_1266b0;
        case 0x12674cu: goto label_12674c;
        default: break;
    }

    ctx->pc = 0x126588u;

    // 0x126588: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12658c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x12658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x126590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126594: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x126594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x126598: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x126598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12659c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x12659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1265a0: 0x265401b0  addiu       $s4, $s2, 0x1B0
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x1265a4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1265a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1265a8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1265a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1265ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1265acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1265b0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1265b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1265b4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1265b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1265b8: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x1265b8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1265bc: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x1265BCu;
    SET_GPR_U32(ctx, 31, 0x1265C4u);
    ctx->pc = 0x1265C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265BCu;
    // 0x1265c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x1265BCu, 0x1265C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265C4u;
label_1265c4:
    // 0x1265c4: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1265c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1265c8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1265C8u;
    {
        const bool branch_taken_0x1265c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265c8) {
            ctx->pc = 0x1265CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1265C8u;
            // 0x1265cc: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12668Cu;
            goto label_12668c;
        }
    }
    ctx->pc = 0x1265D0u;
    // 0x1265d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1265d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1265d4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1265d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1265d8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1265d8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1265dc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1265dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1265e0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1265e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1265e4: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1265e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1265e8: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x1265e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1265ec: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x1265ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1265f0: 0x265101c0  addiu       $s1, $s2, 0x1C0
    ctx->pc = 0x1265f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x1265f4: 0x265001d0  addiu       $s0, $s2, 0x1D0
    ctx->pc = 0x1265f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x1265f8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1265f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1265fc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1265fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x126600: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x126600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x126604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126608: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12660c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12660Cu;
    SET_GPR_U32(ctx, 31, 0x126614u);
    ctx->pc = 0x126610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12660Cu;
    // 0x126610: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12660Cu, 0x126614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126614u;
label_126614:
    // 0x126614: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x126614u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126618: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x126618u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12661c: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x12661cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x126620: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x126620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x126624: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x126624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x126628: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x126628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12662c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x12662cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x126630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126634: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x126634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x126638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12663c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12663cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126640: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126640u;
    {
        const bool branch_taken_0x126640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126640) {
            ctx->pc = 0x126658u;
            goto label_126658;
        }
    }
    ctx->pc = 0x126648u;
    // 0x126648: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x126648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12664c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x12664cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126650: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x126650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x126654: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x126654u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_126658:
    // 0x126658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12665c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126664: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x126664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x126668: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x126668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12666c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x126670: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x126670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x126674: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x126674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126678: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x126678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12667c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12667cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x126680: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x126680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x126684: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x126684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x126688: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_12668c:
    // 0x12668c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x12668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x126690: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x126690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x126694: 0x3442a120  ori         $v0, $v0, 0xA120
    ctx->pc = 0x126694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
    // 0x126698: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x12669c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12669cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1266a0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1266a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x1266a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1266a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266a8: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x1266a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1266ac: 0x0  nop
    ctx->pc = 0x1266acu;
    // NOP
label_1266b0:
    // 0x1266b0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1266b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1266b4: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x1266b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1266b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1266b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1266bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1266bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1266c0: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1266c4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1266c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1266c8: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x1266c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1266cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1266ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1266d0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1266d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1266d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1266d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1266d8: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x1266d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1266dc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1266dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1266e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1266e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1266e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1266e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1266e8: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1266e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1266ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1266ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1266f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1266f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1266f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1266f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1266f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1266f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1266fc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1266fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x126700: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x126700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x126704: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x126704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126708: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x126708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12670c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12670cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x126710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x126710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x126714: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x126714u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x126718: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x126718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x12671c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x12671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126720: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x126720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x126724: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x126724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126728: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x126728u;
    {
        const bool branch_taken_0x126728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126728u;
        // 0x12672c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126728) {
            ctx->pc = 0x12674Cu;
            goto label_12674c;
        }
    }
    ctx->pc = 0x126730u;
    // 0x126730: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x126730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126738: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x126738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12673c: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x12673cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x126740: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x126740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x126744: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x126744u;
    SET_GPR_U32(ctx, 31, 0x12674Cu);
    ctx->pc = 0x126748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126744u;
    // 0x126748: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x126744u, 0x12674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12674Cu;
label_12674c:
    // 0x12674c: 0x2a021324  slti        $v0, $s0, 0x1324
    ctx->pc = 0x12674cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x126750: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x126750u;
    {
        const bool branch_taken_0x126750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126750) {
            ctx->pc = 0x126754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126750u;
            // 0x126754: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1266B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1266b0;
        }
    }
    ctx->pc = 0x126758u;
    // 0x126758: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12675c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x12675cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126760: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126764: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x126764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x126768: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x126768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12676c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x126770: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x126770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126774: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x126774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126778: 0x3e00008  jr          $ra
    ctx->pc = 0x126778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126778u;
        // 0x12677c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126780u;
}
