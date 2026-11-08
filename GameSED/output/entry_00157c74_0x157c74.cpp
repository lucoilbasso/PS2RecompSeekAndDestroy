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

// Function: entry_00157c74
// Address: 0x157c74 - 0x157cb8
void entry_00157c74_0x157c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c74_0x157c74");
#endif

    switch (ctx->pc) {
        case 0x157c7cu: goto label_157c7c;
        default: break;
    }

    ctx->pc = 0x157c74u;

    // 0x157c74: 0xc061422  jal         func_185088
    ctx->pc = 0x157C74u;
    SET_GPR_U32(ctx, 31, 0x157C7Cu);
    ctx->pc = 0x157C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C74u;
    // 0x157c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157C74u, 0x157C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C7Cu;
label_157c7c:
    // 0x157c7c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x157c80: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x157c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x157c84: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x157c84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157c88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157c8c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157c8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x157c90: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157c90u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x157c94: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157c94u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x157c98: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157c9c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157ca0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x157ca4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x157ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x157ca8: 0xfaac0000  sqc2        $vf12, 0x0($s5)
    ctx->pc = 0x157ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x157cac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CACu;
        // 0x157cb0: 0x266503c0  addiu       $a1, $s3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157CC8u;
            return;
        }
    }
    ctx->pc = 0x157CB4u;
    // 0x157cb4: 0x0  nop
    ctx->pc = 0x157cb4u;
    // NOP
    ctx->pc = 0x157cb8u;
}
