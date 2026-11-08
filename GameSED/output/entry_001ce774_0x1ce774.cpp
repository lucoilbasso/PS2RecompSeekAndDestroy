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

// Function: entry_001ce774
// Address: 0x1ce774 - 0x1ce788
void entry_001ce774_0x1ce774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce774_0x1ce774");
#endif

    ctx->pc = 0x1ce774u;

    // 0x1ce774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE77Cu;
        // 0x1ce780: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE784u;
    // 0x1ce784: 0x0  nop
    ctx->pc = 0x1ce784u;
    // NOP
    ctx->pc = 0x1ce788u;
}
