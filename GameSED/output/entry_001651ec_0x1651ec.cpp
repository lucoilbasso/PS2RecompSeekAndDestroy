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

// Function: entry_001651ec
// Address: 0x1651ec - 0x165268
void entry_001651ec_0x1651ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001651ec_0x1651ec");
#endif

    ctx->pc = 0x1651ecu;

    // 0x1651ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1651ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1651f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1651f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1651f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1651f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1651f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651fc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1651fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x165200: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x165200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x165204: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x165204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x165208: 0x8e221218  lw          $v0, 0x1218($s1)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4632)));
    // 0x16520c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16520Cu;
    {
        const bool branch_taken_0x16520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16520Cu;
        // 0x165210: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16520c) {
            ctx->pc = 0x165268u;
            return;
        }
    }
    ctx->pc = 0x165214u;
    // 0x165214: 0x8e30121c  lw          $s0, 0x121C($s1)
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
    // 0x165218: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16521c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x165220: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x165220u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165224: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x165224u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165228: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x165228u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16522c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16522cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x165230: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x165230u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x165234: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x165234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x165238: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x165238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16523c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16523cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x165240: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x165240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x165244: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x165244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x165248: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x165248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16524c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165250: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x165250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x165254: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x165254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x165258: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x165258u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16525c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x165260: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x165260u;
    SET_GPR_U32(ctx, 31, 0x165268u);
    ctx->pc = 0x165264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165260u;
    // 0x165264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x165260u, 0x165268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165268u;
}
