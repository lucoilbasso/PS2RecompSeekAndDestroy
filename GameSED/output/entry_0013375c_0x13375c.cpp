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

// Function: entry_0013375c
// Address: 0x13375c - 0x133770
void entry_0013375c_0x13375c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013375c_0x13375c");
#endif

    switch (ctx->pc) {
        case 0x133764u: goto label_133764;
        default: break;
    }

    ctx->pc = 0x13375cu;

    // 0x13375c: 0xc04db88  jal         func_136E20
    ctx->pc = 0x13375Cu;
    SET_GPR_U32(ctx, 31, 0x133764u);
    ctx->pc = 0x136E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E20u, 0x13375Cu, 0x133764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x133764u;
    {
        const bool branch_taken_0x133764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133764u;
        // 0x133768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133764) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x13376Cu;
    // 0x13376c: 0x0  nop
    ctx->pc = 0x13376cu;
    // NOP
    ctx->pc = 0x133770u;
}
