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

// Function: entry_001a2320
// Address: 0x1a2320 - 0x1a233c
void entry_001a2320_0x1a2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2320_0x1a2320");
#endif

    switch (ctx->pc) {
        case 0x1a2330u: goto label_1a2330;
        case 0x1a2338u: goto label_1a2338;
        default: break;
    }

    ctx->pc = 0x1a2320u;

    // 0x1a2320: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2320u;
    {
        const bool branch_taken_0x1a2320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2320) {
            ctx->pc = 0x1A2324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2320u;
            // 0x1a2324: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A233Cu;
            return;
        }
    }
    ctx->pc = 0x1A2328u;
    // 0x1a2328: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A2328u;
    SET_GPR_U32(ctx, 31, 0x1A2330u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A2328u, 0x1A2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2330u;
label_1a2330:
    // 0x1a2330: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A2330u;
    SET_GPR_U32(ctx, 31, 0x1A2338u);
    ctx->pc = 0x1A2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2330u;
    // 0x1a2334: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A2330u, 0x1A2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2338u;
label_1a2338:
    // 0x1a2338: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1a2338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1a233cu;
}
