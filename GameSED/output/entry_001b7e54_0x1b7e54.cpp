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

// Function: entry_001b7e54
// Address: 0x1b7e54 - 0x1b7e74
void entry_001b7e54_0x1b7e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7e54_0x1b7e54");
#endif

    switch (ctx->pc) {
        case 0x1b7e68u: goto label_1b7e68;
        default: break;
    }

    ctx->pc = 0x1b7e54u;

    // 0x1b7e54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b7e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e58: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1b7e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e5c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1b7e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e60: 0xc06df30  jal         func_1B7CC0
    ctx->pc = 0x1B7E60u;
    SET_GPR_U32(ctx, 31, 0x1B7E68u);
    ctx->pc = 0x1B7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E60u;
    // 0x1b7e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7CC0u, 0x1B7E60u, 0x1B7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E68u;
label_1b7e68:
    // 0x1b7e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E6Cu;
        // 0x1b7e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7E74u;
}
