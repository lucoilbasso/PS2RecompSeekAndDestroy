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

// Function: entry_001a94c4
// Address: 0x1a94c4 - 0x1a94e0
void entry_001a94c4_0x1a94c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a94c4_0x1a94c4");
#endif

    ctx->pc = 0x1a94c4u;

    // 0x1a94c4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a94c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a94c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a94cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a94d0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1a94d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a94d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a94d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a94d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A94D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94D8u;
        // 0x1a94dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A94E0u;
}
