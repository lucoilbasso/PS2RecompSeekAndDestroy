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

// Function: entry_001c5f00
// Address: 0x1c5f00 - 0x1c5f1c
void entry_001c5f00_0x1c5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f00_0x1c5f00");
#endif

    ctx->pc = 0x1c5f00u;

    // 0x1c5f00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c5f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5f04: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c5f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5f08: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c5f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5f0c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c5f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5f10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F14u;
        // 0x1c5f18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F1Cu;
}
