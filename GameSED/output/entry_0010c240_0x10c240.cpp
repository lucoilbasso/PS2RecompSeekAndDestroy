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

// Function: entry_0010c240
// Address: 0x10c240 - 0x10c258
void entry_0010c240_0x10c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c240_0x10c240");
#endif

    ctx->pc = 0x10c240u;

    // 0x10c240: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x10c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x10c244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c248: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x10c248u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x10c24c: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x10c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x10c250: 0x3e00008  jr          $ra
    ctx->pc = 0x10C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C250u;
        // 0x10c254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C258u;
}
