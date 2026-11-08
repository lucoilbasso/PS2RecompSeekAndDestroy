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

// Function: entry_00178970
// Address: 0x178970 - 0x178980
void entry_00178970_0x178970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178970_0x178970");
#endif

    switch (ctx->pc) {
        case 0x178978u: goto label_178978;
        default: break;
    }

    ctx->pc = 0x178970u;

    // 0x178970: 0xc06eb50  jal         func_1BAD40
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 31, 0x178978u);
    ctx->pc = 0x178974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178970u;
    // 0x178974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD40u, 0x178970u, 0x178978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178978u;
label_178978:
    // 0x178978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178978u;
    {
        const bool branch_taken_0x178978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178978u;
        // 0x17897c: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178978) {
            ctx->pc = 0x17898Cu;
            return;
        }
    }
    ctx->pc = 0x178980u;
}
