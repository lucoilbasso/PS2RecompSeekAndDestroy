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

// Function: entry_0016b320
// Address: 0x16b320 - 0x16b370
void entry_0016b320_0x16b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b320_0x16b320");
#endif

    ctx->pc = 0x16b320u;

label_16b320:
    // 0x16b320: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x16b320u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b324: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16b324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b328: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16b328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16b32c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16b32cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16b330: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16b330u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16b334: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16b334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b338: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16b338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b33c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16b33cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16b340: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16b340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16b344: 0xf8cc0000  sqc2        $vf12, 0x0($a2)
    ctx->pc = 0x16b344u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16b348: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x16b348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x16b34c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16b350: 0x0  nop
    ctx->pc = 0x16b350u;
    // NOP
    // 0x16b354: 0x0  nop
    ctx->pc = 0x16b354u;
    // NOP
    // 0x16b358: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x16B358u;
    {
        const bool branch_taken_0x16b358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B358u;
        // 0x16b35c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b358) {
            ctx->pc = 0x16B320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b320;
        }
    }
    ctx->pc = 0x16B360u;
    // 0x16b360: 0x8cb30170  lw          $s3, 0x170($a1)
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x16b364: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x16b364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b368: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b36c: 0x0  nop
    ctx->pc = 0x16b36cu;
    // NOP
    ctx->pc = 0x16b370u;
}
