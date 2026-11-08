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

// Function: entry_001c5c5c
// Address: 0x1c5c5c - 0x1c5c88
void entry_001c5c5c_0x1c5c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c5c_0x1c5c5c");
#endif

    ctx->pc = 0x1c5c5cu;

    // 0x1c5c5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c5c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c5c60: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1c5c60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5c64: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c5c64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5c68: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1c5c68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5c6c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c5c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5c70: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c5c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5c74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c5c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5c78: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c5c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5c7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C80u;
        // 0x1c5c84: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5C88u;
}
