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

// Function: _Is_TypeAutoRun__7ApcUnit
// Address: 0x1d9138 - 0x1d9148
void ps2__Is_TypeAutoRun__7ApcUnit_0x1d9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Is_TypeAutoRun__7ApcUnit_0x1d9138");
#endif

    ctx->pc = 0x1d9138u;

    // 0x1d9138: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1d913c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x1d9140: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9140u;
        // 0x1d9144: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9148u;
}
