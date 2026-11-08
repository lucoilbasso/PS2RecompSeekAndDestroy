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

// Function: entry_00152870
// Address: 0x152870 - 0x152884
void entry_00152870_0x152870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152870_0x152870");
#endif

    switch (ctx->pc) {
        case 0x152878u: goto label_152878;
        default: break;
    }

    ctx->pc = 0x152870u;

    // 0x152870: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152870u;
    SET_GPR_U32(ctx, 31, 0x152878u);
    ctx->pc = 0x152874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152870u;
    // 0x152874: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152870u, 0x152878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152878u;
label_152878:
    // 0x152878: 0x1440012f  bnez        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x152878u;
    {
        const bool branch_taken_0x152878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152878u;
        // 0x15287c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152878) {
            ctx->pc = 0x152D38u;
            return;
        }
    }
    ctx->pc = 0x152880u;
    // 0x152880: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x152880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    ctx->pc = 0x152884u;
}
