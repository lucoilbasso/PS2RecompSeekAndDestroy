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

// Function: entry_001bdda8
// Address: 0x1bdda8 - 0x1bddc4
void entry_001bdda8_0x1bdda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdda8_0x1bdda8");
#endif

    switch (ctx->pc) {
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddc0u: goto label_1bddc0;
        default: break;
    }

    ctx->pc = 0x1bdda8u;

    // 0x1bdda8: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDDA8u;
    SET_GPR_U32(ctx, 31, 0x1BDDB0u);
    ctx->pc = 0x1BDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDA8u;
    // 0x1bddac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDDA8u, 0x1BDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDDB0u;
    {
        const bool branch_taken_0x1bddb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDB0u;
        // 0x1bddb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddb0) {
            ctx->pc = 0x1BDDC4u;
            return;
        }
    }
    ctx->pc = 0x1BDDB8u;
    // 0x1bddb8: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDDB8u;
    SET_GPR_U32(ctx, 31, 0x1BDDC0u);
    ctx->pc = 0x1BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB8u;
    // 0x1bddbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDDB8u, 0x1BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDC0u;
label_1bddc0:
    // 0x1bddc0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1bddc4u;
}
