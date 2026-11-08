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

// Function: entry_0013a12c
// Address: 0x13a12c - 0x13a190
void entry_0013a12c_0x13a12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a12c_0x13a12c");
#endif

    switch (ctx->pc) {
        case 0x13a134u: goto label_13a134;
        default: break;
    }

    ctx->pc = 0x13a12cu;

    // 0x13a12c: 0xc061422  jal         func_185088
    ctx->pc = 0x13A12Cu;
    SET_GPR_U32(ctx, 31, 0x13A134u);
    ctx->pc = 0x13A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A12Cu;
    // 0x13a130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13A12Cu, 0x13A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A134u;
label_13a134:
    // 0x13a134: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x13a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x13a138: 0x268300a0  addiu       $v1, $s4, 0xA0
    ctx->pc = 0x13a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x13a13c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x13a13cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a140: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13a140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a144: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x13a144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a148: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x13a148u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a14c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x13a14cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a150: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13a150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a154: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13a154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a158: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13a158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a15c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13a15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13a160: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x13a160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13a164: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a16c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A16Cu;
    {
        const bool branch_taken_0x13a16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A16Cu;
        // 0x13a170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a16c) {
            ctx->pc = 0x13A190u;
            return;
        }
    }
    ctx->pc = 0x13A174u;
    // 0x13a174: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13a178: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a17c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x13a17cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a180: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a184: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a188: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13A188u;
    {
        const bool branch_taken_0x13a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A188u;
        // 0x13a18c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a188) {
            ctx->pc = 0x13A2B8u;
            return;
        }
    }
    ctx->pc = 0x13A190u;
}
