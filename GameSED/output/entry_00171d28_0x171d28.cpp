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

// Function: entry_00171d28
// Address: 0x171d28 - 0x171d3c
void entry_00171d28_0x171d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d28_0x171d28");
#endif

    ctx->pc = 0x171d28u;

    // 0x171d28: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x171d28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x171d2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x171d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171d30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x171d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171d34: 0x3e00008  jr          $ra
    ctx->pc = 0x171D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D34u;
        // 0x171d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D3Cu;
}
