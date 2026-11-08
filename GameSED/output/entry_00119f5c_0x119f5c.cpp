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

// Function: entry_00119f5c
// Address: 0x119f5c - 0x119f6c
void entry_00119f5c_0x119f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f5c_0x119f5c");
#endif

    ctx->pc = 0x119f5cu;

    // 0x119f5c: 0xae430400  sw          $v1, 0x400($s2)
    ctx->pc = 0x119f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 3));
    // 0x119f60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f64: 0x3e00008  jr          $ra
    ctx->pc = 0x119F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F64u;
        // 0x119f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119F6Cu;
}
