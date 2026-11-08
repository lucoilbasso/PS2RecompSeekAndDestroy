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

// Function: entry_001c1b9c
// Address: 0x1c1b9c - 0x1c1bb4
void entry_001c1b9c_0x1c1b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b9c_0x1c1b9c");
#endif

    ctx->pc = 0x1c1b9cu;

    // 0x1c1b9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1ba4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BACu;
        // 0x1c1bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BB4u;
}
