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

// Function: entry_00119848
// Address: 0x119848 - 0x119860
void entry_00119848_0x119848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119848_0x119848");
#endif

    ctx->pc = 0x119848u;

    // 0x119848: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11984c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119850: 0x8c63d528  lw          $v1, -0x2AD8($v1)
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956328)));
    // 0x119854: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x119854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x119858: 0x3e00008  jr          $ra
    ctx->pc = 0x119858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119858u;
        // 0x11985c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119860u;
}
