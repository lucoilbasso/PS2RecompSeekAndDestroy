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

// Function: SpriteCalcCoordinate__15ST_EffectSprite
// Address: 0x121be0 - 0x122168
void SpriteCalcCoordinate__15ST_EffectSprite_0x121be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpriteCalcCoordinate__15ST_EffectSprite_0x121be0");
#endif

    switch (ctx->pc) {
        case 0x121cb0u: goto label_121cb0;
        case 0x121d38u: goto label_121d38;
        case 0x121e18u: goto label_121e18;
        case 0x121fa0u: goto label_121fa0;
        case 0x12214cu: goto label_12214c;
        default: break;
    }

    ctx->pc = 0x121be0u;

    // 0x121be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x121becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x121bf0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x121bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121bf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121bfc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x121bfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x121c00: 0x94c3001e  lhu         $v1, 0x1E($a2)
    ctx->pc = 0x121c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x121c04: 0x10640152  beq         $v1, $a0, . + 4 + (0x152 << 2)
    ctx->pc = 0x121C04u;
    {
        const bool branch_taken_0x121c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x121C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C04u;
        // 0x121c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c04) {
            ctx->pc = 0x122150u;
            goto label_122150;
        }
    }
    ctx->pc = 0x121C0Cu;
    // 0x121c0c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x121c10: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x121C10u;
    {
        const bool branch_taken_0x121c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C10u;
        // 0x121c14: 0x8cd10018  lw          $s1, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c10) {
            ctx->pc = 0x121D24u;
            goto label_121d24;
        }
    }
    ctx->pc = 0x121C18u;
    // 0x121c18: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x121c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x121c1c: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x121C1Cu;
    {
        const bool branch_taken_0x121c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c1c) {
            ctx->pc = 0x121C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C1Cu;
            // 0x121c20: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121D28u;
            goto label_121d28;
        }
    }
    ctx->pc = 0x121C24u;
    // 0x121c24: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x121c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121c2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121c30: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
    ctx->pc = 0x121C30u;
    {
        const bool branch_taken_0x121c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121c30) {
            ctx->pc = 0x121C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C30u;
            // 0x121c34: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121D28u;
            goto label_121d28;
        }
    }
    ctx->pc = 0x121C38u;
    // 0x121c38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x121c3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121C3Cu;
    {
        const bool branch_taken_0x121c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C3Cu;
        // 0x121c40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c3c) {
            ctx->pc = 0x121C58u;
            goto label_121c58;
        }
    }
    ctx->pc = 0x121C44u;
    // 0x121c44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121c48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121C4Cu;
    {
        const bool branch_taken_0x121c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c4c) {
            ctx->pc = 0x121C6Cu;
            goto label_121c6c;
        }
    }
    ctx->pc = 0x121C54u;
    // 0x121c54: 0x0  nop
    ctx->pc = 0x121c54u;
    // NOP
label_121c58:
    // 0x121c58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121c68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_121c6c:
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
            goto label_121d24;
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
            goto label_121d24;
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
label_121d24:
    // 0x121d24: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x121d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_121d28:
    // 0x121d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121D28u;
    {
        const bool branch_taken_0x121d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D28u;
        // 0x121d2c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d28) {
            ctx->pc = 0x121D40u;
            goto label_121d40;
        }
    }
    ctx->pc = 0x121D30u;
    // 0x121d30: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x121D30u;
    SET_GPR_U32(ctx, 31, 0x121D38u);
    ctx->pc = 0x121D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D30u;
    // 0x121d34: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x121D30u, 0x121D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D38u;
label_121d38:
    // 0x121d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121D38u;
    {
        const bool branch_taken_0x121d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D38u;
        // 0x121d3c: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d38) {
            ctx->pc = 0x121D4Cu;
            goto label_121d4c;
        }
    }
    ctx->pc = 0x121D40u;
label_121d40:
    // 0x121d40: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x121d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x121d44: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x121d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x121d48: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_121d4c:
    // 0x121d4c: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x121D4Cu;
    {
        const bool branch_taken_0x121d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d4c) {
            ctx->pc = 0x121D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D4Cu;
            // 0x121d50: 0xc6010160  lwc1        $f1, 0x160($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EE8u;
            goto label_121ee8;
        }
    }
    ctx->pc = 0x121D54u;
    // 0x121d54: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x121d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121d5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121d60: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x121D60u;
    {
        const bool branch_taken_0x121d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x121d60) {
            ctx->pc = 0x121D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D60u;
            // 0x121d64: 0x8e0200f8  lw          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121DA0u;
            goto label_121da0;
        }
    }
    ctx->pc = 0x121D68u;
    // 0x121d68: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x121d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121d70: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121d74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121d78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x121d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121d80: 0xc6030100  lwc1        $f3, 0x100($s0)
    ctx->pc = 0x121d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x121d84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121d88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121d8c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x121d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x121d90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x121d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x121d94: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121d98: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x121D98u;
    {
        const bool branch_taken_0x121d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D98u;
        // 0x121d9c: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d98) {
            ctx->pc = 0x121F08u;
            goto label_121f08;
        }
    }
    ctx->pc = 0x121DA0u;
label_121da0:
    // 0x121da0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121da4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121DA4u;
    {
        const bool branch_taken_0x121da4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DA4u;
        // 0x121da8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121da4) {
            ctx->pc = 0x121DC0u;
            goto label_121dc0;
        }
    }
    ctx->pc = 0x121DACu;
    // 0x121dac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121db0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x121DB4u;
    {
        const bool branch_taken_0x121db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121db4) {
            ctx->pc = 0x121DD4u;
            goto label_121dd4;
        }
    }
    ctx->pc = 0x121DBCu;
    // 0x121dbc: 0x0  nop
    ctx->pc = 0x121dbcu;
    // NOP
label_121dc0:
    // 0x121dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121dc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121dc8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121dcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121dd0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121dd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_121dd4:
    // 0x121dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ddc: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x121ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121de0: 0x0  nop
    ctx->pc = 0x121de0u;
    // NOP
    // 0x121de4: 0x0  nop
    ctx->pc = 0x121de4u;
    // NOP
    // 0x121de8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121de8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121dec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121df0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121df0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121df4: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121df8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x121DF8u;
    {
        const bool branch_taken_0x121df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DF8u;
        // 0x121dfc: 0xe60100fc  swc1        $f1, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121df8) {
            ctx->pc = 0x121E24u;
            goto label_121e24;
        }
    }
    ctx->pc = 0x121E00u;
    // 0x121e00: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x121e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x121e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e0c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121e10: 0xc047898  jal         func_11E260
    ctx->pc = 0x121E10u;
    SET_GPR_U32(ctx, 31, 0x121E18u);
    ctx->pc = 0x121E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E10u;
    // 0x121e14: 0xae0500f4  sw          $a1, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x121E10u, 0x121E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E18u;
label_121e18:
    // 0x121e18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121e1c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x121e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x121e20: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x121e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_121e24:
    // 0x121e24: 0xc60500fc  lwc1        $f5, 0xFC($s0)
    ctx->pc = 0x121e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x121e28: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x121e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121e2c: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x121E2Cu;
    {
        const bool branch_taken_0x121e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121e2c) {
            ctx->pc = 0x121E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121E2Cu;
            // 0x121e30: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EA0u;
            goto label_121ea0;
        }
    }
    ctx->pc = 0x121E34u;
    // 0x121e34: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x121e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x121e38: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x121e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x121e3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x121e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x121e40: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x121e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x121e44: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121e48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x121e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x121e4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x121e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x121e50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121e54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x121e54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121e58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121e5c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x121e60: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121e64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x121e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x121e68: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x121e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121e6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121e70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121e78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121e7c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x121e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x121e80: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x121e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x121e84: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x121e84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x121e88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121e88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121e8c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x121e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x121e90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x121e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x121e94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x121E94u;
    {
        const bool branch_taken_0x121e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E94u;
        // 0x121e98: 0xe6030114  swc1        $f3, 0x114($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e94) {
            ctx->pc = 0x121EC4u;
            goto label_121ec4;
        }
    }
    ctx->pc = 0x121E9Cu;
    // 0x121e9c: 0x0  nop
    ctx->pc = 0x121e9cu;
    // NOP
label_121ea0:
    // 0x121ea0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121ea4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121ea8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x121ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121eb0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x121eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121eb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121eb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121ebc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121ec0: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x121ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_121ec4:
    // 0x121ec4: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x121ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ec8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x121ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ecc: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x121eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ed0: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x121ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121ed4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121ed8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121edc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x121EE0u;
    {
        const bool branch_taken_0x121ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EE0u;
        // 0x121ee4: 0xe6010114  swc1        $f1, 0x114($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ee0) {
            ctx->pc = 0x121F08u;
            goto label_121f08;
        }
    }
    ctx->pc = 0x121EE8u;
label_121ee8:
    // 0x121ee8: 0xc6000164  lwc1        $f0, 0x164($s0)
    ctx->pc = 0x121ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121eec: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x121eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ef0: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x121ef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x121ef4: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x121ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121ef8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x121ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x121efc: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x121f00: 0xe6030160  swc1        $f3, 0x160($s0)
    ctx->pc = 0x121f00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x121f04: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x121f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
label_121f08:
    // 0x121f08: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x121f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121f0c: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x121F0Cu;
    {
        const bool branch_taken_0x121f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f0c) {
            ctx->pc = 0x121F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F0Cu;
            // 0x121f10: 0xc601016c  lwc1        $f1, 0x16C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1220D0u;
            goto label_1220d0;
        }
    }
    ctx->pc = 0x121F14u;
    // 0x121f14: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x121f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121f20: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x121F20u;
    {
        const bool branch_taken_0x121f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F20u;
        // 0x121f24: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f20) {
            ctx->pc = 0x122144u;
            goto label_122144;
        }
    }
    ctx->pc = 0x121F28u;
    // 0x121f28: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x121f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121f2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x121f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x121f30: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121F30u;
    {
        const bool branch_taken_0x121f30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F30u;
        // 0x121f34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f30) {
            ctx->pc = 0x121F48u;
            goto label_121f48;
        }
    }
    ctx->pc = 0x121F38u;
    // 0x121f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121f3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121f40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x121F40u;
    {
        const bool branch_taken_0x121f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f40) {
            ctx->pc = 0x121F5Cu;
            goto label_121f5c;
        }
    }
    ctx->pc = 0x121F48u;
label_121f48:
    // 0x121f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121f4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121f50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121f54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121f58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121f58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_121f5c:
    // 0x121f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f64: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x121f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121f68: 0x0  nop
    ctx->pc = 0x121f68u;
    // NOP
    // 0x121f6c: 0x0  nop
    ctx->pc = 0x121f6cu;
    // NOP
    // 0x121f70: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121f70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121f74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121f7c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121f80: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x121F80u;
    {
        const bool branch_taken_0x121f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F80u;
        // 0x121f84: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f80) {
            ctx->pc = 0x121FACu;
            goto label_121fac;
        }
    }
    ctx->pc = 0x121F88u;
    // 0x121f88: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121f8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f94: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x121f98: 0xc047898  jal         func_11E260
    ctx->pc = 0x121F98u;
    SET_GPR_U32(ctx, 31, 0x121FA0u);
    ctx->pc = 0x121F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F98u;
    // 0x121f9c: 0xae0500e4  sw          $a1, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x121F98u, 0x121FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FA0u;
label_121fa0:
    // 0x121fa0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121fa4: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x121fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x121fa8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x121fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_121fac:
    // 0x121fac: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x121facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121fb0: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x121fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121fb4: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x121FB4u;
    {
        const bool branch_taken_0x121fb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121fb4) {
            ctx->pc = 0x121FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121FB4u;
            // 0x121fb8: 0x8e0200e4  lw          $v0, 0xE4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121FE8u;
            goto label_121fe8;
        }
    }
    ctx->pc = 0x121FBCu;
    // 0x121fbc: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x121fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121fc0: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121fc4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x121fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121fc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121fcc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x121fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x121fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121fd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x121FE0u;
    {
        const bool branch_taken_0x121fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FE0u;
        // 0x121fe4: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fe0) {
            ctx->pc = 0x121FF4u;
            goto label_121ff4;
        }
    }
    ctx->pc = 0x121FE8u;
label_121fe8:
    // 0x121fe8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x121fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121ff0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x121ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_121ff4:
    // 0x121ff4: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x121ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122000: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x122000u;
    {
        const bool branch_taken_0x122000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122000) {
            ctx->pc = 0x122004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122000u;
            // 0x122004: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122008u;
            goto label_122008;
        }
    }
    ctx->pc = 0x122008u;
label_122008:
    // 0x122008: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x122008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12200c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12200cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122010: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x122010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x122014: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x122014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122018: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x122018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x12201c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122020: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x122024: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x122024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x122028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12202c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x12202Cu;
    {
        const bool branch_taken_0x12202c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12202c) {
            ctx->pc = 0x122030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12202Cu;
            // 0x122030: 0xc60100d4  lwc1        $f1, 0xD4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12204Cu;
            goto label_12204c;
        }
    }
    ctx->pc = 0x122034u;
    // 0x122034: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x122038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x12203c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12203cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x122040: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x122040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122044: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x122048: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x122048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12204c:
    // 0x12204c: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x12204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x122050: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x122050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x122054: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12205c: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x122060: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x122064: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x122064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122068: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x122068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12206c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x12206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x122070: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x122074: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x122074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122078: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x122078u;
    {
        const bool branch_taken_0x122078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122078) {
            ctx->pc = 0x12207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122078u;
            // 0x12207c: 0xc60200f0  lwc1        $f2, 0xF0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x122098u;
            goto label_122098;
        }
    }
    ctx->pc = 0x122080u;
    // 0x122080: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x122080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x122084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x122088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12208c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x12208cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x122090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x122094: 0xc60200f0  lwc1        $f2, 0xF0($s0)
    ctx->pc = 0x122094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122098:
    // 0x122098: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x122098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x12209c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12209cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1220a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1220a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1220a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1220a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1220a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1220ac: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1220acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x1220b0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1220b4: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1220b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220b8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1220B8u;
    {
        const bool branch_taken_0x1220b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1220BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220B8u;
        // 0x1220bc: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220b8) {
            ctx->pc = 0x122140u;
            goto label_122140;
        }
    }
    ctx->pc = 0x1220C0u;
    // 0x1220c0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1220c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1220c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1220c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1220C8u;
    {
        const bool branch_taken_0x1220c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220C8u;
        // 0x1220cc: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220c8) {
            ctx->pc = 0x122140u;
            goto label_122140;
        }
    }
    ctx->pc = 0x1220D0u;
label_1220d0:
    // 0x1220d0: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x1220d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1220d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1220d8: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1220d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1220dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1220dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1220e0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1220e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1220e4: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1220e4u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1220e8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1220e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1220ec: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1220ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1220f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1220f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1220f4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1220f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1220f8: 0x2484f640  addiu       $a0, $a0, -0x9C0
    ctx->pc = 0x1220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x1220fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x122100: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x122100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x122104: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x122104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x122108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12210c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122110: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x122110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x122114: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x122114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x122118: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x122118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12211c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x12211cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x122120: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x122120u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x122124: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x122124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x122128: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x122128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x12212c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x12212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x122130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x122130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x122134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x122134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x122138: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x122138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12213c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x12213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_122140:
    // 0x122140: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x122140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_122144:
    // 0x122144: 0xc0484ee  jal         func_1213B8
    ctx->pc = 0x122144u;
    SET_GPR_U32(ctx, 31, 0x12214Cu);
    ctx->pc = 0x122148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122144u;
    // 0x122148: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B8u, 0x122144u, 0x12214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12214Cu;
label_12214c:
    // 0x12214c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122150:
    // 0x122150: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x122150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122154: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x122154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x122158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12215c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x12215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122160: 0x3e00008  jr          $ra
    ctx->pc = 0x122160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122160u;
        // 0x122164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122168u;
}
