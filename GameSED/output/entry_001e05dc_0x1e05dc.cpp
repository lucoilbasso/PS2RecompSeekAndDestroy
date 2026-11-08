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

// Function: entry_001e05dc
// Address: 0x1e05dc - 0x1e0600
void entry_001e05dc_0x1e05dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e05dc_0x1e05dc");
#endif

    ctx->pc = 0x1e05dcu;

    // 0x1e05dc: 0x248201b4  addiu       $v0, $a0, 0x1B4
    ctx->pc = 0x1e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 436));
    // 0x1e05e0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e05e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e05e8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e05ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e05f0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1e05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1e05f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e05f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F8u;
        // 0x1e05fc: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0600u;
}
