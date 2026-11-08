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

// Function: entry_0012f188
// Address: 0x12f188 - 0x12f224
void entry_0012f188_0x12f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f188_0x12f188");
#endif

    switch (ctx->pc) {
        case 0x12f204u: goto label_12f204;
        case 0x12f21cu: goto label_12f21c;
        default: break;
    }

    ctx->pc = 0x12f188u;

    // 0x12f188: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x12F188u;
    {
        const bool branch_taken_0x12f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f188) {
            ctx->pc = 0x12F18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F188u;
            // 0x12f18c: 0x96630132  lhu         $v1, 0x132($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F224u;
            return;
        }
    }
    ctx->pc = 0x12F190u;
    // 0x12f190: 0x8cd00040  lw          $s0, 0x40($a2)
    ctx->pc = 0x12f190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x12f194: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f19c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f1a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12f1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12f1a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f1a8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12f1ac: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x12f1acu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12f1b0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x12f1b0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12f1b4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12f1b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12f1b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12f1bc: 0x26670080  addiu       $a3, $s3, 0x80
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x12f1c0: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x12f1c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f1c4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x12f1c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f1c8: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x12f1c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12f1cc: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x12f1ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12f1d0: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x12f1d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12f1d4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x12f1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1d8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x12f1d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1dc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x12f1dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x12f1e0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x12f1e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x12f1e4: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x12f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x12f1e8: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x12f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x12f1ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1f4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x12f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f1f8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x12f1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x12f1fc: 0xc05185a  jal         func_146168
    ctx->pc = 0x12F1FCu;
    SET_GPR_U32(ctx, 31, 0x12F204u);
    ctx->pc = 0x12F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1FCu;
    // 0x12f200: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146168u, 0x12F1FCu, 0x12F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F204u;
label_12f204:
    // 0x12f204: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x12f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x12f208: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x12f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x12f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f210: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x12f210u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x2400C0u));
    // 0x12f214: 0xc0477ca  jal         func_11DF28
    ctx->pc = 0x12F214u;
    SET_GPR_U32(ctx, 31, 0x12F21Cu);
    ctx->pc = 0x12F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F214u;
    // 0x12f218: 0x8c66000c  lw          $a2, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF28u, 0x12F214u, 0x12F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F21Cu;
label_12f21c:
    // 0x12f21c: 0xae6000dc  sw          $zero, 0xDC($s3)
    ctx->pc = 0x12f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 0));
    // 0x12f220: 0x96630132  lhu         $v1, 0x132($s3)
    ctx->pc = 0x12f220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    ctx->pc = 0x12f224u;
}
