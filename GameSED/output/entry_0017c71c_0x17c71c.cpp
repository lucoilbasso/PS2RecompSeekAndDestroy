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

// Function: entry_0017c71c
// Address: 0x17c71c - 0x17c73c
void entry_0017c71c_0x17c71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c71c_0x17c71c");
#endif

    ctx->pc = 0x17c71cu;

    // 0x17c71c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c720: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17c720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c724: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x17c724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
    // 0x17c728: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17c728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c72c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17c72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c730: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c734: 0x3e00008  jr          $ra
    ctx->pc = 0x17C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C734u;
        // 0x17c738: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C73Cu;
}
