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

// Function: _existBaseObj__8WcDaemon
// Address: 0x1e0eb8 - 0x1e0ed4
void _existBaseObj__8WcDaemon_0x1e0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_existBaseObj__8WcDaemon_0x1e0eb8");
#endif

    ctx->pc = 0x1e0eb8u;

    // 0x1e0eb8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e0ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0EBCu;
    {
        const bool branch_taken_0x1e0ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EBCu;
        // 0x1e0ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ebc) {
            ctx->pc = 0x1E0ECCu;
            goto label_1e0ecc;
        }
    }
    ctx->pc = 0x1E0EC4u;
    // 0x1e0ec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0ec8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1e0ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e0ecc:
    // 0x1e0ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ECCu;
        // 0x1e0ed0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0ED4u;
}
