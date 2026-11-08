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

// Function: entry_0019dda0
// Address: 0x19dda0 - 0x19ddd0
void entry_0019dda0_0x19dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dda0_0x19dda0");
#endif

    ctx->pc = 0x19dda0u;

    // 0x19dda0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x19dda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19dda4: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x19dda4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19dda8: 0x4a0002ff  vnop
    ctx->pc = 0x19dda8u;
    // NOP operation, no action needed for VU0
    // 0x19ddac: 0x4a0002ff  vnop
    ctx->pc = 0x19ddacu;
    // NOP operation, no action needed for VU0
    // 0x19ddb0: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb0u;
    // NOP operation, no action needed for VU0
    // 0x19ddb4: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb4u;
    // NOP operation, no action needed for VU0
    // 0x19ddb8: 0x4a0002ff  vnop
    ctx->pc = 0x19ddb8u;
    // NOP operation, no action needed for VU0
    // 0x19ddbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x19ddbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x19ddc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x19ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x19ddc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x19ddc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x19ddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDC8u;
        // 0x19ddcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DDD0u;
}
