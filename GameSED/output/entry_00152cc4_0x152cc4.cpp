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

// Function: entry_00152cc4
// Address: 0x152cc4 - 0x152cdc
void entry_00152cc4_0x152cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cc4_0x152cc4");
#endif

    switch (ctx->pc) {
        case 0x152cd4u: goto label_152cd4;
        default: break;
    }

    ctx->pc = 0x152cc4u;

    // 0x152cc4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152CC4u;
    {
        const bool branch_taken_0x152cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cc4) {
            ctx->pc = 0x152CDCu;
            return;
        }
    }
    ctx->pc = 0x152CCCu;
    // 0x152ccc: 0xc059606  jal         func_165818
    ctx->pc = 0x152CCCu;
    SET_GPR_U32(ctx, 31, 0x152CD4u);
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x152CCCu, 0x152CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CD4u;
label_152cd4:
    // 0x152cd4: 0xc05962e  jal         func_1658B8
    ctx->pc = 0x152CD4u;
    SET_GPR_U32(ctx, 31, 0x152CDCu);
    ctx->pc = 0x152CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CD4u;
    // 0x152cd8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658B8u, 0x152CD4u, 0x152CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CDCu;
}
