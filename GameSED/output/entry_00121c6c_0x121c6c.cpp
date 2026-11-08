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

// Function: entry_00121c6c
// Address: 0x121c6c - 0x121d24
void entry_00121c6c_0x121c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c6c_0x121c6c");
#endif

    switch (ctx->pc) {
        case 0x121cb0u: goto label_121cb0;
        default: break;
    }

    ctx->pc = 0x121c6cu;

    // 0x121c6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121c74: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x121c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121c78: 0x0  nop
    ctx->pc = 0x121c78u;
    // NOP
    // 0x121c7c: 0x0  nop
    ctx->pc = 0x121c7cu;
    // NOP
    // 0x121c80: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121c80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121c84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x121c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121c88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121c8c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x121c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121c90: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x121C90u;
    {
        const bool branch_taken_0x121c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C90u;
        // 0x121c94: 0xe60100e0  swc1        $f1, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c90) {
            ctx->pc = 0x121D24u;
            return;
        }
    }
    ctx->pc = 0x121C98u;
    // 0x121c98: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x121c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ca0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ca4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x121ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x121ca8: 0xc047898  jal         func_11E260
    ctx->pc = 0x121CA8u;
    SET_GPR_U32(ctx, 31, 0x121CB0u);
    ctx->pc = 0x121CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CA8u;
    // 0x121cac: 0xae0500d8  sw          $a1, 0xD8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x121CA8u, 0x121CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CB0u;
label_121cb0:
    // 0x121cb0: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x121cb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121cb8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x121cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x121cbc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x121CBCu;
    {
        const bool branch_taken_0x121cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CBCu;
        // 0x121cc0: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cbc) {
            ctx->pc = 0x121D24u;
            return;
        }
    }
    ctx->pc = 0x121CC4u;
    // 0x121cc4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121cc8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121cc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121ccc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121cccu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121cd0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121cd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121cd8: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x121cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x121cdc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121ce0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121ce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121ce4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121ce4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121ce8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121ce8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121cf0: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x121cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x121cf4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x121cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121cf8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121cfc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121cfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121d00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121d00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121d08: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x121d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x121d0c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x121d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121d10: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121d14: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121d14u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121d18: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121d18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121d20: 0xe600014c  swc1        $f0, 0x14C($s0)
    ctx->pc = 0x121d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
    ctx->pc = 0x121d24u;
}
