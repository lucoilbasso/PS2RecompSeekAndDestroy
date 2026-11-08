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

// Function: entry_00112184
// Address: 0x112184 - 0x1121e0
void entry_00112184_0x112184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112184_0x112184");
#endif

    switch (ctx->pc) {
        case 0x11218cu: goto label_11218c;
        default: break;
    }

    ctx->pc = 0x112184u;

    // 0x112184: 0xc061422  jal         func_185088
    ctx->pc = 0x112184u;
    SET_GPR_U32(ctx, 31, 0x11218Cu);
    ctx->pc = 0x112188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112184u;
    // 0x112188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x112184u, 0x11218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11218Cu;
label_11218c:
    // 0x11218c: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x112190: 0x26e200a0  addiu       $v0, $s7, 0xA0
    ctx->pc = 0x112190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
    // 0x112194: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x112194u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112198: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x112198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11219c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x11219cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1121a0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1121a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1121a4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1121a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1121a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1121a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1121acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1121b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1121b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1121b8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1121b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1121bc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1121bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1121c0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1121c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1121c4: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x1121c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1121c8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1121c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1121cc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1121ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1121d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x1121E0u;
            return;
        }
    }
    ctx->pc = 0x1121D8u;
    // 0x1121d8: 0xc061920  jal         func_186480
    ctx->pc = 0x1121D8u;
    SET_GPR_U32(ctx, 31, 0x1121E0u);
    ctx->pc = 0x1121DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121D8u;
    // 0x1121dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1121D8u, 0x1121E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E0u;
}
