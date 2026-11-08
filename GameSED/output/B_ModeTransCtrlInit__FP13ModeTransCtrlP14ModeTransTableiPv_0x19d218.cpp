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

// Function: B_ModeTransCtrlInit__FP13ModeTransCtrlP14ModeTransTableiPv
// Address: 0x19d218 - 0x19d238
void B_ModeTransCtrlInit__FP13ModeTransCtrlP14ModeTransTableiPv_0x19d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_ModeTransCtrlInit__FP13ModeTransCtrlP14ModeTransTableiPv_0x19d218");
#endif

    ctx->pc = 0x19d218u;

    // 0x19d218: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19d21c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x19d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x19d220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19d224: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19d224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19d228: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19d22c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x19d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x19d230: 0x3e00008  jr          $ra
    ctx->pc = 0x19D230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D230u;
        // 0x19d234: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D238u;
}
