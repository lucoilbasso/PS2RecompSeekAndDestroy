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

// Function: entry_001279b4
// Address: 0x1279b4 - 0x1279d0
void entry_001279b4_0x1279b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279b4_0x1279b4");
#endif

    ctx->pc = 0x1279b4u;

    // 0x1279b4: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x1279b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1279b8: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1279bc: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x1279bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1279c0: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x1279c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1279c4: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1279c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1279c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1279C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1279CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279C8u;
        // 0x1279cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1279C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1279D0u;
}
