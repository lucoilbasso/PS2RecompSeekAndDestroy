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

// Function: $L2
// Address: 0x1d0a10 - 0x1d0a34
void ps2__L2_0x1d0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x1d0a10");
#endif

    ctx->pc = 0x1d0a10u;

    // 0x1d0a10: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x1d0a10u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1d0a14: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1d0a14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d0a18: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x1d0a18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1d0a1c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x1d0a1cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1d0a20: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d0a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d0a24: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A24u;
    {
        const bool branch_taken_0x1d0a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A24u;
        // 0x1d0a28: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a24) {
            ctx->pc = 0x1D0A34u;
            return;
        }
    }
    ctx->pc = 0x1D0A2Cu;
    // 0x1d0a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A2Cu;
        // 0x1d0a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A34u;
}
