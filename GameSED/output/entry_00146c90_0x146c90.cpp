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

// Function: entry_00146c90
// Address: 0x146c90 - 0x146cf8
void entry_00146c90_0x146c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146c90_0x146c90");
#endif

    ctx->pc = 0x146c90u;

label_146c90:
    // 0x146c90: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x146c90u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146c94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x146c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146c98: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x146c98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x146c9c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x146c9cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x146ca0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x146ca0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x146ca4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x146ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146ca8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x146ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146cac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x146cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x146cb0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x146cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x146cb4: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x146cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x146cb8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x146cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146cbc: 0x0  nop
    ctx->pc = 0x146cbcu;
    // NOP
    // 0x146cc0: 0x0  nop
    ctx->pc = 0x146cc0u;
    // NOP
    // 0x146cc4: 0x0  nop
    ctx->pc = 0x146cc4u;
    // NOP
    // 0x146cc8: 0x481fff1  bgez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x146CC8u;
    {
        const bool branch_taken_0x146cc8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x146CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CC8u;
        // 0x146ccc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cc8) {
            ctx->pc = 0x146C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c90;
        }
    }
    ctx->pc = 0x146CD0u;
    // 0x146cd0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x146cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x146cd4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x146cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cd8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x146cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x146cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x146cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146CE0u;
    {
        const bool branch_taken_0x146ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CE0u;
        // 0x146ce4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ce0) {
            ctx->pc = 0x146CF8u;
            return;
        }
    }
    ctx->pc = 0x146CE8u;
    // 0x146ce8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cec: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146cf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146CF0u;
    {
        const bool branch_taken_0x146cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CF0u;
        // 0x146cf4: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cf0) {
            ctx->pc = 0x146D04u;
            return;
        }
    }
    ctx->pc = 0x146CF8u;
}
