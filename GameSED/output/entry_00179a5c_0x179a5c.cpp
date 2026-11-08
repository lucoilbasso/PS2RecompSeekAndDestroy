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

// Function: entry_00179a5c
// Address: 0x179a5c - 0x179a7c
void entry_00179a5c_0x179a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179a5c_0x179a5c");
#endif

    ctx->pc = 0x179a5cu;

    // 0x179a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179a60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179a64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179a68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x179a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179a6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x179a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179a70: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179a74: 0x3e00008  jr          $ra
    ctx->pc = 0x179A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A74u;
        // 0x179a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A7Cu;
}
