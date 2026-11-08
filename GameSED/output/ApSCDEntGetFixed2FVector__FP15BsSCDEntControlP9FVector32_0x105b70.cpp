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

// Function: ApSCDEntGetFixed2FVector__FP15BsSCDEntControlP9FVector32
// Address: 0x105b70 - 0x105bb8
void ApSCDEntGetFixed2FVector__FP15BsSCDEntControlP9FVector32_0x105b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGetFixed2FVector__FP15BsSCDEntControlP9FVector32_0x105b70");
#endif

    switch (ctx->pc) {
        case 0x105b90u: goto label_105b90;
        default: break;
    }

    ctx->pc = 0x105b70u;

    // 0x105b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105b74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105b78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x105b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105b80: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x105b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x105b84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b88: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x105B88u;
    SET_GPR_U32(ctx, 31, 0x105B90u);
    ctx->pc = 0x105B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B88u;
    // 0x105b8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x105B88u, 0x105B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B90u;
label_105b90:
    // 0x105b90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x105b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x105b94: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x105b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x105b98: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x105b98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b9c: 0x4be2113f  vitof15.xyzw $vf2, $vf2
    ctx->pc = 0x105b9cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105ba0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x105ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ba8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105bac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x105BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BB0u;
        // 0x105bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105BB8u;
}
