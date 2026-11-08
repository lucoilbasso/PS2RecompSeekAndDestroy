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

// Function: entry_00163788
// Address: 0x163788 - 0x16381c
void entry_00163788_0x163788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163788_0x163788");
#endif

    switch (ctx->pc) {
        case 0x1637f4u: goto label_1637f4;
        default: break;
    }

    ctx->pc = 0x163788u;

    // 0x163788: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16378c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16378cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x163790: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x163794: 0x24c60170  addiu       $a2, $a2, 0x170
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
    // 0x163798: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16379c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1637a0: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1637a4: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1637a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1637a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1637a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1637ac: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1637acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1637b0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1637b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1637b4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1637b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1637b8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1637b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637bc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1637bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637c0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1637c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637c4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1637c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1637c8: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1637c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1637cc: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x1637d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1637d4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1637d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1637dc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1637dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1637e0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1637e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1637e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1637e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1637e8: 0x265101f0  addiu       $s1, $s2, 0x1F0
    ctx->pc = 0x1637e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x1637ec: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1637ECu;
    SET_GPR_U32(ctx, 31, 0x1637F4u);
    ctx->pc = 0x1637F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637ECu;
    // 0x1637f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1637ECu, 0x1637F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637F4u;
label_1637f4:
    // 0x1637f4: 0x8e430204  lw          $v1, 0x204($s2)
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x1637f8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x1637f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1637fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163800: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x163800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163804: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x163804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163808: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x163808u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x16380c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16380cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163810: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163810u;
    {
        const bool branch_taken_0x163810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163810u;
        // 0x163814: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163810) {
            ctx->pc = 0x16381Cu;
            return;
        }
    }
    ctx->pc = 0x163818u;
    // 0x163818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16381cu;
}
