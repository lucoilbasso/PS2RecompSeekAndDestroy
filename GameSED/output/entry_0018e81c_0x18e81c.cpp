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

// Function: entry_0018e81c
// Address: 0x18e81c - 0x18e830
void entry_0018e81c_0x18e81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e81c_0x18e81c");
#endif

    ctx->pc = 0x18e81cu;

    // 0x18e81c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x18e820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E820u;
    {
        const bool branch_taken_0x18e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E820u;
        // 0x18e824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e820) {
            ctx->pc = 0x18E830u;
            return;
        }
    }
    ctx->pc = 0x18E828u;
    // 0x18e828: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18E828u;
    SET_GPR_U32(ctx, 31, 0x18E830u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18E828u, 0x18E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E830u;
}
