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

// Function: entry_00118eb0
// Address: 0x118eb0 - 0x118ecc
void entry_00118eb0_0x118eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118eb0_0x118eb0");
#endif

    ctx->pc = 0x118eb0u;

    // 0x118eb0: 0x0  nop
    ctx->pc = 0x118eb0u;
    // NOP
    // 0x118eb4: 0x0  nop
    ctx->pc = 0x118eb4u;
    // NOP
    // 0x118eb8: 0x0  nop
    ctx->pc = 0x118eb8u;
    // NOP
    // 0x118ebc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118EBCu;
    {
        const bool branch_taken_0x118ebc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x118EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EBCu;
        // 0x118ec0: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ebc) {
            ctx->pc = 0x118EA8u;
            return;
        }
    }
    ctx->pc = 0x118EC4u;
    // 0x118ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x118EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118ECCu;
}
