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

// Function: entry_0010728c
// Address: 0x10728c - 0x1072a0
void entry_0010728c_0x10728c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010728c_0x10728c");
#endif

    switch (ctx->pc) {
        case 0x10729cu: goto label_10729c;
        default: break;
    }

    ctx->pc = 0x10728cu;

    // 0x10728c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107294: 0xc0618c2  jal         func_186308
    ctx->pc = 0x107294u;
    SET_GPR_U32(ctx, 31, 0x10729Cu);
    ctx->pc = 0x107298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107294u;
    // 0x107298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x107294u, 0x10729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10729Cu;
label_10729c:
    // 0x10729c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10729cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1072a0u;
}
