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

// Function: entry_0017dd84
// Address: 0x17dd84 - 0x17dda0
void entry_0017dd84_0x17dd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd84_0x17dd84");
#endif

    ctx->pc = 0x17dd84u;

    // 0x17dd84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17dd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17dd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dd8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17dd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dd90: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dd94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17dd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD98u;
        // 0x17dd9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DDA0u;
}
