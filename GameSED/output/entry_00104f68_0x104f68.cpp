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

// Function: entry_00104f68
// Address: 0x104f68 - 0x104f88
void entry_00104f68_0x104f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f68_0x104f68");
#endif

    ctx->pc = 0x104f68u;

    // 0x104f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104f74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104f7c: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x104f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x104f80: 0x3e00008  jr          $ra
    ctx->pc = 0x104F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F80u;
        // 0x104f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F88u;
}
