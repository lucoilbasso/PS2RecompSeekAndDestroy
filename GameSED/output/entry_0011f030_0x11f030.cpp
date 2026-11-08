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

// Function: entry_0011f030
// Address: 0x11f030 - 0x11f140
void entry_0011f030_0x11f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f030_0x11f030");
#endif

    switch (ctx->pc) {
        case 0x11f044u: goto label_11f044;
        case 0x11f050u: goto label_11f050;
        case 0x11f060u: goto label_11f060;
        case 0x11f11cu: goto label_11f11c;
        default: break;
    }

    ctx->pc = 0x11f030u;

    // 0x11f030: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x11f030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11f034: 0x5220009d  beql        $s1, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F034u;
            // 0x11f038: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2ACu;
            return;
        }
    }
    ctx->pc = 0x11F03Cu;
    // 0x11f03c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F03Cu;
    SET_GPR_U32(ctx, 31, 0x11F044u);
    ctx->pc = 0x11F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F03Cu;
    // 0x11f040: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F03Cu, 0x11F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x11f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f048: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F048u;
    SET_GPR_U32(ctx, 31, 0x11F050u);
    ctx->pc = 0x11F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F048u;
    // 0x11f04c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F048u, 0x11F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F050u;
label_11f050:
    // 0x11f050: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11f054: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x11f054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11f058: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F058u;
    SET_GPR_U32(ctx, 31, 0x11F060u);
    ctx->pc = 0x11F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F058u;
    // 0x11f05c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F058u, 0x11F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F060u;
label_11f060:
    // 0x11f060: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x11f064: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x11f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x11f068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11f068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f06c: 0x32047fff  andi        $a0, $s0, 0x7FFF
    ctx->pc = 0x11f06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x11f070: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x11f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x11f074: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x11f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x11f078: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x11f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f080: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f084: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x11f088: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x11f088u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x11f08c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x11f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x11f090: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x11f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11f094: 0x26102000  addiu       $s0, $s0, 0x2000
    ctx->pc = 0x11f094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x11f098: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x11f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11f09c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x11f0a0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11f0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11f0a4: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x11f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f0a8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11f0a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11f0ac: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x11f0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x11f0b0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x11f0b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11f0b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f0b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11f0bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x11f0bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x11f0c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11f0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11f0c4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x11f0c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x11f0c8: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x11f0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x11f0cc: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x11f0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x11f0d0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11F0D0u;
    {
        const bool branch_taken_0x11f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D0u;
        // 0x11f0d4: 0xe6230080  swc1        $f3, 0x80($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0d0) {
            ctx->pc = 0x11F1E0u;
            return;
        }
    }
    ctx->pc = 0x11F0D8u;
    // 0x11f0d8: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x11f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x11f0dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11f0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f0e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11f0e4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11f0e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f0e8: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x11f0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0ec: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x11f0ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0f0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11f0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f0f4: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x11f0f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x11f0f8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x11f0f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f0fc: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x11f0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f100: 0x4a0003bf  vwaitq
    ctx->pc = 0x11f100u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11f104: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x11f104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11f108: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x11f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11f10c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x11f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11f110: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x11f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f114: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F114u;
    SET_GPR_U32(ctx, 31, 0x11F11Cu);
    ctx->pc = 0x11F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F114u;
    // 0x11f118: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F114u, 0x11F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F11Cu;
label_11f11c:
    // 0x11f11c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F124u;
    {
        const bool branch_taken_0x11f124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F124u;
        // 0x11f128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f124) {
            ctx->pc = 0x11F140u;
            return;
        }
    }
    ctx->pc = 0x11F12Cu;
    // 0x11f12c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11f12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11f130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11f134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11F134u;
    {
        const bool branch_taken_0x11f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f134) {
            ctx->pc = 0x11F154u;
            return;
        }
    }
    ctx->pc = 0x11F13Cu;
    // 0x11f13c: 0x0  nop
    ctx->pc = 0x11f13cu;
    // NOP
    ctx->pc = 0x11f140u;
}
