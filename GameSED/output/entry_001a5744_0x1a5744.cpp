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

// Function: entry_001a5744
// Address: 0x1a5744 - 0x1a5750
void entry_001a5744_0x1a5744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5744_0x1a5744");
#endif

    ctx->pc = 0x1a5744u;

label_1a5744:
    // 0x1a5744: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1a5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1a5748:
    // 0x1a5748: 0x40f809  jalr        $v0
label_1a574c:
    if (ctx->pc == 0x1A574Cu) {
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5750u;
        goto label_fallthrough_0x1a5748;
    }
    ctx->pc = 0x1A5748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5750u);
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5748u, 0x1A5750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a5748:
    ctx->pc = 0x1A5750u;
}
