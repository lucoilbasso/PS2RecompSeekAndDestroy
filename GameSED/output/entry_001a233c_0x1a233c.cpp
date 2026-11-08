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

// Function: entry_001a233c
// Address: 0x1a233c - 0x1a2358
void entry_001a233c_0x1a233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a233c_0x1a233c");
#endif

    switch (ctx->pc) {
        case 0x1a234cu: goto label_1a234c;
        case 0x1a2354u: goto label_1a2354;
        default: break;
    }

    ctx->pc = 0x1a233cu;

    // 0x1a233c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A233Cu;
    {
        const bool branch_taken_0x1a233c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a233c) {
            ctx->pc = 0x1A2340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A233Cu;
            // 0x1a2340: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2358u;
            return;
        }
    }
    ctx->pc = 0x1A2344u;
    // 0x1a2344: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A2344u;
    SET_GPR_U32(ctx, 31, 0x1A234Cu);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A2344u, 0x1A234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A234Cu;
label_1a234c:
    // 0x1a234c: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A234Cu;
    SET_GPR_U32(ctx, 31, 0x1A2354u);
    ctx->pc = 0x1A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A234Cu;
    // 0x1a2350: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A234Cu, 0x1A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2354u;
label_1a2354:
    // 0x1a2354: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->pc = 0x1a2358u;
}
