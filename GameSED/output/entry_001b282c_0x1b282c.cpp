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

// Function: entry_001b282c
// Address: 0x1b282c - 0x1b284c
void entry_001b282c_0x1b282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b282c_0x1b282c");
#endif

    ctx->pc = 0x1b282cu;

    // 0x1b282c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2830: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2834: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b2834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2838: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b2838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b283c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b283cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2844: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2844u;
        // 0x1b2848: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B284Cu;
}
