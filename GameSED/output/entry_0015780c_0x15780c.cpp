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

// Function: entry_0015780c
// Address: 0x15780c - 0x157828
void entry_0015780c_0x15780c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015780c_0x15780c");
#endif

    switch (ctx->pc) {
        case 0x15781cu: goto label_15781c;
        default: break;
    }

    ctx->pc = 0x15780cu;

label_15780c:
    // 0x15780c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15780cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_157810:
    // 0x157810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_157814:
    // 0x157814: 0x60f809  jalr        $v1
label_157818:
    if (ctx->pc == 0x157818u) {
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15781Cu;
        goto label_15781c;
    }
    ctx->pc = 0x157814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15781Cu);
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157814u, 0x15781Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157820:
    // 0x157820: 0x3e00008  jr          $ra
label_157824:
    if (ctx->pc == 0x157824u) {
        ctx->pc = 0x157824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157820u;
        // 0x157824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157828u;
        goto label_fallthrough_0x157820;
    }
    ctx->pc = 0x157820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157820u;
        // 0x157824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157820:
    ctx->pc = 0x157828u;
}
