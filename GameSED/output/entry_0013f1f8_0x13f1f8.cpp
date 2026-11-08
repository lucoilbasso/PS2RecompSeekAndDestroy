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

// Function: entry_0013f1f8
// Address: 0x13f1f8 - 0x13f214
void entry_0013f1f8_0x13f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f1f8_0x13f1f8");
#endif

    switch (ctx->pc) {
        case 0x13f204u: goto label_13f204;
        default: break;
    }

    ctx->pc = 0x13f1f8u;

label_13f1f8:
    // 0x13f1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1fc: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F1FCu;
    SET_GPR_U32(ctx, 31, 0x13F204u);
    ctx->pc = 0x13F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1FCu;
    // 0x13f200: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F1FCu, 0x13F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F204u;
label_13f204:
    // 0x13f204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F204u;
    {
        const bool branch_taken_0x13f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F204u;
        // 0x13f208: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f204) {
            ctx->pc = 0x13F218u;
            return;
        }
    }
    ctx->pc = 0x13F20Cu;
    // 0x13f20c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F20Cu;
    {
        const bool branch_taken_0x13f20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F20Cu;
        // 0x13f210: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f20c) {
            ctx->pc = 0x13F1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f1f8;
        }
    }
    ctx->pc = 0x13F214u;
}
