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

// Function: entry_00155488
// Address: 0x155488 - 0x1554a8
void entry_00155488_0x155488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155488_0x155488");
#endif

    ctx->pc = 0x155488u;

    // 0x155488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15548c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15548cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155494: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x155494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155498: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15549c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1554a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1554A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A0u;
        // 0x1554a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1554A8u;
}
