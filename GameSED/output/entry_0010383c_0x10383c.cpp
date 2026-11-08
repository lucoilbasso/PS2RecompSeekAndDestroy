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

// Function: entry_0010383c
// Address: 0x10383c - 0x103860
void entry_0010383c_0x10383c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010383c_0x10383c");
#endif

    ctx->pc = 0x10383cu;

    // 0x10383c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10383cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103848: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10384c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10384cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103850: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103858: 0x3e00008  jr          $ra
    ctx->pc = 0x103858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103858u;
        // 0x10385c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103860u;
}
