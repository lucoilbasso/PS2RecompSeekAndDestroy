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

// Function: entry_0015eb38
// Address: 0x15eb38 - 0x15eb48
void entry_0015eb38_0x15eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb38_0x15eb38");
#endif

    switch (ctx->pc) {
        case 0x15eb40u: goto label_15eb40;
        default: break;
    }

    ctx->pc = 0x15eb38u;

    // 0x15eb38: 0xc04171a  jal         func_105C68
    ctx->pc = 0x15EB38u;
    SET_GPR_U32(ctx, 31, 0x15EB40u);
    ctx->pc = 0x15EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB38u;
    // 0x15eb3c: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x15EB38u, 0x15EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB40u;
label_15eb40:
    // 0x15eb40: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x15EB40u;
    {
        const bool branch_taken_0x15eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB40u;
        // 0x15eb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb40) {
            ctx->pc = 0x15EC54u;
            return;
        }
    }
    ctx->pc = 0x15EB48u;
}
