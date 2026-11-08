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

// Function: entry_00151b34
// Address: 0x151b34 - 0x151ba0
void entry_00151b34_0x151b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151b34_0x151b34");
#endif

    switch (ctx->pc) {
        case 0x151b80u: goto label_151b80;
        default: break;
    }

    ctx->pc = 0x151b34u;

    // 0x151b34: 0x26440620  addiu       $a0, $s2, 0x620
    ctx->pc = 0x151b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
    // 0x151b38: 0x26430830  addiu       $v1, $s2, 0x830
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
    // 0x151b3c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x151b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x151b40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x151b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151b44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151b48: 0x4bc11068  vadd.xyz    $vf1, $vf2, $vf1
    ctx->pc = 0x151b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b4c: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x151b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151b50: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x151b50u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151b54: 0x4bc80858  vmulx.xyz   $vf1, $vf1, $vf8x
    ctx->pc = 0x151b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b58: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x151b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151b5c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x151b5cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151b60: 0x4bc81098  vmulx.xyz   $vf2, $vf2, $vf8x
    ctx->pc = 0x151b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151b64: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x151b64u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151b68: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151b68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151b6c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x151b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151b70: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x151b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151b78: 0xc0618da  jal         func_186368
    ctx->pc = 0x151B78u;
    SET_GPR_U32(ctx, 31, 0x151B80u);
    ctx->pc = 0x151B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B78u;
    // 0x151b7c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x151B78u, 0x151B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B80u;
label_151b80:
    // 0x151b80: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x151b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x151b84: 0x8c620c08  lw          $v0, 0xC08($v1)
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x151b88: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151B88u;
    {
        const bool branch_taken_0x151b88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x151B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B88u;
        // 0x151b8c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b88) {
            ctx->pc = 0x151BA0u;
            return;
        }
    }
    ctx->pc = 0x151B90u;
    // 0x151b90: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x151b94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151B94u;
    {
        const bool branch_taken_0x151b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B94u;
        // 0x151b98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b94) {
            ctx->pc = 0x151BA4u;
            return;
        }
    }
    ctx->pc = 0x151B9Cu;
    // 0x151b9c: 0x0  nop
    ctx->pc = 0x151b9cu;
    // NOP
    ctx->pc = 0x151ba0u;
}
