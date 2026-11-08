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

// Function: entry_001b2c6c
// Address: 0x1b2c6c - 0x1b2c8c
void entry_001b2c6c_0x1b2c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c6c_0x1b2c6c");
#endif

    ctx->pc = 0x1b2c6cu;

    // 0x1b2c6c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b2c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2c70: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b2c70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2c74: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b2c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2c78: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b2c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2c7c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b2c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2c80: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b2c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C84u;
        // 0x1b2c88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C8Cu;
}
