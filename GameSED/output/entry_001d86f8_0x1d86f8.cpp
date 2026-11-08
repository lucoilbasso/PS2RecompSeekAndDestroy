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

// Function: entry_001d86f8
// Address: 0x1d86f8 - 0x1d870c
void entry_001d86f8_0x1d86f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d86f8_0x1d86f8");
#endif

    ctx->pc = 0x1d86f8u;

    // 0x1d86f8: 0xac8201e0  sw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
    // 0x1d86fc: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d8700: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d8700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d8704: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8704u;
        // 0x1d8708: 0xac8201e0  sw          $v0, 0x1E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D870Cu;
}
