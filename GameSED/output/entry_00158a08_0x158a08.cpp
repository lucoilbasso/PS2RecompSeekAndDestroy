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

// Function: entry_00158a08
// Address: 0x158a08 - 0x158a80
void entry_00158a08_0x158a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158a08_0x158a08");
#endif

    switch (ctx->pc) {
        case 0x158a78u: goto label_158a78;
        default: break;
    }

    ctx->pc = 0x158a08u;

    // 0x158a08: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x158a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x158a0c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x158a0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158a10: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158a10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158a14: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158a14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158a18: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158a18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158a1c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x158a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a20: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x158a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a24: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x158a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x158a28: 0xf8680000  sqc2        $vf8, 0x0($v1)
    ctx->pc = 0x158a28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x158a2c: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x158a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x158a30: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158a30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158a34: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158a38: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158a38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158a3c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158a3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158a40: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x158a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a44: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x158a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a48: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x158a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x158a4c: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x158a50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x158a54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A54u;
        // 0x158a58: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158A80u;
            return;
        }
    }
    ctx->pc = 0x158A5Cu;
    // 0x158a5c: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158a60: 0xae02047c  sw          $v0, 0x47C($s0)
    ctx->pc = 0x158a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 2));
    // 0x158a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a70: 0xc056314  jal         func_158C50
    ctx->pc = 0x158A70u;
    SET_GPR_U32(ctx, 31, 0x158A78u);
    ctx->pc = 0x158A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A70u;
    // 0x158a74: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158A70u, 0x158A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A78u;
label_158a78:
    // 0x158a78: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x158A78u;
    {
        const bool branch_taken_0x158a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A78u;
        // 0x158a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a78) {
            ctx->pc = 0x158B30u;
            return;
        }
    }
    ctx->pc = 0x158A80u;
}
