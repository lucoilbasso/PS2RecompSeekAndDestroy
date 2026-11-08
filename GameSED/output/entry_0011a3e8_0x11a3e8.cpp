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

// Function: entry_0011a3e8
// Address: 0x11a3e8 - 0x11a3f8
void entry_0011a3e8_0x11a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3e8_0x11a3e8");
#endif

    ctx->pc = 0x11a3e8u;

    // 0x11a3e8: 0x501ffef  bgez        $t0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11A3E8u;
    {
        const bool branch_taken_0x11a3e8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x11A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3E8u;
        // 0x11a3ec: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3e8) {
            ctx->pc = 0x11A3A8u;
            return;
        }
    }
    ctx->pc = 0x11A3F0u;
    // 0x11a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A3F8u;
}
