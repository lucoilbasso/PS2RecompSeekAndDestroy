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

// Function: DrawFunc__9ApcShadowP8WcEntity
// Address: 0x16b6c8 - 0x16bce0
void DrawFunc__9ApcShadowP8WcEntity_0x16b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9ApcShadowP8WcEntity_0x16b6c8");
#endif

    switch (ctx->pc) {
        case 0x16b708u: goto label_16b708;
        case 0x16b710u: goto label_16b710;
        case 0x16b850u: goto label_16b850;
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b900u: goto label_16b900;
        case 0x16b908u: goto label_16b908;
        case 0x16b92cu: goto label_16b92c;
        case 0x16ba60u: goto label_16ba60;
        case 0x16bbb8u: goto label_16bbb8;
        case 0x16bbc0u: goto label_16bbc0;
        case 0x16bbe0u: goto label_16bbe0;
        case 0x16bbe8u: goto label_16bbe8;
        case 0x16bc10u: goto label_16bc10;
        case 0x16bc60u: goto label_16bc60;
        case 0x16bc88u: goto label_16bc88;
        case 0x16bc90u: goto label_16bc90;
        case 0x16bca0u: goto label_16bca0;
        default: break;
    }

    ctx->pc = 0x16b6c8u;

    // 0x16b6c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x16b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x16b6cc: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x16b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x16b6d0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x16b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x16b6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6d8: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x16b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x16b6dc: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x16b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x16b6e0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16b6e4: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x16b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x16b6e8: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x16b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x16b6ec: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x16b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x16b6f0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16b6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16b6f4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16b6f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B6F8u;
    {
        const bool branch_taken_0x16b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f8) {
            ctx->pc = 0x16B708u;
            goto label_16b708;
        }
    }
    ctx->pc = 0x16B700u;
    // 0x16b700: 0xc061920  jal         func_186480
    ctx->pc = 0x16B700u;
    SET_GPR_U32(ctx, 31, 0x16B708u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16B700u, 0x16B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B708u;
label_16b708:
    // 0x16b708: 0xc061422  jal         func_185088
    ctx->pc = 0x16B708u;
    SET_GPR_U32(ctx, 31, 0x16B710u);
    ctx->pc = 0x16B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B708u;
    // 0x16b70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16B708u, 0x16B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B710u;
label_16b710:
    // 0x16b710: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x16b714: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x16b718: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x16b718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b71c: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x16b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x16b720: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16b720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b724: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16b724u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x16b728: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x16b728u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x16b72c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x16b72cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x16b730: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x16b730u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x16b734: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x16b734u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b738: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x16b738u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16b73c: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x16b73cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16b740: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x16b740u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x16b744: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b748: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b748u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b74c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b74cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b750: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b754: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x16b754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b758: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x16b758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b75c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x16b75cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b760: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x16b760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x16b764: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x16b764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b768: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x16b768u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b76c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x16b76cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b770: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x16b770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x16b774: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x16b774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b778: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x16b778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b77c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x16b77cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b780: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x16b780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x16b784: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x16b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b788: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x16b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x16b78c: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x16b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x16b790: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x16b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x16b794: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x16b798: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x16b79c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b79cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x16b7a0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16b7a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x16b7a4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16b7a4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x16b7a8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16b7a8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x16b7ac: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x16b7acu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b7b0: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x16b7b0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16b7b4: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x16b7b4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16b7b8: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x16b7b8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x16b7bc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b7bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7c0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b7c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7c4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b7c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7c8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b7c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b7cc: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x16b7ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7d0: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x16b7d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7d4: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x16b7d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7d8: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x16b7d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x16b7dc: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x16b7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7e0: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x16b7e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7e4: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x16b7e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7e8: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x16b7e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x16b7ec: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x16b7ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7f0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x16b7f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7f4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x16b7f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b7f8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x16b7f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x16b7fc: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x16b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b800: 0xf8cd0010  sqc2        $vf13, 0x10($a2)
    ctx->pc = 0x16b800u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x16b804: 0xf8ce0020  sqc2        $vf14, 0x20($a2)
    ctx->pc = 0x16b804u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x16b808: 0xf8cf0030  sqc2        $vf15, 0x30($a2)
    ctx->pc = 0x16b808u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x16b80c: 0x9629015a  lhu         $t1, 0x15A($s1)
    ctx->pc = 0x16b80cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16b810: 0x8e270174  lw          $a3, 0x174($s1)
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x16b814: 0x8e250168  lw          $a1, 0x168($s1)
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x16b818: 0x8e2401d8  lw          $a0, 0x1D8($s1)
    ctx->pc = 0x16b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x16b81c: 0xd9440000  lqc2        $vf4, 0x0($t2)
    ctx->pc = 0x16b81cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x16b820: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x16b820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x16b824: 0xd9460020  lqc2        $vf6, 0x20($t2)
    ctx->pc = 0x16b824u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x16b828: 0xd9470030  lqc2        $vf7, 0x30($t2)
    ctx->pc = 0x16b828u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x16b82c: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x16b82cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16b830: 0xd8d50010  lqc2        $vf21, 0x10($a2)
    ctx->pc = 0x16b830u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x16b834: 0xd8d60020  lqc2        $vf22, 0x20($a2)
    ctx->pc = 0x16b834u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x16b838: 0xd8d70030  lqc2        $vf23, 0x30($a2)
    ctx->pc = 0x16b838u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x16b83c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x16b83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b840: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x16b840u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b844: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x16b844u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b848: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x16b848u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b84c: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x16b84cu;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
label_16b850:
    // 0x16b850: 0xd9a80000  lqc2        $vf8, 0x0($t5)
    ctx->pc = 0x16b850u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x16b854: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b858: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b85c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b860: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b864: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x16b864u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x16b868: 0x4a2c033c  vmove.w     $vf12, $vf0
    ctx->pc = 0x16b868u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16b86c: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x16b86cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b870: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x16b870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b874: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x16b874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b878: 0x4be8bb4b  vmaddw.xyzw $vf13, $vf23, $vf8w
    ctx->pc = 0x16b878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x16b87c: 0x4a0003bf  vwaitq
    ctx->pc = 0x16b87cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x16b880: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x16b880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b884: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x16b884u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x16b888: 0x4bcc617d  vftoi4.xyz  $vf12, $vf12
    ctx->pc = 0x16b888u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b88c: 0x4a0002ff  vnop
    ctx->pc = 0x16b88cu;
    // NOP operation, no action needed for VU0
    // 0x16b890: 0x4a0002ff  vnop
    ctx->pc = 0x16b890u;
    // NOP operation, no action needed for VU0
    // 0x16b894: 0x4a0002ff  vnop
    ctx->pc = 0x16b894u;
    // NOP operation, no action needed for VU0
    // 0x16b898: 0xf98c0000  sqc2        $vf12, 0x0($t4)
    ctx->pc = 0x16b898u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b89c: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x16b89cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x16b8a0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x16b8a4: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x16b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16b8a8: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x16b8a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x16b8ac: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x16b8acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x16b8b0: 0x21ce0001  addi        $t6, $t6, 0x1
    ctx->pc = 0x16b8b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x16b8b4: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x16b8b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x16b8b8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x16B8B8u;
    {
        const bool branch_taken_0x16b8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b8b8) {
            ctx->pc = 0x16B850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b850;
        }
    }
    ctx->pc = 0x16B8C0u;
    // 0x16b8c0: 0x0  nop
    ctx->pc = 0x16b8c0u;
    // NOP
    // 0x16b8c4: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x16b8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x16b8c8: 0x2512d650  addiu       $s2, $t0, -0x29B0
    ctx->pc = 0x16b8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956624));
    // 0x16b8cc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x16b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x16b8d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B8D0u;
    {
        const bool branch_taken_0x16b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8D0u;
        // 0x16b8d4: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8d0) {
            ctx->pc = 0x16B8F8u;
            goto label_16b8f8;
        }
    }
    ctx->pc = 0x16B8D8u;
    // 0x16b8d8: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x16b8dc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x16b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b8e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x16b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16b8e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x16b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x16b8e8: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x16b8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16b8ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16B8ECu;
    {
        const bool branch_taken_0x16b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8ECu;
        // 0x16b8f0: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8ec) {
            ctx->pc = 0x16B92Cu;
            goto label_16b92c;
        }
    }
    ctx->pc = 0x16B8F4u;
    // 0x16b8f4: 0x0  nop
    ctx->pc = 0x16b8f4u;
    // NOP
label_16b8f8:
    // 0x16b8f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B8F8u;
    SET_GPR_U32(ctx, 31, 0x16B900u);
    ctx->pc = 0x16B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8F8u;
    // 0x16b8fc: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B8F8u, 0x16B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B900u;
label_16b900:
    // 0x16b900: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16B900u;
    SET_GPR_U32(ctx, 31, 0x16B908u);
    ctx->pc = 0x16B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B900u;
    // 0x16b904: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16B900u, 0x16B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B908u;
label_16b908:
    // 0x16b908: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x16b90c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x16b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x16b910: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16b914: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x16b914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16b918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16b918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16b91c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x16b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x16b920: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x16b920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x16b924: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16B924u;
    SET_GPR_U32(ctx, 31, 0x16B92Cu);
    ctx->pc = 0x16B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B924u;
    // 0x16b928: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16B924u, 0x16B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B92Cu;
label_16b92c:
    // 0x16b92c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x16b92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b930: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x16b930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x16b934: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x16b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16b938: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x16b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x16b93c: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x16b940: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b944: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x16b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16b948: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x16b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16b94c: 0xde280178  ld          $t0, 0x178($s1)
    ctx->pc = 0x16b94cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x16b950: 0x24890070  addiu       $t1, $a0, 0x70
    ctx->pc = 0x16b950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x16b954: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x16b954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x16b958: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x16b958u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b95c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x16b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x16b960: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x16b960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16b964: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x16b964u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x16b968: 0x1aa1823  subu        $v1, $t5, $t2
    ctx->pc = 0x16b968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x16b96c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x16b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x16b970: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x16b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b974: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x16b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x16b978: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x16b978u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x16b97c: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x16b980: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x16b980u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x16b984: 0x3c0c0005  lui         $t4, 0x5
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)5 << 16));
    // 0x16b988: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x16b98c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x16b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x16b990: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x16b990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b994: 0xde250160  ld          $a1, 0x160($s1)
    ctx->pc = 0x16b994u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x16b998: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x16b998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16b99c: 0xfcc90008  sd          $t1, 0x8($a2)
    ctx->pc = 0x16b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 9));
    // 0x16b9a0: 0x24890060  addiu       $t1, $a0, 0x60
    ctx->pc = 0x16b9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x16b9a4: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x16b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x16b9a8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x16b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x16b9ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b9b0: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x16b9b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16b9b8: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x16b9b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x16b9bc: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x16b9c0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x16b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x16b9c4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x16b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x16b9c8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x16b9c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b9cc: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x16b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x16b9d0: 0x240604e2  addiu       $a2, $zero, 0x4E2
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x16b9d4: 0xfd2c0000  sd          $t4, 0x0($t1)
    ctx->pc = 0x16b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 12));
    // 0x16b9d8: 0x24890080  addiu       $t1, $a0, 0x80
    ctx->pc = 0x16b9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x16b9dc: 0xfd4b0008  sd          $t3, 0x8($t2)
    ctx->pc = 0x16b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 11));
    // 0x16b9e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16b9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b9e4: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x16b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x16b9e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x16b9ec: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x16b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x16b9f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x16b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16b9f4: 0x24190003  addiu       $t9, $zero, 0x3
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b9f8: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16b9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16b9fc: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x16b9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x16ba00: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x16ba00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x16ba04: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x16ba04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x16ba08: 0x843fc  dsll32      $t0, $t0, 15
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 15));
    // 0x16ba0c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x16ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16ba10: 0x8e270174  lw          $a3, 0x174($s1)
    ctx->pc = 0x16ba10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x16ba14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16ba18: 0x8eae01d8  lw          $t6, 0x1D8($s5)
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 472)));
    // 0x16ba1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x16ba20: 0x8e2c016c  lw          $t4, 0x16C($s1)
    ctx->pc = 0x16ba20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x16ba24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16ba28: 0x8e2a0170  lw          $t2, 0x170($s1)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x16ba2c: 0xfda60008  sd          $a2, 0x8($t5)
    ctx->pc = 0x16ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 6));
    // 0x16ba30: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x16ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    // 0x16ba34: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16ba34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16ba38: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x16BA38u;
    {
        const bool branch_taken_0x16ba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA38u;
        // 0x16ba3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba38) {
            ctx->pc = 0x16BB5Cu;
            goto label_16bb5c;
        }
    }
    ctx->pc = 0x16BA40u;
    // 0x16ba40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16ba44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16ba44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ba48: 0x262f0150  addiu       $t7, $s1, 0x150
    ctx->pc = 0x16ba48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x16ba4c: 0x27b80080  addiu       $t8, $sp, 0x80
    ctx->pc = 0x16ba4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16ba50: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16ba50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ba54: 0x24101068  addiu       $s0, $zero, 0x1068
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4200));
    // 0x16ba58: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x16ba5c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x16ba5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_16ba60:
    // 0x16ba60: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x16ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ba64: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x16ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ba68: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x16ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x16ba6c: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x16ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ba70: 0xe5230008  swc1        $f3, 0x8($t1)
    ctx->pc = 0x16ba70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x16ba74: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x16ba74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x16ba78: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x16ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x16ba7c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x16ba7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16ba80: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16ba80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16ba84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16ba84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16ba88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16ba88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16ba8c: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x16ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16ba90: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x16ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x16ba94: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x16ba98: 0x91e50007  lbu         $a1, 0x7($t7)
    ctx->pc = 0x16ba98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
    // 0x16ba9c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x16ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baa0: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x16baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x16baa4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x16baa8: 0x93a20083  lbu         $v0, 0x83($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 131)));
    // 0x16baac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x16baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bab0: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x16bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x16bab4: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x16bab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x16bab8: 0x8f030000  lw          $v1, 0x0($t8)
    ctx->pc = 0x16bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x16babc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x16babcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x16bac0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16bac4: 0xfc940008  sd          $s4, 0x8($a0)
    ctx->pc = 0x16bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 20));
    // 0x16bac8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x16bac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16bacc: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x16baccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x16bad0: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x16bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x16bad4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x16bad8: 0x500019  multu       $v0, $s0
    ctx->pc = 0x16bad8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16badc: 0x1812  mflo        $v1
    ctx->pc = 0x16badcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x16bae0: 0x1010  mfhi        $v0
    ctx->pc = 0x16bae0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16bae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16bae8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16baec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x16baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x16baf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16baf4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x16baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x16baf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x16baf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x16bafc: 0x704d10e8  pminw       $v0, $v0, $t5
    ctx->pc = 0x16bafcu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 13)));
    // 0x16bb00: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x16bb04: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x16bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x16bb08: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x16bb0c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x16bb10: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x16bb14: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x16bb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x16bb18: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x16bb18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x16bb1c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16bb20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BB20u;
    {
        const bool branch_taken_0x16bb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB20u;
        // 0x16bb24: 0x1791824  and         $v1, $t3, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb20) {
            ctx->pc = 0x16BB40u;
            goto label_16bb40;
        }
    }
    ctx->pc = 0x16BB28u;
    // 0x16bb28: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x16bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x16bb2c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BB2Cu;
    {
        const bool branch_taken_0x16bb2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB2Cu;
        // 0x16bb30: 0x356b0001  ori         $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb2c) {
            ctx->pc = 0x16BB48u;
            goto label_16bb48;
        }
    }
    ctx->pc = 0x16BB34u;
    // 0x16bb34: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x16BB34u;
    {
        const bool branch_taken_0x16bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB34u;
        // 0x16bb38: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb34) {
            ctx->pc = 0x16BC50u;
            goto label_16bc50;
        }
    }
    ctx->pc = 0x16BB3Cu;
    // 0x16bb3c: 0x0  nop
    ctx->pc = 0x16bb3cu;
    // NOP
label_16bb40:
    // 0x16bb40: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16BB40u;
    {
        const bool branch_taken_0x16bb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bb40) {
            ctx->pc = 0x16BB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BB40u;
            // 0x16bb44: 0xad28000c  sw          $t0, 0xC($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BB48u;
            goto label_16bb48;
        }
    }
    ctx->pc = 0x16BB48u;
label_16bb48:
    // 0x16bb48: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16bb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16bb4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16bb50: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16bb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16bb54: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x16BB54u;
    {
        const bool branch_taken_0x16bb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB54u;
        // 0x16bb58: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb54) {
            ctx->pc = 0x16BA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ba60;
        }
    }
    ctx->pc = 0x16BB5Cu;
label_16bb5c:
    // 0x16bb5c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x16bb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb60: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x16bb64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bb68: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x16bb6c: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x16bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x16bb70: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x16bb74: 0x1251823  subu        $v1, $t1, $a1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x16bb78: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x16bb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb7c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x16bb80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16bb84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x16bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x16bb88: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16bb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16bb8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x16bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x16bb90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16bb94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x16bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x16bb98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bb9c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x16bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x16bba0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16bba4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bba8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x16bbac: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x16bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x16bbb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16BBB0u;
    SET_GPR_U32(ctx, 31, 0x16BBB8u);
    ctx->pc = 0x16BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBB0u;
    // 0x16bbb4: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16BBB0u, 0x16BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBB8u;
label_16bbb8:
    // 0x16bbb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x16bbbc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x16bbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_16bbc0:
    // 0x16bbc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bbc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16bbc8: 0x0  nop
    ctx->pc = 0x16bbc8u;
    // NOP
    // 0x16bbcc: 0x0  nop
    ctx->pc = 0x16bbccu;
    // NOP
    // 0x16bbd0: 0x0  nop
    ctx->pc = 0x16bbd0u;
    // NOP
    // 0x16bbd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16BBD4u;
    {
        const bool branch_taken_0x16bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bbd4) {
            ctx->pc = 0x16BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbc0;
        }
    }
    ctx->pc = 0x16BBDCu;
    // 0x16bbdc: 0x0  nop
    ctx->pc = 0x16bbdcu;
    // NOP
label_16bbe0:
    // 0x16bbe0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x16BBE0u;
    SET_GPR_U32(ctx, 31, 0x16BBE8u);
    ctx->pc = 0x16BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBE0u;
    // 0x16bbe4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x16BBE0u, 0x16BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBE8u;
label_16bbe8:
    // 0x16bbe8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x16bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x16bbec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x16BBECu;
    {
        const bool branch_taken_0x16bbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBECu;
        // 0x16bbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbec) {
            ctx->pc = 0x16BBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbe0;
        }
    }
    ctx->pc = 0x16BBF4u;
    // 0x16bbf4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x16bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x16bbf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16bbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16bbfc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BBFCu;
    {
        const bool branch_taken_0x16bbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBFCu;
        // 0x16bc00: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbfc) {
            ctx->pc = 0x16BC10u;
            goto label_16bc10;
        }
    }
    ctx->pc = 0x16BC04u;
    // 0x16bc04: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x16bc08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC08u;
    SET_GPR_U32(ctx, 31, 0x16BC10u);
    ctx->pc = 0x16BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC08u;
    // 0x16bc0c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC08u, 0x16BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC10u;
label_16bc10:
    // 0x16bc10: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x16bc14: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x16bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x16bc18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16bc1c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x16bc20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bc24: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x16bc28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16bc2c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16bc30: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x16bc34: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16bc38: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x16bc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x16bc3c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x16bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x16bc40: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x16bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x16bc44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x16BC44u;
    {
        const bool branch_taken_0x16bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC44u;
        // 0x16bc48: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc44) {
            ctx->pc = 0x16BCBCu;
            goto label_16bcbc;
        }
    }
    ctx->pc = 0x16BC4Cu;
    // 0x16bc4c: 0x0  nop
    ctx->pc = 0x16bc4cu;
    // NOP
label_16bc50:
    // 0x16bc50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16BC50u;
    {
        const bool branch_taken_0x16bc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC50u;
        // 0x16bc54: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc50) {
            ctx->pc = 0x16BC98u;
            goto label_16bc98;
        }
    }
    ctx->pc = 0x16BC58u;
    // 0x16bc58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x16BC58u;
    SET_GPR_U32(ctx, 31, 0x16BC60u);
    ctx->pc = 0x16BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC58u;
    // 0x16bc5c: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16BC58u, 0x16BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC60u;
label_16bc60:
    // 0x16bc60: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x16bc64: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16bc68: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x16bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x16bc6c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x16bc6cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x16bc70: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x16bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x16bc74: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x16bc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x16bc78: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x16bc7c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x16bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x16bc80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC80u;
    SET_GPR_U32(ctx, 31, 0x16BC88u);
    ctx->pc = 0x16BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC80u;
    // 0x16bc84: 0xae53008c  sw          $s3, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC80u, 0x16BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC88u;
label_16bc88:
    // 0x16bc88: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC88u;
    SET_GPR_U32(ctx, 31, 0x16BC90u);
    ctx->pc = 0x16BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC88u;
    // 0x16bc8c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC88u, 0x16BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC90u;
label_16bc90:
    // 0x16bc90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16BC90u;
    {
        const bool branch_taken_0x16bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC90u;
        // 0x16bc94: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc90) {
            ctx->pc = 0x16BCC0u;
            goto label_16bcc0;
        }
    }
    ctx->pc = 0x16BC98u;
label_16bc98:
    // 0x16bc98: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x16bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x16bc9c: 0x0  nop
    ctx->pc = 0x16bc9cu;
    // NOP
label_16bca0:
    // 0x16bca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bca4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16bca8: 0x0  nop
    ctx->pc = 0x16bca8u;
    // NOP
    // 0x16bcac: 0x0  nop
    ctx->pc = 0x16bcacu;
    // NOP
    // 0x16bcb0: 0x0  nop
    ctx->pc = 0x16bcb0u;
    // NOP
    // 0x16bcb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16BCB4u;
    {
        const bool branch_taken_0x16bcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bcb4) {
            ctx->pc = 0x16BCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bca0;
        }
    }
    ctx->pc = 0x16BCBCu;
label_16bcbc:
    // 0x16bcbc: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x16bcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_16bcc0:
    // 0x16bcc0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x16bcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bcc4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16bcc8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x16bcc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16bccc: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x16bcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcd0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x16bcd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16bcd4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16bcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCD8u;
        // 0x16bcdc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCE0u;
}
