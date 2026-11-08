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

// Function: MakeLocalMatrix__11GsCOORDUNIT
// Address: 0x184e40 - 0x185084
void MakeLocalMatrix__11GsCOORDUNIT_0x184e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeLocalMatrix__11GsCOORDUNIT_0x184e40");
#endif

    switch (ctx->pc) {
        case 0x184ea4u: goto label_184ea4;
        case 0x184ee8u: goto label_184ee8;
        default: break;
    }

    ctx->pc = 0x184e40u;

    // 0x184e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184e44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x184e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x184e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e4c: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x184e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x184e50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x184e54: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x184e54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x184e58: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x184e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x184e5c: 0x54400085  bnel        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x184E5Cu;
    {
        const bool branch_taken_0x184e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184e5c) {
            ctx->pc = 0x184E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E5Cu;
            // 0x184e60: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185074u;
            goto label_185074;
        }
    }
    ctx->pc = 0x184E64u;
    // 0x184e64: 0x30626000  andi        $v0, $v1, 0x6000
    ctx->pc = 0x184e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x184e68: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x184E68u;
    {
        const bool branch_taken_0x184e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e68) {
            ctx->pc = 0x184E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E68u;
            // 0x184e6c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185074u;
            goto label_185074;
        }
    }
    ctx->pc = 0x184E70u;
    // 0x184e70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184e78: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184E78u;
    {
        const bool branch_taken_0x184e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E78u;
        // 0x184e7c: 0x7a1100b0  lq          $s1, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e78) {
            ctx->pc = 0x184E98u;
            goto label_184e98;
        }
    }
    ctx->pc = 0x184E80u;
    // 0x184e80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184e84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184E84u;
    {
        const bool branch_taken_0x184e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E84u;
        // 0x184e88: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e84) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184E8Cu;
    // 0x184e8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x184E8Cu;
    {
        const bool branch_taken_0x184e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e8c) {
            ctx->pc = 0x184EE0u;
            goto label_184ee0;
        }
    }
    ctx->pc = 0x184E94u;
    // 0x184e94: 0x0  nop
    ctx->pc = 0x184e94u;
    // NOP
label_184e98:
    // 0x184e98: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x184e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184e9c: 0xc067abe  jal         func_19EAF8
    ctx->pc = 0x184E9Cu;
    SET_GPR_U32(ctx, 31, 0x184EA4u);
    ctx->pc = 0x184EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E9Cu;
    // 0x184ea0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAF8u, 0x184E9Cu, 0x184EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EA4u;
label_184ea4:
    // 0x184ea4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184EA4u;
    {
        const bool branch_taken_0x184ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA4u;
        // 0x184ea8: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ea4) {
            ctx->pc = 0x184EECu;
            goto label_184eec;
        }
    }
    ctx->pc = 0x184EACu;
    // 0x184eac: 0x0  nop
    ctx->pc = 0x184eacu;
    // NOP
label_184eb0:
    // 0x184eb0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184eb4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x184eb4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x184eb8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x184eb8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x184ebc: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x184ebcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x184ec0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x184ec0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x184ec4: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x184ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x184ec8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x184ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x184ecc: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x184eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x184ed0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x184ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x184ed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x184ED4u;
    {
        const bool branch_taken_0x184ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ED4u;
        // 0x184ed8: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed4) {
            ctx->pc = 0x184EECu;
            goto label_184eec;
        }
    }
    ctx->pc = 0x184EDCu;
    // 0x184edc: 0x0  nop
    ctx->pc = 0x184edcu;
    // NOP
label_184ee0:
    // 0x184ee0: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x184EE0u;
    SET_GPR_U32(ctx, 31, 0x184EE8u);
    ctx->pc = 0x184EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184EE0u;
    // 0x184ee4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x184EE0u, 0x184EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EE8u;
label_184ee8:
    // 0x184ee8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x184ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_184eec:
    // 0x184eec: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x184eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x184ef0: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x184EF0u;
    {
        const bool branch_taken_0x184ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ef0) {
            ctx->pc = 0x184EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184EF0u;
            // 0x184ef4: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FA4u;
            goto label_184fa4;
        }
    }
    ctx->pc = 0x184EF8u;
    // 0x184ef8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x184ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184efc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184f00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x184f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184f04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f08: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F50u;
            goto label_184f50;
        }
    }
    ctx->pc = 0x184F10u;
    // 0x184f10: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x184f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f18: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F50u;
            goto label_184f50;
        }
    }
    ctx->pc = 0x184F20u;
    // 0x184f20: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x184f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x184f24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x184F28u;
    {
        const bool branch_taken_0x184f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F28u;
        // 0x184f2c: 0x34631000  ori         $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f28) {
            ctx->pc = 0x184F50u;
            goto label_184f50;
        }
    }
    ctx->pc = 0x184F30u;
    // 0x184f30: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x184f34: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x184f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x184f38: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184f3c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x184f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184f40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x184f40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184f44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x184F44u;
    {
        const bool branch_taken_0x184f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F44u;
        // 0x184f48: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f44) {
            ctx->pc = 0x184FA4u;
            goto label_184fa4;
        }
    }
    ctx->pc = 0x184F4Cu;
    // 0x184f4c: 0x0  nop
    ctx->pc = 0x184f4cu;
    // NOP
label_184f50:
    // 0x184f50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f58: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x184f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184f5c: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x184f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x184f60: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x184f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x184f64: 0x0  nop
    ctx->pc = 0x184f64u;
    // NOP
    // 0x184f68: 0x0  nop
    ctx->pc = 0x184f68u;
    // NOP
    // 0x184f6c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x184f6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x184f70: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x184f74: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x184f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x184f78: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x184f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184f7c: 0x0  nop
    ctx->pc = 0x184f7cu;
    // NOP
    // 0x184f80: 0x0  nop
    ctx->pc = 0x184f80u;
    // NOP
    // 0x184f84: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x184f84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x184f88: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x184f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x184f8c: 0x0  nop
    ctx->pc = 0x184f8cu;
    // NOP
    // 0x184f90: 0x0  nop
    ctx->pc = 0x184f90u;
    // NOP
    // 0x184f94: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x184f94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x184f98: 0xe6020038  swc1        $f2, 0x38($s0)
    ctx->pc = 0x184f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x184f9c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x184f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x184fa0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_184fa4:
    // 0x184fa4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x184fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x184fa8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x184FA8u;
    {
        const bool branch_taken_0x184fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FA8u;
        // 0x184fac: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fa8) {
            ctx->pc = 0x185048u;
            goto label_185048;
        }
    }
    ctx->pc = 0x184FB0u;
    // 0x184fb0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x184fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x184fb4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x184fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x184fb8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184fbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x184fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184fc0: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x184fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x184fc4: 0x4be0026c  vsub.xyzw   $vf9, $vf0, $vf0
    ctx->pc = 0x184fc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x184fc8: 0x4be002ac  vsub.xyzw   $vf10, $vf0, $vf0
    ctx->pc = 0x184fc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x184fcc: 0x4beb033c  vmove.xyzw  $vf11, $vf0
    ctx->pc = 0x184fccu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x184fd0: 0x4b082228  vadd.x      $vf8, $vf4, $vf8
    ctx->pc = 0x184fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x184fd4: 0x4a892268  vadd.y      $vf9, $vf4, $vf9
    ctx->pc = 0x184fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x184fd8: 0x4a4a22a8  vadd.z      $vf10, $vf4, $vf10
    ctx->pc = 0x184fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x184fdc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x184fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184fe0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x184fe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x184fe4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x184fe4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x184fe8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x184fe8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x184fec: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x184fecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184ff0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x184ff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184ff4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x184ff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184ff8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x184ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x184ffc: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x184ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185000: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x185000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185004: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x185004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185008: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x185008u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18500c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18500cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185010: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x185010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185014: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x185014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185018: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x185018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x18501c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x18501cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185020: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x185020u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185024: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x185024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185028: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x185028u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x18502c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18502cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x185030: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x185030u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x185034: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x185034u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x185038: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x185038u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x18503c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18503Cu;
    {
        const bool branch_taken_0x18503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18503Cu;
        // 0x185040: 0x7e1100b0  sq          $s1, 0xB0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18503c) {
            ctx->pc = 0x185070u;
            goto label_185070;
        }
    }
    ctx->pc = 0x185044u;
    // 0x185044: 0x0  nop
    ctx->pc = 0x185044u;
    // NOP
label_185048:
    // 0x185048: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x185048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18504c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18504cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185050: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x185050u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185054: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x185054u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185058: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x185058u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18505c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x18505cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x185060: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x185060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x185064: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x185064u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x185068: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x185068u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x18506c: 0x7e1100b0  sq          $s1, 0xB0($s0)
    ctx->pc = 0x18506cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 17));
label_185070:
    // 0x185070: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x185070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185074:
    // 0x185074: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x185074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x185078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18507c: 0x3e00008  jr          $ra
    ctx->pc = 0x18507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18507Cu;
        // 0x185080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185084u;
}
