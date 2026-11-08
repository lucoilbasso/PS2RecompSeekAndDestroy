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

// Function: entry_001a05c8
// Address: 0x1a05c8 - 0x1a05dc
void entry_001a05c8_0x1a05c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05c8_0x1a05c8");
#endif

    switch (ctx->pc) {
        case 0x1a05d0u: goto label_1a05d0;
        default: break;
    }

    ctx->pc = 0x1a05c8u;

label_1a05c8:
    // 0x1a05c8: 0x100f809  jalr        $t0
label_1a05cc:
    if (ctx->pc == 0x1A05CCu) {
        ctx->pc = 0x1A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05C8u;
        // 0x1a05cc: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05D0u;
        goto label_1a05d0;
    }
    ctx->pc = 0x1A05C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1A05D0u);
        ctx->pc = 0x1A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05C8u;
        // 0x1a05cc: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05C8u, 0x1A05D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A05D0u;
label_1a05d0:
    // 0x1a05d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a05d4:
    // 0x1a05d4: 0x3e00008  jr          $ra
label_1a05d8:
    if (ctx->pc == 0x1A05D8u) {
        ctx->pc = 0x1A05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D4u;
        // 0x1a05d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05DCu;
        goto label_fallthrough_0x1a05d4;
    }
    ctx->pc = 0x1A05D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D4u;
        // 0x1a05d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a05d4:
    ctx->pc = 0x1A05DCu;
}
