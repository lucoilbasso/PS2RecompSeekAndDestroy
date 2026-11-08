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

// Function: entry_001b89dc
// Address: 0x1b89dc - 0x1b89f4
void entry_001b89dc_0x1b89dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b89dc_0x1b89dc");
#endif

    ctx->pc = 0x1b89dcu;

    // 0x1b89dc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1b89dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b89e0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1b89e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b89e4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1b89e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b89e8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1b89e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b89ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B89ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89ECu;
        // 0x1b89f0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B89F4u;
}
