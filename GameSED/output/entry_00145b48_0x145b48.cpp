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

// Function: entry_00145b48
// Address: 0x145b48 - 0x145b70
void entry_00145b48_0x145b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145b48_0x145b48");
#endif

    ctx->pc = 0x145b48u;

    // 0x145b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145b4c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x145b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x145b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x145b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145b5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x145b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x145b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x145b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145b68: 0x3e00008  jr          $ra
    ctx->pc = 0x145B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B68u;
        // 0x145b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145B70u;
}
