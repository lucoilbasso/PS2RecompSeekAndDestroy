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

// Function: entry_001a3ed8
// Address: 0x1a3ed8 - 0x1a3ef4
void entry_001a3ed8_0x1a3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3ed8_0x1a3ed8");
#endif

    ctx->pc = 0x1a3ed8u;

    // 0x1a3ed8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1a3ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a3edc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a3edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3ee0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1a3ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a3ee4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a3ee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a3ee8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a3eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3EF4u;
}
