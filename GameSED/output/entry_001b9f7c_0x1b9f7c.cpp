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

// Function: entry_001b9f7c
// Address: 0x1b9f7c - 0x1b9f9c
void entry_001b9f7c_0x1b9f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9f7c_0x1b9f7c");
#endif

    ctx->pc = 0x1b9f7cu;

    // 0x1b9f7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b9f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b9f80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b9f80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9f84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9f88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b9f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9f8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b9f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F94u;
        // 0x1b9f98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9F9Cu;
}
