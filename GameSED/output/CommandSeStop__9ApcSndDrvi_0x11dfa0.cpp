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

// Function: CommandSeStop__9ApcSndDrvi
// Address: 0x11dfa0 - 0x11dfc4
void CommandSeStop__9ApcSndDrvi_0x11dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSeStop__9ApcSndDrvi_0x11dfa0");
#endif

    switch (ctx->pc) {
        case 0x11dfb8u: goto label_11dfb8;
        default: break;
    }

    ctx->pc = 0x11dfa0u;

    // 0x11dfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dfa4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFA4u;
    {
        const bool branch_taken_0x11dfa4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFA4u;
        // 0x11dfa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfa4) {
            ctx->pc = 0x11DFB8u;
            goto label_11dfb8;
        }
    }
    ctx->pc = 0x11DFACu;
    // 0x11dfac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dfb0: 0xc05ee40  jal         func_17B900
    ctx->pc = 0x11DFB0u;
    SET_GPR_U32(ctx, 31, 0x11DFB8u);
    ctx->pc = 0x11DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFB0u;
    // 0x11dfb4: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B900u, 0x11DFB0u, 0x11DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFB8u;
label_11dfb8:
    // 0x11dfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFBCu;
        // 0x11dfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DFC4u;
}
