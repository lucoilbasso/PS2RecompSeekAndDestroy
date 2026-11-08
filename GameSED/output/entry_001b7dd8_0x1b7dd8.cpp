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

// Function: entry_001b7dd8
// Address: 0x1b7dd8 - 0x1b7df4
void entry_001b7dd8_0x1b7dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7dd8_0x1b7dd8");
#endif

    ctx->pc = 0x1b7dd8u;

    // 0x1b7dd8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7ddc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1b7ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7de0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b7de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7de4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1b7de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7de8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b7de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DECu;
        // 0x1b7df0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7DF4u;
}
