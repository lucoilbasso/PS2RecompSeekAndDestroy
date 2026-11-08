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

// Function: entry_00192af8
// Address: 0x192af8 - 0x192c10
void entry_00192af8_0x192af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192af8_0x192af8");
#endif

    switch (ctx->pc) {
        case 0x192b00u: goto label_192b00;
        case 0x192b90u: goto label_192b90;
        case 0x192ba8u: goto label_192ba8;
        default: break;
    }

    ctx->pc = 0x192af8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x192C0Cu;
    // 0x192c0c: 0x0  nop
    ctx->pc = 0x192c0cu;
    // NOP
    ctx->pc = 0x192c10u;
}
