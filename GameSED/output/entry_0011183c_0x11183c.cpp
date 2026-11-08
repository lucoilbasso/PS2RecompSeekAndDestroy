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

// Function: entry_0011183c
// Address: 0x11183c - 0x111860
void entry_0011183c_0x11183c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011183c_0x11183c");
#endif

    ctx->pc = 0x11183cu;

    // 0x11183c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11183cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111840: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111844: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x111844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111848: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x111848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11184c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11184cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x111850: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x111850u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111854: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x111854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x111858: 0x3e00008  jr          $ra
    ctx->pc = 0x111858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111858u;
        // 0x11185c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111860u;
}
