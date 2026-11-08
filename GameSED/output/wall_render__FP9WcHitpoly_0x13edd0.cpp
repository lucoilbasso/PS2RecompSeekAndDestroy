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

// Function: wall_render__FP9WcHitpoly
// Address: 0x13edd0 - 0x13edf4
void wall_render__FP9WcHitpoly_0x13edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("wall_render__FP9WcHitpoly_0x13edd0");
#endif

    switch (ctx->pc) {
        case 0x13ede8u: goto label_13ede8;
        default: break;
    }

    ctx->pc = 0x13edd0u;

    // 0x13edd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13edd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EDD4u;
    {
        const bool branch_taken_0x13edd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDD4u;
        // 0x13edd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edd4) {
            ctx->pc = 0x13EDE8u;
            goto label_13ede8;
        }
    }
    ctx->pc = 0x13EDDCu;
    // 0x13eddc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13ede0: 0xc04f604  jal         func_13D810
    ctx->pc = 0x13EDE0u;
    SET_GPR_U32(ctx, 31, 0x13EDE8u);
    ctx->pc = 0x13EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDE0u;
    // 0x13ede4: 0x24a5e140  addiu       $a1, $a1, -0x1EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D810u, 0x13EDE0u, 0x13EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDE8u;
label_13ede8:
    // 0x13ede8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ede8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13edec: 0x3e00008  jr          $ra
    ctx->pc = 0x13EDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDECu;
        // 0x13edf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EDF4u;
}
