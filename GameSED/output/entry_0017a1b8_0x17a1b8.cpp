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

// Function: entry_0017a1b8
// Address: 0x17a1b8 - 0x17a1c8
void entry_0017a1b8_0x17a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1b8_0x17a1b8");
#endif

    switch (ctx->pc) {
        case 0x17a1c0u: goto label_17a1c0;
        default: break;
    }

    ctx->pc = 0x17a1b8u;

label_17a1b8:
    // 0x17a1b8: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17A1B8u;
    SET_GPR_U32(ctx, 31, 0x17A1C0u);
    ctx->pc = 0x17A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1B8u;
    // 0x17a1bc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17A1B8u, 0x17A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1C0u;
label_17a1c0:
    // 0x17a1c0: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17A1C0u;
    {
        const bool branch_taken_0x17a1c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a1c0) {
            ctx->pc = 0x17A1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A1C0u;
            // 0x17a1c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1b8;
        }
    }
    ctx->pc = 0x17A1C8u;
}
