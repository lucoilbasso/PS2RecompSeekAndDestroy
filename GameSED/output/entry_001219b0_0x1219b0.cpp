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

// Function: entry_001219b0
// Address: 0x1219b0 - 0x121a4c
void entry_001219b0_0x1219b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001219b0_0x1219b0");
#endif

    switch (ctx->pc) {
        case 0x1219c0u: goto label_1219c0;
        case 0x1219e4u: goto label_1219e4;
        default: break;
    }

    ctx->pc = 0x1219b0u;

    // 0x1219b0: 0x52400041  beql        $s2, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1219B0u;
    {
        const bool branch_taken_0x1219b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219b0) {
            ctx->pc = 0x1219B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1219B0u;
            // 0x1219b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121AB8u;
            return;
        }
    }
    ctx->pc = 0x1219B8u;
    // 0x1219b8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1219B8u;
    SET_GPR_U32(ctx, 31, 0x1219C0u);
    ctx->pc = 0x1219BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219B8u;
    // 0x1219bc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1219B8u, 0x1219C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219C0u;
label_1219c0:
    // 0x1219c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1219c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1219c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1219c8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1219c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1219cc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1219ccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1219d0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1219d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1219d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1219d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1219d8: 0xe6000160  swc1        $f0, 0x160($s0)
    ctx->pc = 0x1219d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x1219dc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1219DCu;
    SET_GPR_U32(ctx, 31, 0x1219E4u);
    ctx->pc = 0x1219E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219DCu;
    // 0x1219e0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1219DCu, 0x1219E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219E4u;
label_1219e4:
    // 0x1219e4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1219e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1219e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1219e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1219ec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1219ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1219f0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1219f0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1219f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1219f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1219f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1219f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1219fc: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x1219fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x121a00: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x121a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x121a04: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121a08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121a08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121a0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121a14: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x121a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121a18: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x121a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x121a1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121a20: 0xe6000168  swc1        $f0, 0x168($s0)
    ctx->pc = 0x121a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x121a24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121a28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x121a28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a2c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x121a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121a30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x121A30u;
    {
        const bool branch_taken_0x121a30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A30u;
        // 0x121a34: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a30) {
            ctx->pc = 0x121A4Cu;
            return;
        }
    }
    ctx->pc = 0x121A38u;
    // 0x121a38: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x121a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x121a3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x121a40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x121a44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x121a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121a48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x121a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x121a4cu;
}
