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

// Function: entry_001c4bf8
// Address: 0x1c4bf8 - 0x1c4c10
void entry_001c4bf8_0x1c4bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4bf8_0x1c4bf8");
#endif

    ctx->pc = 0x1c4bf8u;

    // 0x1c4bf8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4bfc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c4bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c00: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c4c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4c04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C08u;
        // 0x1c4c0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C10u;
}
