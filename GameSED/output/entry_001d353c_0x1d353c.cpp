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

// Function: entry_001d353c
// Address: 0x1d353c - 0x1d3558
void entry_001d353c_0x1d353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d353c_0x1d353c");
#endif

    switch (ctx->pc) {
        case 0x1d354cu: goto label_1d354c;
        default: break;
    }

    ctx->pc = 0x1d353cu;

    // 0x1d353c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3544: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D3544u;
    SET_GPR_U32(ctx, 31, 0x1D354Cu);
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D3544u, 0x1D354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D354Cu;
label_1d354c:
    // 0x1d354c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D354Cu;
    {
        const bool branch_taken_0x1d354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D354Cu;
        // 0x1d3550: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d354c) {
            ctx->pc = 0x1D35BCu;
            return;
        }
    }
    ctx->pc = 0x1D3554u;
    // 0x1d3554: 0x0  nop
    ctx->pc = 0x1d3554u;
    // NOP
    ctx->pc = 0x1d3558u;
}
