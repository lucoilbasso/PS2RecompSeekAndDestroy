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

// Function: ChainOTEntity__8WcEntityPP8WcEntity
// Address: 0x1dd3c8 - 0x1dd3d8
void ChainOTEntity__8WcEntityPP8WcEntity_0x1dd3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChainOTEntity__8WcEntityPP8WcEntity_0x1dd3c8");
#endif

    ctx->pc = 0x1dd3c8u;

    // 0x1dd3c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd3cc: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x1dd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
    // 0x1dd3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3D0u;
        // 0x1dd3d4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3D8u;
}
