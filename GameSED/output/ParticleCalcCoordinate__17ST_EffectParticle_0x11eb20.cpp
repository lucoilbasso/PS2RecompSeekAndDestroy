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

// Function: ParticleCalcCoordinate__17ST_EffectParticle
// Address: 0x11eb20 - 0x11ed0c
void ParticleCalcCoordinate__17ST_EffectParticle_0x11eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParticleCalcCoordinate__17ST_EffectParticle_0x11eb20");
#endif

    ctx->pc = 0x11eb20u;

    // 0x11eb20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11eb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11eb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11eb28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11eb2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11eb30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB30u;
    {
        const bool branch_taken_0x11eb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB30u;
        // 0x11eb34: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb30) {
            ctx->pc = 0x11EB48u;
            goto label_11eb48;
        }
    }
    ctx->pc = 0x11EB38u;
    // 0x11eb38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11eb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb40: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x11EB40u;
    {
        const bool branch_taken_0x11eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB40u;
        // 0x11eb44: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb40) {
            ctx->pc = 0x11ED04u;
            goto label_11ed04;
        }
    }
    ctx->pc = 0x11EB48u;
label_11eb48:
    // 0x11eb48: 0xc4c10060  lwc1        $f1, 0x60($a2)
    ctx->pc = 0x11eb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11eb4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11eb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11eb50: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x11eb50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb54: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB54u;
    {
        const bool branch_taken_0x11eb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11eb54) {
            ctx->pc = 0x11EB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EB54u;
            // 0x11eb58: 0xc4c1005c  lwc1        $f1, 0x5C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB6Cu;
            goto label_11eb6c;
        }
    }
    ctx->pc = 0x11EB5Cu;
    // 0x11eb5c: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x11eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11eb64: 0xe4c0005c  swc1        $f0, 0x5C($a2)
    ctx->pc = 0x11eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x11eb68: 0xc4c1005c  lwc1        $f1, 0x5C($a2)
    ctx->pc = 0x11eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11eb6c:
    // 0x11eb6c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x11eb6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb70: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x11EB70u;
    {
        const bool branch_taken_0x11eb70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB70u;
        // 0x11eb74: 0x24c20080  addiu       $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb70) {
            ctx->pc = 0x11EBA4u;
            goto label_11eba4;
        }
    }
    ctx->pc = 0x11EB78u;
    // 0x11eb78: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x11eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb7c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x11eb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb80: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x11EB80u;
    {
        const bool branch_taken_0x11eb80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB80u;
        // 0x11eb84: 0x24c40090  addiu       $a0, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb80) {
            ctx->pc = 0x11EBA8u;
            goto label_11eba8;
        }
    }
    ctx->pc = 0x11EB88u;
    // 0x11eb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11eb8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11eb8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB90u;
    {
        const bool branch_taken_0x11eb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB90u;
        // 0x11eb94: 0xe4c00058  swc1        $f0, 0x58($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb90) {
            ctx->pc = 0x11EBA8u;
            goto label_11eba8;
        }
    }
    ctx->pc = 0x11EB98u;
    // 0x11eb98: 0xe4c2005c  swc1        $f2, 0x5C($a2)
    ctx->pc = 0x11eb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x11eb9c: 0xe4c20058  swc1        $f2, 0x58($a2)
    ctx->pc = 0x11eb9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x11eba0: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x11eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_11eba4:
    // 0x11eba4: 0x24c40090  addiu       $a0, $a2, 0x90
    ctx->pc = 0x11eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_11eba8:
    // 0x11eba8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x11eba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ebac: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x11ebacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ebb0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11ebb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ebb4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x11ebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ebb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ebbc: 0x94c2002a  lhu         $v0, 0x2A($a2)
    ctx->pc = 0x11ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x11ebc0: 0x54430037  bnel        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x11EBC0u;
    {
        const bool branch_taken_0x11ebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ebc0) {
            ctx->pc = 0x11EBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBC0u;
            // 0x11ebc4: 0x24c200a0  addiu       $v0, $a2, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ECA0u;
            goto label_11eca0;
        }
    }
    ctx->pc = 0x11EBC8u;
    // 0x11ebc8: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x11ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ebcc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ebccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ebd0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ebd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ebd4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x11EBD4u;
    {
        const bool branch_taken_0x11ebd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ebd4) {
            ctx->pc = 0x11EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBD4u;
            // 0x11ebd8: 0xc4c00090  lwc1        $f0, 0x90($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBDCu;
    // 0x11ebdc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x11ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ebe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ebe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ebe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ebe8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ebe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ebec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x11EBECu;
    {
        const bool branch_taken_0x11ebec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ebec) {
            ctx->pc = 0x11EBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBECu;
            // 0x11ebf0: 0xc4c00090  lwc1        $f0, 0x90($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBF4u;
    // 0x11ebf4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x11ebf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11ebf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBF8u;
        // 0x11ebfc: 0xe4c200a0  swc1        $f2, 0xA0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11EC0Cu;
            goto label_11ec0c;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0xc4c100a0  lwc1        $f1, 0xA0($a2)
    ctx->pc = 0x11ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec08: 0xe4c00090  swc1        $f0, 0x90($a2)
    ctx->pc = 0x11ec08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 144), bits); }
label_11ec0c:
    // 0x11ec0c: 0xc4c000a4  lwc1        $f0, 0xA4($a2)
    ctx->pc = 0x11ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ec10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ec14: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ec14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec18: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x11EC18u;
    {
        const bool branch_taken_0x11ec18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec18) {
            ctx->pc = 0x11EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC18u;
            // 0x11ec1c: 0xc4c00094  lwc1        $f0, 0x94($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC48u;
            goto label_11ec48;
        }
    }
    ctx->pc = 0x11EC20u;
    // 0x11ec20: 0xc4c10094  lwc1        $f1, 0x94($a2)
    ctx->pc = 0x11ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ec28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ec2c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ec2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec30: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC30u;
            // 0x11ec34: 0xc4c00094  lwc1        $f0, 0x94($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC48u;
            goto label_11ec48;
        }
    }
    ctx->pc = 0x11EC38u;
    // 0x11ec38: 0xe4c200a4  swc1        $f2, 0xA4($a2)
    ctx->pc = 0x11ec38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 164), bits); }
    // 0x11ec3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC3Cu;
    {
        const bool branch_taken_0x11ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC3Cu;
        // 0x11ec40: 0xe4c20094  swc1        $f2, 0x94($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec3c) {
            ctx->pc = 0x11EC54u;
            goto label_11ec54;
        }
    }
    ctx->pc = 0x11EC44u;
    // 0x11ec44: 0x0  nop
    ctx->pc = 0x11ec44u;
    // NOP
label_11ec48:
    // 0x11ec48: 0xc4c100a4  lwc1        $f1, 0xA4($a2)
    ctx->pc = 0x11ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec50: 0xe4c00094  swc1        $f0, 0x94($a2)
    ctx->pc = 0x11ec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
label_11ec54:
    // 0x11ec54: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x11ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ec58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ec58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ec5c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ec5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec60: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x11EC60u;
    {
        const bool branch_taken_0x11ec60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec60) {
            ctx->pc = 0x11EC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC60u;
            // 0x11ec64: 0xc4c00098  lwc1        $f0, 0x98($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11EC68u;
    // 0x11ec68: 0xc4c10098  lwc1        $f1, 0x98($a2)
    ctx->pc = 0x11ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ec70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ec74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ec74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ec78: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC78u;
    {
        const bool branch_taken_0x11ec78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ec78) {
            ctx->pc = 0x11EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC78u;
            // 0x11ec7c: 0xc4c00098  lwc1        $f0, 0x98($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC90u;
            goto label_11ec90;
        }
    }
    ctx->pc = 0x11EC80u;
    // 0x11ec80: 0xe4c200a8  swc1        $f2, 0xA8($a2)
    ctx->pc = 0x11ec80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x11ec84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11EC84u;
    {
        const bool branch_taken_0x11ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC84u;
        // 0x11ec88: 0xe4c20098  swc1        $f2, 0x98($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec84) {
            ctx->pc = 0x11ECB0u;
            goto label_11ecb0;
        }
    }
    ctx->pc = 0x11EC8Cu;
    // 0x11ec8c: 0x0  nop
    ctx->pc = 0x11ec8cu;
    // NOP
label_11ec90:
    // 0x11ec90: 0xc4c100a8  lwc1        $f1, 0xA8($a2)
    ctx->pc = 0x11ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ec94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ec94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ec98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EC98u;
    {
        const bool branch_taken_0x11ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC98u;
        // 0x11ec9c: 0xe4c00098  swc1        $f0, 0x98($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec98) {
            ctx->pc = 0x11ECB0u;
            goto label_11ecb0;
        }
    }
    ctx->pc = 0x11ECA0u;
label_11eca0:
    // 0x11eca0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x11eca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11eca4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x11eca4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11eca8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11eca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ecac: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x11ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_11ecb0:
    // 0x11ecb0: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x11ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ecb4: 0xc4c20080  lwc1        $f2, 0x80($a2)
    ctx->pc = 0x11ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ecb8: 0xc4c10084  lwc1        $f1, 0x84($a2)
    ctx->pc = 0x11ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ecbc: 0xc4c00088  lwc1        $f0, 0x88($a2)
    ctx->pc = 0x11ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ecc0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11ecc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11ecc4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11ecc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11ecc8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11ecc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11eccc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11ecccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ecd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11ecd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ecd4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x11ecd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11ecd8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11ecdc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x11ecdcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ece0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x11ece0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x11ece4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x11ece4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ece8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x11ecec: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x11ececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x11ecf0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x11ecf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11ecf4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x11ecf4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ecf8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11ecf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ecfc: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x11ecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ed00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ed04:
    // 0x11ed04: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED04u;
        // 0x11ed08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ED0Cu;
}
