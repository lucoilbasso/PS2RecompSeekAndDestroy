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

// Function: entry_001bb668
// Address: 0x1bb668 - 0x1bb688
void entry_001bb668_0x1bb668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb668_0x1bb668");
#endif

    switch (ctx->pc) {
        case 0x1bb678u: goto label_1bb678;
        default: break;
    }

    ctx->pc = 0x1bb668u;

    // 0x1bb668: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb66c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bb66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb670: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BB670u;
    SET_GPR_U32(ctx, 31, 0x1BB678u);
    ctx->pc = 0x1BB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB670u;
    // 0x1bb674: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BB670u, 0x1BB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB678u;
label_1bb678:
    // 0x1bb678: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BB678u;
    {
        const bool branch_taken_0x1bb678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB678u;
        // 0x1bb67c: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb678) {
            ctx->pc = 0x1BB724u;
            return;
        }
    }
    ctx->pc = 0x1BB680u;
    // 0x1bb680: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB680u;
    {
        const bool branch_taken_0x1bb680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB680u;
        // 0x1bb684: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb680) {
            ctx->pc = 0x1BB69Cu;
            return;
        }
    }
    ctx->pc = 0x1BB688u;
}
