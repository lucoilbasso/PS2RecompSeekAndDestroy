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

// Function: entry_001b404c
// Address: 0x1b404c - 0x1b4068
void entry_001b404c_0x1b404c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b404c_0x1b404c");
#endif

    ctx->pc = 0x1b404cu;

    // 0x1b404c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4050: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4054: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b4054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4058: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b4058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b405c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b405cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4060: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4060u;
        // 0x1b4064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4068u;
}
