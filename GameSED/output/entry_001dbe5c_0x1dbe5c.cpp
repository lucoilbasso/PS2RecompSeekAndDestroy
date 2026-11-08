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

// Function: entry_001dbe5c
// Address: 0x1dbe5c - 0x1dbe74
void entry_001dbe5c_0x1dbe5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbe5c_0x1dbe5c");
#endif

    ctx->pc = 0x1dbe5cu;

    // 0x1dbe5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbe5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbe60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbe64: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x1dbe68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE6Cu;
        // 0x1dbe70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE74u;
}
