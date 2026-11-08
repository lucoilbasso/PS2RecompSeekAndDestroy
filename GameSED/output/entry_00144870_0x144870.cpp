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

// Function: entry_00144870
// Address: 0x144870 - 0x144890
void entry_00144870_0x144870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144870_0x144870");
#endif

    ctx->pc = 0x144870u;

    // 0x144870: 0xae720078  sw          $s2, 0x78($s3)
    ctx->pc = 0x144870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 18));
    // 0x144874: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144878: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14487c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14487cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144880: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144884: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144888: 0x3e00008  jr          $ra
    ctx->pc = 0x144888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144888u;
        // 0x14488c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144890u;
}
