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

// Function: _SetHeart__7WcActorP9FVector32
// Address: 0x1e12a0 - 0x1e12f0
void ps2__SetHeart__7WcActorP9FVector32_0x1e12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetHeart__7WcActorP9FVector32_0x1e12a0");
#endif

    ctx->pc = 0x1e12a0u;

    // 0x1e12a0: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x1e12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1e12a4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1e12a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e12a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e12a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1e12ac: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x1e12acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1e12b0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e12b4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1e12b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1e12b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e12b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e12bc: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x1e12bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e12c0: 0x4a0002ff  vnop
    ctx->pc = 0x1e12c0u;
    // NOP operation, no action needed for VU0
    // 0x1e12c4: 0x4a0002ff  vnop
    ctx->pc = 0x1e12c4u;
    // NOP operation, no action needed for VU0
    // 0x1e12c8: 0x4a0002ff  vnop
    ctx->pc = 0x1e12c8u;
    // NOP operation, no action needed for VU0
    // 0x1e12cc: 0x4a0002ff  vnop
    ctx->pc = 0x1e12ccu;
    // NOP operation, no action needed for VU0
    // 0x1e12d0: 0x4a0002ff  vnop
    ctx->pc = 0x1e12d0u;
    // NOP operation, no action needed for VU0
    // 0x1e12d4: 0x48458800  cfc2.ni     $a1, $vi17
    ctx->pc = 0x1e12d4u;
    SET_GPR_U32(ctx, 5, ctx->vu0_mac_flags);
    // 0x1e12d8: 0x30a5000e  andi        $a1, $a1, 0xE
    ctx->pc = 0x1e12d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)14);
    // 0x1e12dc: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x1e12dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x1e12e0: 0x38a5000e  xori        $a1, $a1, 0xE
    ctx->pc = 0x1e12e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)14);
    // 0x1e12e4: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x1e12e4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1e12e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E12E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E8u;
        // 0x1e12ec: 0xac860084  sw          $a2, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E12E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E12F0u;
}
