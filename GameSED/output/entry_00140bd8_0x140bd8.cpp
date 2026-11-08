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

// Function: entry_00140bd8
// Address: 0x140bd8 - 0x140bec
void entry_00140bd8_0x140bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140bd8_0x140bd8");
#endif

    ctx->pc = 0x140bd8u;

    // 0x140bd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140BD8u;
    {
        const bool branch_taken_0x140bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD8u;
        // 0x140bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bd8) {
            ctx->pc = 0x140BECu;
            return;
        }
    }
    ctx->pc = 0x140BE0u;
    // 0x140be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140be4: 0xc0618da  jal         func_186368
    ctx->pc = 0x140BE4u;
    SET_GPR_U32(ctx, 31, 0x140BECu);
    ctx->pc = 0x140BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BE4u;
    // 0x140be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140BE4u, 0x140BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BECu;
}
