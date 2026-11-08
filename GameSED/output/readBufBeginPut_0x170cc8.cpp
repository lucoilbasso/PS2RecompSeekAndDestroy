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

// Function: readBufBeginPut
// Address: 0x170cc8 - 0x170d08
void readBufBeginPut_0x170cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufBeginPut_0x170cc8");
#endif

    ctx->pc = 0x170cc8u;

    // 0x170cc8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170cd0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x170cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x170cd4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x170cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x170cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170cdc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x170cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x170ce0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170ce4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170CE4u;
    {
        const bool branch_taken_0x170ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CE4u;
        // 0x170ce8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ce4) {
            ctx->pc = 0x170D00u;
            goto label_170d00;
        }
    }
    ctx->pc = 0x170CECu;
    // 0x170cec: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x170cf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170cf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170cf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170cfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x170cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_170d00:
    // 0x170d00: 0x3e00008  jr          $ra
    ctx->pc = 0x170D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D08u;
}
