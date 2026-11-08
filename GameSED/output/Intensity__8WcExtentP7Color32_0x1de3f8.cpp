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

// Function: Intensity__8WcExtentP7Color32
// Address: 0x1de3f8 - 0x1de410
void Intensity__8WcExtentP7Color32_0x1de3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Intensity__8WcExtentP7Color32_0x1de3f8");
#endif

    ctx->pc = 0x1de3f8u;

    // 0x1de3f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1de3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1de3fc: 0x24840154  addiu       $a0, $a0, 0x154
    ctx->pc = 0x1de3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x1de400: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1de400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1de404: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1de404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1de408: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE408u;
        // 0x1de40c: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE410u;
}
