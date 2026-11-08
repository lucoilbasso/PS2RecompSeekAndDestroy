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

// Function: entry_0012140c
// Address: 0x12140c - 0x12141c
void entry_0012140c_0x12140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012140c_0x12140c");
#endif

    ctx->pc = 0x12140cu;

    // 0x12140c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x12140cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x121410: 0xdc830078  ld          $v1, 0x78($a0)
    ctx->pc = 0x121410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x121414: 0x3e00008  jr          $ra
    ctx->pc = 0x121414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121414u;
        // 0x121418: 0xfca30008  sd          $v1, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12141Cu;
}
