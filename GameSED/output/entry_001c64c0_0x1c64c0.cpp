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

// Function: entry_001c64c0
// Address: 0x1c64c0 - 0x1c64dc
void entry_001c64c0_0x1c64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c64c0_0x1c64c0");
#endif

    ctx->pc = 0x1c64c0u;

    // 0x1c64c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c64c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c64c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c64c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c64c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c64cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1c64ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c64d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c64d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c64d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C64D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64D4u;
        // 0x1c64d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C64D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C64DCu;
}
