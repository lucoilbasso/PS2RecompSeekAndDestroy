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

// Function: entry_00106d24
// Address: 0x106d24 - 0x106d38
void entry_00106d24_0x106d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d24_0x106d24");
#endif

    switch (ctx->pc) {
        case 0x106d2cu: goto label_106d2c;
        default: break;
    }

    ctx->pc = 0x106d24u;

    // 0x106d24: 0xc041434  jal         func_1050D0
    ctx->pc = 0x106D24u;
    SET_GPR_U32(ctx, 31, 0x106D2Cu);
    ctx->pc = 0x106D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D24u;
    // 0x106d28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1050D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1050D0u, 0x106D24u, 0x106D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D2Cu;
label_106d2c:
    // 0x106d2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x106d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106d30: 0x3e00008  jr          $ra
    ctx->pc = 0x106D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D30u;
        // 0x106d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D38u;
}
