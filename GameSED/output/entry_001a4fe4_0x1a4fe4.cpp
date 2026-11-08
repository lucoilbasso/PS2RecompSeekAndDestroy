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

// Function: entry_001a4fe4
// Address: 0x1a4fe4 - 0x1a4fec
void entry_001a4fe4_0x1a4fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fe4_0x1a4fe4");
#endif

    ctx->pc = 0x1a4fe4u;

label_1a4fe4:
    // 0x1a4fe4: 0x40f809  jalr        $v0
label_1a4fe8:
    if (ctx->pc == 0x1A4FE8u) {
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FECu;
        goto label_fallthrough_0x1a4fe4;
    }
    ctx->pc = 0x1A4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4FECu);
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FE4u, 0x1A4FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a4fe4:
    ctx->pc = 0x1A4FECu;
}
