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

// Function: entry_0016af3c
// Address: 0x16af3c - 0x16af54
void entry_0016af3c_0x16af3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af3c_0x16af3c");
#endif

    switch (ctx->pc) {
        case 0x16af48u: goto label_16af48;
        default: break;
    }

    ctx->pc = 0x16af3cu;

label_16af3c:
    // 0x16af3c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x16af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_16af40:
    // 0x16af40: 0x40f809  jalr        $v0
label_16af44:
    if (ctx->pc == 0x16AF44u) {
        ctx->pc = 0x16AF48u;
        goto label_16af48;
    }
    ctx->pc = 0x16AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16AF48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF40u, 0x16AF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16AF48u;
label_16af48:
    // 0x16af48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16af4c:
    // 0x16af4c: 0x3e00008  jr          $ra
label_16af50:
    if (ctx->pc == 0x16AF50u) {
        ctx->pc = 0x16AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF4Cu;
        // 0x16af50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF54u;
        goto label_fallthrough_0x16af4c;
    }
    ctx->pc = 0x16AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF4Cu;
        // 0x16af50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16af4c:
    ctx->pc = 0x16AF54u;
}
