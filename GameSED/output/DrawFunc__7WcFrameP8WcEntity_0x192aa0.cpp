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

// Function: DrawFunc__7WcFrameP8WcEntity
// Address: 0x192aa0 - 0x193318
void DrawFunc__7WcFrameP8WcEntity_0x192aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__7WcFrameP8WcEntity_0x192aa0");
#endif

    switch (ctx->pc) {
        case 0x192af8u: goto label_192af8;
        case 0x192b00u: goto label_192b00;
        case 0x192b90u: goto label_192b90;
        case 0x192ba8u: goto label_192ba8;
        case 0x192c18u: goto label_192c18;
        case 0x192c20u: goto label_192c20;
        case 0x192c44u: goto label_192c44;
        case 0x192c78u: goto label_192c78;
        case 0x192c9cu: goto label_192c9c;
        case 0x192cf0u: goto label_192cf0;
        case 0x192d38u: goto label_192d38;
        case 0x192d68u: goto label_192d68;
        case 0x192dacu: goto label_192dac;
        case 0x192df4u: goto label_192df4;
        case 0x192e24u: goto label_192e24;
        case 0x192fc0u: goto label_192fc0;
        case 0x192fd4u: goto label_192fd4;
        case 0x192fe8u: goto label_192fe8;
        case 0x192ffcu: goto label_192ffc;
        case 0x193014u: goto label_193014;
        case 0x193044u: goto label_193044;
        case 0x193170u: goto label_193170;
        case 0x193184u: goto label_193184;
        case 0x193198u: goto label_193198;
        case 0x1931acu: goto label_1931ac;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931f4u: goto label_1931f4;
        case 0x193254u: goto label_193254;
        case 0x193260u: goto label_193260;
        case 0x193280u: goto label_193280;
        case 0x193288u: goto label_193288;
        case 0x1932b0u: goto label_1932b0;
        default: break;
    }

    ctx->pc = 0x192aa0u;

    // 0x192aa0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x192aa4: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x192aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x192aa8: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x192aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x192aac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x192aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ab0: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x192ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x192ab4: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x192ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x192ab8: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x192ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x192abc: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x192abcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192ac0: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x192ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x192ac4: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x192ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x192ac8: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x192ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x192acc: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x192accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x192ad0: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x192ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x192ad4: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x192ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x192ad8: 0x96620150  lhu         $v0, 0x150($s3)
    ctx->pc = 0x192ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x192adc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x192adcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x192ae0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x192ae4: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x192ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x192ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192AE8u;
    {
        const bool branch_taken_0x192ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AE8u;
        // 0x192aec: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae8) {
            ctx->pc = 0x192AF8u;
            goto label_192af8;
        }
    }
    ctx->pc = 0x192AF0u;
    // 0x192af0: 0xc061920  jal         func_186480
    ctx->pc = 0x192AF0u;
    SET_GPR_U32(ctx, 31, 0x192AF8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x192AF0u, 0x192AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AF8u;
label_192af8:
    // 0x192af8: 0xc061422  jal         func_185088
    ctx->pc = 0x192AF8u;
    SET_GPR_U32(ctx, 31, 0x192B00u);
    ctx->pc = 0x192AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AF8u;
    // 0x192afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x192AF8u, 0x192B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B00u;
label_192b00:
    // 0x192b00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x192b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x192b04: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x192b08: 0x266300e0  addiu       $v1, $s3, 0xE0
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x192b0c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x192b0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21E750u));
    // 0x192b10: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x192b10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21E760u));
    // 0x192b14: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x192b14u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21E770u));
    // 0x192b18: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x192b18u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21E780u));
    // 0x192b1c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x192b1cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192b20: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x192b20u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x192b24: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x192b24u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x192b28: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x192b28u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x192b2c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x192b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b30: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x192b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b34: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x192b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b38: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x192b38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x192b3c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x192b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b40: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x192b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b44: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x192b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b48: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x192b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x192b4c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x192b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b50: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x192b50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b54: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x192b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b58: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x192b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x192b5c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x192b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b60: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x192b60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b64: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x192b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192b68: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x192b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x192b6c: 0xfacc0000  sqc2        $vf12, 0x0($s6)
    ctx->pc = 0x192b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x192b70: 0xfacd0010  sqc2        $vf13, 0x10($s6)
    ctx->pc = 0x192b70u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x192b74: 0xface0020  sqc2        $vf14, 0x20($s6)
    ctx->pc = 0x192b74u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x192b78: 0xfacf0030  sqc2        $vf15, 0x30($s6)
    ctx->pc = 0x192b78u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x192b7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x192b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b80: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b84: 0x26670180  addiu       $a3, $s3, 0x180
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192b88: 0xc064dda  jal         func_193768
    ctx->pc = 0x192B88u;
    SET_GPR_U32(ctx, 31, 0x192B90u);
    ctx->pc = 0x192B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B88u;
    // 0x192b8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192B88u, 0x192B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B90u;
label_192b90:
    // 0x192b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192b9c: 0x26670190  addiu       $a3, $s3, 0x190
    ctx->pc = 0x192b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x192ba0: 0xc064dda  jal         func_193768
    ctx->pc = 0x192BA0u;
    SET_GPR_U32(ctx, 31, 0x192BA8u);
    ctx->pc = 0x192BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192BA0u;
    // 0x192ba4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192BA0u, 0x192BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192BA8u;
label_192ba8:
    // 0x192ba8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x192bac: 0x245ed650  addiu       $fp, $v0, -0x29B0
    ctx->pc = 0x192bacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x192bb0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x192bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192bb4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x192bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192bb8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x192bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x192bbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x192bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192bc0: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x192bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x192bc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x192bc8: 0x8fc80094  lw          $t0, 0x94($fp)
    ctx->pc = 0x192bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x192bcc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x192bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x192bd0: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x192bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x192bd4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x192bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x192bd8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x192bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x192bdc: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x192bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x192be0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x192be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x192be4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x192be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x192be8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192BE8u;
    {
        const bool branch_taken_0x192be8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BE8u;
        // 0x192bec: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192be8) {
            ctx->pc = 0x192C10u;
            goto label_192c10;
        }
    }
    ctx->pc = 0x192BF0u;
    // 0x192bf0: 0x8fc20098  lw          $v0, 0x98($fp)
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 152)));
    // 0x192bf4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x192bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192bf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x192bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x192bfc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x192bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x192c00: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x192c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x192c04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x192C04u;
    {
        const bool branch_taken_0x192c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C04u;
        // 0x192c08: 0xafc30098  sw          $v1, 0x98($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c04) {
            ctx->pc = 0x192C44u;
            goto label_192c44;
        }
    }
    ctx->pc = 0x192C0Cu;
    // 0x192c0c: 0x0  nop
    ctx->pc = 0x192c0cu;
    // NOP
label_192c10:
    // 0x192c10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192C10u;
    SET_GPR_U32(ctx, 31, 0x192C18u);
    ctx->pc = 0x192C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C10u;
    // 0x192c14: 0x8fc40084  lw          $a0, 0x84($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192C10u, 0x192C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C18u;
label_192c18:
    // 0x192c18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192C18u;
    SET_GPR_U32(ctx, 31, 0x192C20u);
    ctx->pc = 0x192C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C18u;
    // 0x192c1c: 0x8fc40088  lw          $a0, 0x88($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192C18u, 0x192C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C20u;
label_192c20:
    // 0x192c20: 0x8fd0008c  lw          $s0, 0x8C($fp)
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 140)));
    // 0x192c24: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x192c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x192c28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192c2c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x192c30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192c34: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x192c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
    // 0x192c38: 0xafc5008c  sw          $a1, 0x8C($fp)
    ctx->pc = 0x192c38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 5));
    // 0x192c3c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192C3Cu;
    SET_GPR_U32(ctx, 31, 0x192C44u);
    ctx->pc = 0x192C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C3Cu;
    // 0x192c40: 0xafc20080  sw          $v0, 0x80($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192C3Cu, 0x192C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C44u;
label_192c44:
    // 0x192c44: 0xafb00124  sw          $s0, 0x124($sp)
    ctx->pc = 0x192c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 16));
    // 0x192c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c4c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x192c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x192c50: 0x2410004c  addiu       $s0, $zero, 0x4C
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x192c54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x192c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c58: 0x3ab10001  xori        $s1, $s5, 0x1
    ctx->pc = 0x192c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
    // 0x192c5c: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x192c60: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192c64: 0x211b80a  movz        $s7, $s0, $s1
    ctx->pc = 0x192c64u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
    // 0x192c68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c6c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x192c70: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192C70u;
    SET_GPR_U32(ctx, 31, 0x192C78u);
    ctx->pc = 0x192C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C70u;
    // 0x192c74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192C70u, 0x192C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C78u;
label_192c78:
    // 0x192c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c7c: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192c80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192c84: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192c88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c8c: 0x26670220  addiu       $a3, $s3, 0x220
    ctx->pc = 0x192c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x192c90: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c94: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192C94u;
    SET_GPR_U32(ctx, 31, 0x192C9Cu);
    ctx->pc = 0x192C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C94u;
    // 0x192c98: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192C94u, 0x192C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C9Cu;
label_192c9c:
    // 0x192c9c: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x192ca0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ca4: 0x8e620234  lw          $v0, 0x234($s3)
    ctx->pc = 0x192ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192ca8: 0x2f1800b  movn        $s0, $s7, $s1
    ctx->pc = 0x192ca8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    // 0x192cac: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x192cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x192cb0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x192CB0u;
    {
        const bool branch_taken_0x192cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB0u;
        // 0x192cb4: 0x202b80a  movz        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cb0) {
            ctx->pc = 0x192D6Cu;
            goto label_192d6c;
        }
    }
    ctx->pc = 0x192CB8u;
    // 0x192cb8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192cbc: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192cc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192cc4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x192cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x192cc8: 0xc6610238  lwc1        $f1, 0x238($s3)
    ctx->pc = 0x192cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192cd0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x192cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192cd4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ce0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ce4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192ce8: 0xc064dda  jal         func_193768
    ctx->pc = 0x192CE8u;
    SET_GPR_U32(ctx, 31, 0x192CF0u);
    ctx->pc = 0x192CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CE8u;
    // 0x192cec: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192CE8u, 0x192CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CF0u;
label_192cf0:
    // 0x192cf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x192cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192cf4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192cf8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x192cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192cfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192d00: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x192d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x192d04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x192d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192d08: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x192d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x192d0c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x192d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192d10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192d14: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x192d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192d18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x192d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192d1c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192d20: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192d24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d2c: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x192d2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x192d30: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192D30u;
    SET_GPR_U32(ctx, 31, 0x192D38u);
    ctx->pc = 0x192D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D30u;
    // 0x192d34: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192D30u, 0x192D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D38u;
label_192d38:
    // 0x192d38: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x192d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d44: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x192d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d4c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x192d50: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x192d54: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x192d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x192d58: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192d5c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192d5cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192d60: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192D60u;
    SET_GPR_U32(ctx, 31, 0x192D68u);
    ctx->pc = 0x192D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D60u;
    // 0x192d64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192D60u, 0x192D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192d6c:
    // 0x192d6c: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192d70: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x192D70u;
    {
        const bool branch_taken_0x192d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D70u;
        // 0x192d74: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d70) {
            ctx->pc = 0x192E28u;
            goto label_192e28;
        }
    }
    ctx->pc = 0x192D78u;
    // 0x192d78: 0x26630190  addiu       $v1, $s3, 0x190
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x192d7c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192d80: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x192d80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x192d84: 0xc661023c  lwc1        $f1, 0x23C($s3)
    ctx->pc = 0x192d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192d88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192d8c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x192d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d94: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192d98: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d9c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192da4: 0xc064dda  jal         func_193768
    ctx->pc = 0x192DA4u;
    SET_GPR_U32(ctx, 31, 0x192DACu);
    ctx->pc = 0x192DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DA4u;
    // 0x192da8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192DA4u, 0x192DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DACu;
label_192dac:
    // 0x192dac: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x192dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192db0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x192db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192db4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x192db4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x192db8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x192db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x192dbc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x192dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192dc0: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x192dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x192dc4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192dc8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x192dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x192dcc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192dd0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192dd4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192dd8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192ddc: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x192de0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x192de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x192de8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x192dec: 0xc064cc6  jal         func_193318
    ctx->pc = 0x192DECu;
    SET_GPR_U32(ctx, 31, 0x192DF4u);
    ctx->pc = 0x192DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DECu;
    // 0x192df0: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x192DECu, 0x192DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DF4u;
label_192df4:
    // 0x192df4: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x192df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x192df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dfc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x192dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x192e00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x192e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e08: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x192e0c: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x192e10: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x192e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x192e14: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x192e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x192e18: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192e18u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192e1c: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x192E1Cu;
    SET_GPR_U32(ctx, 31, 0x192E24u);
    ctx->pc = 0x192E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E1Cu;
    // 0x192e20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x192E1Cu, 0x192E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E24u;
label_192e24:
    // 0x192e24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192e28:
    // 0x192e28: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x192e2c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x192E2Cu;
    {
        const bool branch_taken_0x192e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E2Cu;
        // 0x192e30: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e2c) {
            ctx->pc = 0x193048u;
            goto label_193048;
        }
    }
    ctx->pc = 0x192E34u;
    // 0x192e34: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192e38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e3c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192e40: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x192e44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192E44u;
    {
        const bool branch_taken_0x192e44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E44u;
        // 0x192e48: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e44) {
            ctx->pc = 0x192E60u;
            goto label_192e60;
        }
    }
    ctx->pc = 0x192E4Cu;
    // 0x192e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192E54u;
    {
        const bool branch_taken_0x192e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E54u;
        // 0x192e58: 0x8e620238  lw          $v0, 0x238($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e54) {
            ctx->pc = 0x192E7Cu;
            goto label_192e7c;
        }
    }
    ctx->pc = 0x192E5Cu;
    // 0x192e5c: 0x0  nop
    ctx->pc = 0x192e5cu;
    // NOP
label_192e60:
    // 0x192e60: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192e64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192e78: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x192e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
label_192e7c:
    // 0x192e7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192e80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192E80u;
    {
        const bool branch_taken_0x192e80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E80u;
        // 0x192e84: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e80) {
            ctx->pc = 0x192E98u;
            goto label_192e98;
        }
    }
    ctx->pc = 0x192E88u;
    // 0x192e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192E90u;
    {
        const bool branch_taken_0x192e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E90u;
        // 0x192e94: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e90) {
            ctx->pc = 0x192EB4u;
            goto label_192eb4;
        }
    }
    ctx->pc = 0x192E98u;
label_192e98:
    // 0x192e98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192ea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192ea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192eac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192eb0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x192eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192eb4:
    // 0x192eb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192eb8: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192ebc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192ec0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x192ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x192ec4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192ec8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192ecc: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x192ed0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192ED0u;
    {
        const bool branch_taken_0x192ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ED0u;
        // 0x192ed4: 0xc7a000d4  lwc1        $f0, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ed0) {
            ctx->pc = 0x192EE8u;
            goto label_192ee8;
        }
    }
    ctx->pc = 0x192ED8u;
    // 0x192ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192edc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192ee0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192EE0u;
    {
        const bool branch_taken_0x192ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EE0u;
        // 0x192ee4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ee0) {
            ctx->pc = 0x192F04u;
            goto label_192f04;
        }
    }
    ctx->pc = 0x192EE8u;
label_192ee8:
    // 0x192ee8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192eec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192ef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192ef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192efc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192f00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_192f04:
    // 0x192f04: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192f08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192f0c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x192f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x192f10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192f14: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192f14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192f18: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192f1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F1Cu;
    {
        const bool branch_taken_0x192f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F1Cu;
        // 0x192f20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f1c) {
            ctx->pc = 0x192F38u;
            goto label_192f38;
        }
    }
    ctx->pc = 0x192F24u;
    // 0x192f24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192F2Cu;
    {
        const bool branch_taken_0x192f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F2Cu;
        // 0x192f30: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f2c) {
            ctx->pc = 0x192F50u;
            goto label_192f50;
        }
    }
    ctx->pc = 0x192F34u;
    // 0x192f34: 0x0  nop
    ctx->pc = 0x192f34u;
    // NOP
label_192f38:
    // 0x192f38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192f4c: 0xc6600194  lwc1        $f0, 0x194($s3)
    ctx->pc = 0x192f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192f50:
    // 0x192f50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x192f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192f54: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192f5c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x192f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x192f60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192f64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192f64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192f68: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192f6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F6Cu;
    {
        const bool branch_taken_0x192f6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F6Cu;
        // 0x192f70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f6c) {
            ctx->pc = 0x192F88u;
            goto label_192f88;
        }
    }
    ctx->pc = 0x192F74u;
    // 0x192f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192F7Cu;
    {
        const bool branch_taken_0x192f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F7Cu;
        // 0x192f80: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f7c) {
            ctx->pc = 0x192FA0u;
            goto label_192fa0;
        }
    }
    ctx->pc = 0x192F84u;
    // 0x192f84: 0x0  nop
    ctx->pc = 0x192f84u;
    // NOP
label_192f88:
    // 0x192f88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192f9c: 0xc6600194  lwc1        $f0, 0x194($s3)
    ctx->pc = 0x192f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192fa0:
    // 0x192fa0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192fa4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x192fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192fb0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x192fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fb8: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FB8u;
    SET_GPR_U32(ctx, 31, 0x192FC0u);
    ctx->pc = 0x192FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FB8u;
    // 0x192fbc: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FB8u, 0x192FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FC0u;
label_192fc0:
    // 0x192fc0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192fc4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x192fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fcc: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FCCu;
    SET_GPR_U32(ctx, 31, 0x192FD4u);
    ctx->pc = 0x192FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FCCu;
    // 0x192fd0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FCCu, 0x192FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FD4u;
label_192fd4:
    // 0x192fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x192fdc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x192fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x192fe0: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FE0u;
    SET_GPR_U32(ctx, 31, 0x192FE8u);
    ctx->pc = 0x192FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FE0u;
    // 0x192fe4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FE0u, 0x192FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FE8u;
label_192fe8:
    // 0x192fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x192ff0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x192ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x192ff4: 0xc064dda  jal         func_193768
    ctx->pc = 0x192FF4u;
    SET_GPR_U32(ctx, 31, 0x192FFCu);
    ctx->pc = 0x192FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FF4u;
    // 0x192ff8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x192FF4u, 0x192FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FFCu;
label_192ffc:
    // 0x192ffc: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x192ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x193000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x193000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193008: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19300c: 0xc064cc6  jal         func_193318
    ctx->pc = 0x19300Cu;
    SET_GPR_U32(ctx, 31, 0x193014u);
    ctx->pc = 0x193010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19300Cu;
    // 0x193010: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x19300Cu, 0x193014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193014u;
label_193014:
    // 0x193014: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x193018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19301c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x19301cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193020: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x193024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193028: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19302c: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x193030: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x193034: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x193034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x193038: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x193038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x19303c: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x19303Cu;
    SET_GPR_U32(ctx, 31, 0x193044u);
    ctx->pc = 0x193040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19303Cu;
    // 0x193040: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x19303Cu, 0x193044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193044u;
label_193044:
    // 0x193044: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x193044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193048:
    // 0x193048: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x193048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x19304c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x19304Cu;
    {
        const bool branch_taken_0x19304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19304Cu;
        // 0x193050: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19304c) {
            ctx->pc = 0x1931F8u;
            goto label_1931f8;
        }
    }
    ctx->pc = 0x193054u;
    // 0x193054: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x193058: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x193058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19305c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19305cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x193060: 0xc6600190  lwc1        $f0, 0x190($s3)
    ctx->pc = 0x193060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193064: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x193064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x193068: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193068u;
    {
        const bool branch_taken_0x193068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193068u;
        // 0x19306c: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193068) {
            ctx->pc = 0x193080u;
            goto label_193080;
        }
    }
    ctx->pc = 0x193070u;
    // 0x193070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193078u;
    {
        const bool branch_taken_0x193078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193078u;
        // 0x19307c: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193078) {
            ctx->pc = 0x19309Cu;
            goto label_19309c;
        }
    }
    ctx->pc = 0x193080u;
label_193080:
    // 0x193080: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x193084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19308c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193094: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x193098: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x193098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19309c:
    // 0x19309c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1930a0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1930a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1930a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1930a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1930a8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1930a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1930ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1930acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1930b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1930b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1930b4: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x1930b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1930b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1930B8u;
    {
        const bool branch_taken_0x1930b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B8u;
        // 0x1930bc: 0xc7a000d0  lwc1        $f0, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930b8) {
            ctx->pc = 0x1930D0u;
            goto label_1930d0;
        }
    }
    ctx->pc = 0x1930C0u;
    // 0x1930c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1930c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1930c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1930c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1930c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1930C8u;
    {
        const bool branch_taken_0x1930c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930c8) {
            ctx->pc = 0x1930ECu;
            goto label_1930ec;
        }
    }
    ctx->pc = 0x1930D0u;
label_1930d0:
    // 0x1930d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1930d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1930d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1930d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1930d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1930d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1930dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1930dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1930e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1930e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1930e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1930e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1930e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1930ec:
    // 0x1930ec: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1930ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1930f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1930f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1930f4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1930f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1930f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1930f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1930fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1930fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x193100: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x193104: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193104u;
    {
        const bool branch_taken_0x193104 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x193108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193104u;
        // 0x193108: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193104) {
            ctx->pc = 0x193120u;
            goto label_193120;
        }
    }
    ctx->pc = 0x19310Cu;
    // 0x19310c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19310cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193110: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193114u;
    {
        const bool branch_taken_0x193114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193114u;
        // 0x193118: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193114) {
            ctx->pc = 0x193138u;
            goto label_193138;
        }
    }
    ctx->pc = 0x19311Cu;
    // 0x19311c: 0x0  nop
    ctx->pc = 0x19311cu;
    // NOP
label_193120:
    // 0x193120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193124: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x193128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19312c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19312cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193130: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x193134: 0xc6600194  lwc1        $f0, 0x194($s3)
    ctx->pc = 0x193134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193138:
    // 0x193138: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19313c: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x193140: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x193144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193148: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x193148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x19314c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x19314cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193150: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x193150u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x193154: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193158: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x193158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19315c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193160: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x193160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193168: 0xc064dda  jal         func_193768
    ctx->pc = 0x193168u;
    SET_GPR_U32(ctx, 31, 0x193170u);
    ctx->pc = 0x19316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193168u;
    // 0x19316c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x193168u, 0x193170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193170u;
label_193170:
    // 0x193170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193174: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x193178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x193178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19317c: 0xc064dda  jal         func_193768
    ctx->pc = 0x19317Cu;
    SET_GPR_U32(ctx, 31, 0x193184u);
    ctx->pc = 0x193180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19317Cu;
    // 0x193180: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x19317Cu, 0x193184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193184u;
label_193184:
    // 0x193184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19318c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193190: 0xc064dda  jal         func_193768
    ctx->pc = 0x193190u;
    SET_GPR_U32(ctx, 31, 0x193198u);
    ctx->pc = 0x193194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193190u;
    // 0x193194: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x193190u, 0x193198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193198u;
label_193198:
    // 0x193198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19319c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1931a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1931a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931a4: 0xc064dda  jal         func_193768
    ctx->pc = 0x1931A4u;
    SET_GPR_U32(ctx, 31, 0x1931ACu);
    ctx->pc = 0x1931A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931A4u;
    // 0x1931a8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x1931A4u, 0x1931ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931ACu;
label_1931ac:
    // 0x1931ac: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x1931b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1931b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1931b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931b8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1931b8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1931bc: 0xc064cc6  jal         func_193318
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931BCu;
    // 0x1931c0: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x1931BCu, 0x1931C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931C4u;
label_1931c4:
    // 0x1931c4: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x1931c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1931c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1931ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931d0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1931d4: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x1931d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1931d8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1931d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1931dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1931e0: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x1931e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x1931e4: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x1931e8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1931e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931ec: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 31, 0x1931F4u);
    ctx->pc = 0x1931F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931ECu;
    // 0x1931f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x1931ECu, 0x1931F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931F4u;
label_1931f4:
    // 0x1931f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1931f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1931f8:
    // 0x1931f8: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1931fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1931fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x193200: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x193204: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x193208: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19320c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x193210: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x193210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193214: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x193214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x193218: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x19321c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x193220: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x193220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x193224: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x193224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x193228: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x193228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x19322c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x19322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x193230: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x193230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x193234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x193238: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x193238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x19323c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x193240: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x193244: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x193244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x193248: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x193248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x19324c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19324Cu;
    SET_GPR_U32(ctx, 31, 0x193254u);
    ctx->pc = 0x193250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19324Cu;
    // 0x193250: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19324Cu, 0x193254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193254u;
label_193254:
    // 0x193254: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x193258: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x193258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19325c: 0x0  nop
    ctx->pc = 0x19325cu;
    // NOP
label_193260:
    // 0x193260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193264: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x193264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x193268: 0x0  nop
    ctx->pc = 0x193268u;
    // NOP
    // 0x19326c: 0x0  nop
    ctx->pc = 0x19326cu;
    // NOP
    // 0x193270: 0x0  nop
    ctx->pc = 0x193270u;
    // NOP
    // 0x193274: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x193274u;
    {
        const bool branch_taken_0x193274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193274) {
            ctx->pc = 0x193260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193260;
        }
    }
    ctx->pc = 0x19327Cu;
    // 0x19327c: 0x0  nop
    ctx->pc = 0x19327cu;
    // NOP
label_193280:
    // 0x193280: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x193280u;
    SET_GPR_U32(ctx, 31, 0x193288u);
    ctx->pc = 0x193284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193280u;
    // 0x193284: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x193280u, 0x193288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193288u;
label_193288:
    // 0x193288: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x19328c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19328Cu;
    {
        const bool branch_taken_0x19328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19328c) {
            ctx->pc = 0x193280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193280;
        }
    }
    ctx->pc = 0x193294u;
    // 0x193294: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x193298: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x193298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19329c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19329Cu;
    {
        const bool branch_taken_0x19329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19329Cu;
        // 0x1932a0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19329c) {
            ctx->pc = 0x1932B0u;
            goto label_1932b0;
        }
    }
    ctx->pc = 0x1932A4u;
    // 0x1932a4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1932a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1932A8u;
    SET_GPR_U32(ctx, 31, 0x1932B0u);
    ctx->pc = 0x1932ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932A8u;
    // 0x1932ac: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1932A8u, 0x1932B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932B0u;
label_1932b0:
    // 0x1932b0: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1932b4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1932b8: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1932bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1932bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1932c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1932c4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1932c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1932c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1932c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1932cc: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1932d0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1932d4: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1932d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1932d8: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1932d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1932dc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1932dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1932e0: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1932e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1932e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1932e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1932e8: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1932e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1932ec: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x1932ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1932f0: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x1932f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1932f4: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x1932f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1932f8: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x1932f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1932fc: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x1932fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x193300: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x193300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x193304: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x193304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x193308: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x193308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x19330c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19330cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x193310: 0x3e00008  jr          $ra
    ctx->pc = 0x193310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193310u;
        // 0x193314: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193318u;
}
