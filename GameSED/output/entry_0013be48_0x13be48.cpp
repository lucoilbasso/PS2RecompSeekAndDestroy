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

// Function: entry_0013be48
// Address: 0x13be48 - 0x13be6c
void entry_0013be48_0x13be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be48_0x13be48");
#endif

    ctx->pc = 0x13be48u;

    // 0x13be48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13be48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13be4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13be4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13be50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13be50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13be54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13be54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13be58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13be58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13be5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13be5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13be60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13be60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13be64: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE64u;
        // 0x13be68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE6Cu;
}
