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

// Function: entry_001a5624
// Address: 0x1a5624 - 0x1a5630
void entry_001a5624_0x1a5624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5624_0x1a5624");
#endif

    ctx->pc = 0x1a5624u;

label_1a5624:
    // 0x1a5624: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1a5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1a5628:
    // 0x1a5628: 0x40f809  jalr        $v0
label_1a562c:
    if (ctx->pc == 0x1A562Cu) {
        ctx->pc = 0x1A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5628u;
        // 0x1a562c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5630u;
        goto label_fallthrough_0x1a5628;
    }
    ctx->pc = 0x1A5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5630u);
        ctx->pc = 0x1A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5628u;
        // 0x1a562c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5628u, 0x1A5630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a5628:
    ctx->pc = 0x1A5630u;
}
