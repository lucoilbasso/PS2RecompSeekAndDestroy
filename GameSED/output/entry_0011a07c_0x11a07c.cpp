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

// Function: entry_0011a07c
// Address: 0x11a07c - 0x11a090
void entry_0011a07c_0x11a07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a07c_0x11a07c");
#endif

    ctx->pc = 0x11a07cu;

    // 0x11a07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a080: 0xae230400  sw          $v1, 0x400($s1)
    ctx->pc = 0x11a080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 3));
    // 0x11a084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a088: 0x3e00008  jr          $ra
    ctx->pc = 0x11A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A088u;
        // 0x11a08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A090u;
}
