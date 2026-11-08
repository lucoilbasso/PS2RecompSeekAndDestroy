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

// Function: entry_00103500
// Address: 0x103500 - 0x103524
void entry_00103500_0x103500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103500_0x103500");
#endif

    ctx->pc = 0x103500u;

    // 0x103500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103504: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x103508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10350c: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x10350cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
    // 0x103510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10351c: 0x3e00008  jr          $ra
    ctx->pc = 0x10351Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10351Cu;
        // 0x103520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10351Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103524u;
}
