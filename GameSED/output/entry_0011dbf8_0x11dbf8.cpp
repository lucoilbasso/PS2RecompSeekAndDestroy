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

// Function: entry_0011dbf8
// Address: 0x11dbf8 - 0x11dc14
void entry_0011dbf8_0x11dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dbf8_0x11dbf8");
#endif

    switch (ctx->pc) {
        case 0x11dc08u: goto label_11dc08;
        default: break;
    }

    ctx->pc = 0x11dbf8u;

    // 0x11dbf8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc00: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x11DC00u;
    SET_GPR_U32(ctx, 31, 0x11DC08u);
    ctx->pc = 0x11DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC00u;
    // 0x11dc04: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x11DC00u, 0x11DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC08u;
label_11dc08:
    // 0x11dc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC0Cu;
        // 0x11dc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DC14u;
}
