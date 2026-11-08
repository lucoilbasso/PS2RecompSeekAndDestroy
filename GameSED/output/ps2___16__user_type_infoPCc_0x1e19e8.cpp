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

// Function: __16__user_type_infoPCc
// Address: 0x1e19e8 - 0x1e19fc
void ps2___16__user_type_infoPCc_0x1e19e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___16__user_type_infoPCc_0x1e19e8");
#endif

    ctx->pc = 0x1e19e8u;

    // 0x1e19e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1e19ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e19f0: 0x24630c48  addiu       $v1, $v1, 0xC48
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3144));
    // 0x1e19f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E19F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19F4u;
        // 0x1e19f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E19F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E19FCu;
}
