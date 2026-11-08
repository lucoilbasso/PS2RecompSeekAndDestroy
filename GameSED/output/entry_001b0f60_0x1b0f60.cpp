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

// Function: entry_001b0f60
// Address: 0x1b0f60 - 0x1b0f84
void entry_001b0f60_0x1b0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f60_0x1b0f60");
#endif

    ctx->pc = 0x1b0f60u;

    // 0x1b0f60: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0f64: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1b0f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0f68: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1b0f68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0f6c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1b0f6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0f70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0f74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0f78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b0f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F7Cu;
        // 0x1b0f80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0F84u;
}
