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

// Function: entry_001b1d00
// Address: 0x1b1d00 - 0x1b1d20
void entry_001b1d00_0x1b1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d00_0x1b1d00");
#endif

    switch (ctx->pc) {
        case 0x1b1d08u: goto label_1b1d08;
        default: break;
    }

    ctx->pc = 0x1b1d00u;

    // 0x1b1d00: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1D00u;
    SET_GPR_U32(ctx, 31, 0x1B1D08u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1D00u, 0x1B1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D08u;
label_1b1d08:
    // 0x1b1d08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1d10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D18u;
        // 0x1b1d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1D20u;
}
