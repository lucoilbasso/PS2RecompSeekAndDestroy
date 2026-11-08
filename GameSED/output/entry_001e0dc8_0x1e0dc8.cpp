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

// Function: entry_001e0dc8
// Address: 0x1e0dc8 - 0x1e0de0
void entry_001e0dc8_0x1e0dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0dc8_0x1e0dc8");
#endif

    ctx->pc = 0x1e0dc8u;

    // 0x1e0dc8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1e0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1e0dcc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e0dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1e0dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DD8u;
        // 0x1e0ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0DE0u;
}
