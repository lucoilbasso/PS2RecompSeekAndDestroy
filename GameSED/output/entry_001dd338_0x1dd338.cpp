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

// Function: entry_001dd338
// Address: 0x1dd338 - 0x1dd358
void entry_001dd338_0x1dd338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd338_0x1dd338");
#endif

    switch (ctx->pc) {
        case 0x1dd348u: goto label_1dd348;
        default: break;
    }

    ctx->pc = 0x1dd338u;

label_1dd338:
    // 0x1dd338: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd33c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1dd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x1dd340: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1DD340u;
    SET_GPR_U32(ctx, 31, 0x1DD348u);
    ctx->pc = 0x1DD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD340u;
    // 0x1dd344: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1DD340u, 0x1DD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD348u;
label_1dd348:
    // 0x1dd348: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1dd34c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD34Cu;
    {
        const bool branch_taken_0x1dd34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd34c) {
            ctx->pc = 0x1DD350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD34Cu;
            // 0x1dd350: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd338;
        }
    }
    ctx->pc = 0x1DD354u;
    // 0x1dd354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1dd358u;
}
