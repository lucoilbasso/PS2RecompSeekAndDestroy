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

// Function: entry_001cf83c
// Address: 0x1cf83c - 0x1cf868
void entry_001cf83c_0x1cf83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf83c_0x1cf83c");
#endif

    ctx->pc = 0x1cf83cu;

    // 0x1cf83c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cf83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf840: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf844: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cf844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cf848: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cf848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf84c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cf84cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf850: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cf850u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf854: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cf858: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1cf858u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cf85c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1cf85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cf860: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF860u;
        // 0x1cf864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF868u;
}
