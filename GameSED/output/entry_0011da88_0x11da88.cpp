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

// Function: entry_0011da88
// Address: 0x11da88 - 0x11daa4
void entry_0011da88_0x11da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da88_0x11da88");
#endif

    switch (ctx->pc) {
        case 0x11da98u: goto label_11da98;
        default: break;
    }

    ctx->pc = 0x11da88u;

    // 0x11da88: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11da88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11da8c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x11da8cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11da90: 0xc0477aa  jal         func_11DEA8
    ctx->pc = 0x11DA90u;
    SET_GPR_U32(ctx, 31, 0x11DA98u);
    ctx->pc = 0x11DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA90u;
    // 0x11da94: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEA8u, 0x11DA90u, 0x11DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA98u;
label_11da98:
    // 0x11da98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA9Cu;
        // 0x11daa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DAA4u;
}
