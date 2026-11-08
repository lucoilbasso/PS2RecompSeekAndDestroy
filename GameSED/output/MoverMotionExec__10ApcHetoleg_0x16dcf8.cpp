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

// Function: MoverMotionExec__10ApcHetoleg
// Address: 0x16dcf8 - 0x16e124
void MoverMotionExec__10ApcHetoleg_0x16dcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverMotionExec__10ApcHetoleg_0x16dcf8");
#endif

    switch (ctx->pc) {
        case 0x16dee4u: goto label_16dee4;
        case 0x16df10u: goto label_16df10;
        case 0x16df3cu: goto label_16df3c;
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb8u: goto label_16dfb8;
        case 0x16dff4u: goto label_16dff4;
        case 0x16e004u: goto label_16e004;
        case 0x16e080u: goto label_16e080;
        case 0x16e088u: goto label_16e088;
        case 0x16e0fcu: goto label_16e0fc;
        default: break;
    }

    ctx->pc = 0x16dcf8u;

    // 0x16dcf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16dcfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16dd00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16dd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16dd08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16dd0c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16dd10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16dd14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16dd18: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x16dd18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16dd1c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x16dd1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16dd20: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x16dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x16dd24: 0x44000f5  bltz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x16DD24u;
    {
        const bool branch_taken_0x16dd24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD24u;
        // 0x16dd28: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd24) {
            ctx->pc = 0x16E0FCu;
            goto label_16e0fc;
        }
    }
    ctx->pc = 0x16DD2Cu;
    // 0x16dd2c: 0xc64202e4  lwc1        $f2, 0x2E4($s2)
    ctx->pc = 0x16dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dd30: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x16dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dd34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16dd38: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x16dd3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd40: 0x8c63d460  lw          $v1, -0x2BA0($v1)
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956128)));
    // 0x16dd44: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x16dd44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dd48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16DD48u;
    {
        const bool branch_taken_0x16dd48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD48u;
        // 0x16dd4c: 0x8e540150  lw          $s4, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd48) {
            ctx->pc = 0x16DD60u;
            goto label_16dd60;
        }
    }
    ctx->pc = 0x16DD50u;
    // 0x16dd50: 0xc78084b4  lwc1        $f0, -0x7B4C($gp)
    ctx->pc = 0x16dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16DD54u;
    {
        const bool branch_taken_0x16dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd54) {
            ctx->pc = 0x16DD70u;
            goto label_16dd70;
        }
    }
    ctx->pc = 0x16DD5Cu;
    // 0x16dd5c: 0x0  nop
    ctx->pc = 0x16dd5cu;
    // NOP
label_16dd60:
    // 0x16dd60: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16dd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dd64: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16DD64u;
    {
        const bool branch_taken_0x16dd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD64u;
        // 0x16dd68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd64) {
            ctx->pc = 0x16DDA8u;
            goto label_16dda8;
        }
    }
    ctx->pc = 0x16DD6Cu;
    // 0x16dd6c: 0xc78084b8  lwc1        $f0, -0x7B48($gp)
    ctx->pc = 0x16dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16dd70:
    // 0x16dd70: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16dd70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd74: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16dd74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16dd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd7c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x16dd7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16dd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16dd84: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x16dd84u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16dd88: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16dd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16dd8c: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16dd8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16dd90: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16dd90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16dd94: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16dd94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16dd98: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x16dd98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16dd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16dd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dda0: 0xe64002f4  swc1        $f0, 0x2F4($s2)
    ctx->pc = 0x16dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x16dda4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16dda8:
    // 0x16dda8: 0xc78384bc  lwc1        $f3, -0x7B44($gp)
    ctx->pc = 0x16dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ddac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16ddb0: 0xc4410600  lwc1        $f1, 0x600($v0)
    ctx->pc = 0x16ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ddb4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x16ddb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ddb8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x16DDB8u;
    {
        const bool branch_taken_0x16ddb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDB8u;
        // 0x16ddbc: 0xe64102e8  swc1        $f1, 0x2E8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddb8) {
            ctx->pc = 0x16DE00u;
            goto label_16de00;
        }
    }
    ctx->pc = 0x16DDC0u;
    // 0x16ddc0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x16ddc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16ddc4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x16ddc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ddc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ddcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16ddccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ddd0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x16ddd0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16ddd4: 0xc78284c0  lwc1        $f2, -0x7B40($gp)
    ctx->pc = 0x16ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ddd8: 0xc64002e0  lwc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dddc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16dddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16dde0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x16dde4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16dde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16dde8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16ddec: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16ddf0: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x16ddf0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x16ddf4: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x16ddf8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x16DDF8u;
    {
        const bool branch_taken_0x16ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDF8u;
        // 0x16ddfc: 0xe64002e0  swc1        $f0, 0x2E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddf8) {
            ctx->pc = 0x16DF3Cu;
            goto label_16df3c;
        }
    }
    ctx->pc = 0x16DE00u;
label_16de00:
    // 0x16de00: 0xc78084c4  lwc1        $f0, -0x7B3C($gp)
    ctx->pc = 0x16de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16de04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de08: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
    ctx->pc = 0x16DE08u;
    {
        const bool branch_taken_0x16de08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de08) {
            ctx->pc = 0x16DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE08u;
            // 0x16de0c: 0x8e4202b0  lw          $v0, 0x2B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DF40u;
            goto label_16df40;
        }
    }
    ctx->pc = 0x16DE10u;
    // 0x16de10: 0xc64002e4  lwc1        $f0, 0x2E4($s2)
    ctx->pc = 0x16de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16de14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16de18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16de18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de1c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x16DE1Cu;
    {
        const bool branch_taken_0x16de1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de1c) {
            ctx->pc = 0x16DE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE1Cu;
            // 0x16de20: 0xc64002e0  lwc1        $f0, 0x2E0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DE78u;
            goto label_16de78;
        }
    }
    ctx->pc = 0x16DE24u;
    // 0x16de24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16de28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16de28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16de2c: 0xc64202f0  lwc1        $f2, 0x2F0($s2)
    ctx->pc = 0x16de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16de30: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x16de34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16de34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16de38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16de38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de3c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16de3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16de40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de44: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x16de44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de48: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16de48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de4c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x16de4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de50: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16de50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16de54: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16de54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16de58: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16de58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16de5c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16de5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16de60: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x16de60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16de64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16de64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16de68: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16de68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16de6c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16DE6Cu;
    {
        const bool branch_taken_0x16de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE6Cu;
        // 0x16de70: 0xe64002f0  swc1        $f0, 0x2F0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de6c) {
            ctx->pc = 0x16DF3Cu;
            goto label_16df3c;
        }
    }
    ctx->pc = 0x16DE74u;
    // 0x16de74: 0x0  nop
    ctx->pc = 0x16de74u;
    // NOP
label_16de78:
    // 0x16de78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16de78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16de7c: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16de80: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16de80u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16de84: 0xc65402f0  lwc1        $f20, 0x2F0($s2)
    ctx->pc = 0x16de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16de88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16de8c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x16de90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16de90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16de94: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x16de98: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16de98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x16de9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x16dea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16dea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dea4: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16dea8: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16deac: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x16deb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16deb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16deb4: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16deb8: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x16debc: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16debcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x16dec0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dec4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dec8: 0xc4b50004  lwc1        $f21, 0x4($a1)
    ctx->pc = 0x16dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16decc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x16deccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x16ded0: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x16ded0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x16ded4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16ded4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x16ded8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ded8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16dedc: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16DEDCu;
    SET_GPR_U32(ctx, 31, 0x16DEE4u);
    ctx->pc = 0x16DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEDCu;
    // 0x16dee0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16DEDCu, 0x16DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEE4u;
label_16dee4:
    // 0x16dee4: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16dee8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16dee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16deec: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16deecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16def0: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16def0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16def4: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x16def4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16def8: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x16defc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16df00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16df04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16df08: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DF08u;
    SET_GPR_U32(ctx, 31, 0x16DF10u);
    ctx->pc = 0x16DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF08u;
    // 0x16df0c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DF08u, 0x16DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF10u;
label_16df10:
    // 0x16df10: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16df14: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x16df14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16df18: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16df18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16df1c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16df1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16df20: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x16df20u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16df24: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x16df24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x16df28: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16df2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16df30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16df34: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DF34u;
    SET_GPR_U32(ctx, 31, 0x16DF3Cu);
    ctx->pc = 0x16DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF34u;
    // 0x16df38: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DF34u, 0x16DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF3Cu;
label_16df3c:
    // 0x16df3c: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x16df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
label_16df40:
    // 0x16df40: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16df40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16df44: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x16DF44u;
    {
        const bool branch_taken_0x16df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16df44) {
            ctx->pc = 0x16DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DF44u;
            // 0x16df48: 0xc64c02f4  lwc1        $f12, 0x2F4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DFBCu;
            goto label_16dfbc;
        }
    }
    ctx->pc = 0x16DF4Cu;
    // 0x16df4c: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16df50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x16df54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16df54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16df58: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x16df58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x16df5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16df5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16df60: 0xc78384c8  lwc1        $f3, -0x7B38($gp)
    ctx->pc = 0x16df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16df64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16df64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16df68: 0xc78484cc  lwc1        $f4, -0x7B34($gp)
    ctx->pc = 0x16df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16df6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16df70: 0xc78284d0  lwc1        $f2, -0x7B30($gp)
    ctx->pc = 0x16df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16df74: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x16df78: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x16df7c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x16df7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x16df80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16df84: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x16df84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x16df88: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16df88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16df8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16df8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16df90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16df90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16df94: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16df94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16df98: 0xe4620030  swc1        $f2, 0x30($v1)
    ctx->pc = 0x16df98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x16df9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16df9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16dfa0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x16dfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x16dfa4: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DFA4u;
    SET_GPR_U32(ctx, 31, 0x16DFACu);
    ctx->pc = 0x16DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFA4u;
    // 0x16dfa8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DFA4u, 0x16DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFACu;
label_16dfac:
    // 0x16dfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfb0: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DFB0u;
    SET_GPR_U32(ctx, 31, 0x16DFB8u);
    ctx->pc = 0x16DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFB0u;
    // 0x16dfb4: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DFB0u, 0x16DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFB8u;
label_16dfb8:
    // 0x16dfb8: 0xc64c02f4  lwc1        $f12, 0x2F4($s2)
    ctx->pc = 0x16dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16dfbc:
    // 0x16dfbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16dfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfc0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x16dfc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16dfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dfc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16dfc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dfcc: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x16dfd0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x16dfd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x16dfd4: 0xc78184d4  lwc1        $f1, -0x7B2C($gp)
    ctx->pc = 0x16dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dfd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dfdc: 0xc78d84d8  lwc1        $f13, -0x7B28($gp)
    ctx->pc = 0x16dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16dfe0: 0x261100d0  addiu       $s1, $s0, 0xD0
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x16dfe4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x16dfe4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x16dfe8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x16dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfec: 0xc067ba2  jal         func_19EE88
    ctx->pc = 0x16DFECu;
    SET_GPR_U32(ctx, 31, 0x16DFF4u);
    ctx->pc = 0x16DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFECu;
    // 0x16dff0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE88u, 0x16DFECu, 0x16DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFF4u;
label_16dff4:
    // 0x16dff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dff8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x16dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dffc: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16DFFCu;
    SET_GPR_U32(ctx, 31, 0x16E004u);
    ctx->pc = 0x16E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFFCu;
    // 0x16e000: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16DFFCu, 0x16E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E004u;
label_16e004:
    // 0x16e004: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x16e008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e00c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x16e00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x16e010: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16E010u;
    {
        const bool branch_taken_0x16e010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E010u;
        // 0x16e014: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e010) {
            ctx->pc = 0x16E048u;
            goto label_16e048;
        }
    }
    ctx->pc = 0x16E018u;
    // 0x16e018: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E018u;
    {
        const bool branch_taken_0x16e018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e018) {
            ctx->pc = 0x16E01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E018u;
            // 0x16e01c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E030u;
            goto label_16e030;
        }
    }
    ctx->pc = 0x16E020u;
    // 0x16e020: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16E020u;
    {
        const bool branch_taken_0x16e020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e020) {
            ctx->pc = 0x16E024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E020u;
            // 0x16e024: 0x269305c0  addiu       $s3, $s4, 0x5C0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1472));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E028u;
    // 0x16e028: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16E028u;
    {
        const bool branch_taken_0x16e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e028) {
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E030u;
label_16e030:
    // 0x16e030: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E030u;
    {
        const bool branch_taken_0x16e030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E030u;
        // 0x16e034: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e030) {
            ctx->pc = 0x16E050u;
            goto label_16e050;
        }
    }
    ctx->pc = 0x16E038u;
    // 0x16e038: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E038u;
    {
        const bool branch_taken_0x16e038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e038) {
            ctx->pc = 0x16E03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E038u;
            // 0x16e03c: 0x269305d0  addiu       $s3, $s4, 0x5D0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E040u;
    // 0x16e040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E040u;
    {
        const bool branch_taken_0x16e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e040) {
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E048u;
label_16e048:
    // 0x16e048: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E048u;
    {
        const bool branch_taken_0x16e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E048u;
        // 0x16e04c: 0x269305b0  addiu       $s3, $s4, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e048) {
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E050u;
label_16e050:
    // 0x16e050: 0x269305e0  addiu       $s3, $s4, 0x5E0
    ctx->pc = 0x16e050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1504));
label_16e054:
    // 0x16e054: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x16E054u;
    {
        const bool branch_taken_0x16e054 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E054u;
        // 0x16e058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e054) {
            ctx->pc = 0x16E0F4u;
            goto label_16e0f4;
        }
    }
    ctx->pc = 0x16E05Cu;
    // 0x16e05c: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x16e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x16e060: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16e060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e064: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x16e064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16e068: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x16e068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16e06c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E070u;
    {
        const bool branch_taken_0x16e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e070) {
            ctx->pc = 0x16E080u;
            goto label_16e080;
        }
    }
    ctx->pc = 0x16E078u;
    // 0x16e078: 0xc061920  jal         func_186480
    ctx->pc = 0x16E078u;
    SET_GPR_U32(ctx, 31, 0x16E080u);
    ctx->pc = 0x16E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E078u;
    // 0x16e07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E078u, 0x16E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E080u;
label_16e080:
    // 0x16e080: 0xc061422  jal         func_185088
    ctx->pc = 0x16E080u;
    SET_GPR_U32(ctx, 31, 0x16E088u);
    ctx->pc = 0x16E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E080u;
    // 0x16e084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E080u, 0x16E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E088u;
label_16e088:
    // 0x16e088: 0x260700e0  addiu       $a3, $s0, 0xE0
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x16e08c: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x16e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e090: 0x26460300  addiu       $a2, $s2, 0x300
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x16e094: 0xc78384dc  lwc1        $f3, -0x7B24($gp)
    ctx->pc = 0x16e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16e098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16e098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x16e09c: 0xc78284e0  lwc1        $f2, -0x7B20($gp)
    ctx->pc = 0x16e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e0a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e0a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16e0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16e0a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16e0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e0ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e0b0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x16e0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16e0b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16e0b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e0b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16e0bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e0bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16e0c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e0c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16e0c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16e0c8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x16e0c8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e0cc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x16e0ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16e0d0: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x16e0d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16e0d4: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x16e0d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16e0d8: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x16e0d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x16e0dc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16e0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16e0e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16e0e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e0e8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16e0e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e0ec: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x16e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16e0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e0f4:
    // 0x16e0f4: 0xc05b84a  jal         func_16E128
    ctx->pc = 0x16E0F4u;
    SET_GPR_U32(ctx, 31, 0x16E0FCu);
    ctx->pc = 0x16E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0F4u;
    // 0x16e0f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E128u, 0x16E0F4u, 0x16E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0FCu;
label_16e0fc:
    // 0x16e0fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16e0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e100: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16e100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e104: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16e104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e108: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16e108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e10c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16e10cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e110: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e114: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x16e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16e118: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x16e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E11Cu;
        // 0x16e120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E124u;
}
