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

// Function: caseD_0
// Address: 0x1123f8 - 0x11240c
void caseD_0_0x1123f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1123f8");
#endif

    ctx->pc = 0x1123f8u;

    // 0x1123f8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1123F8u;
    {
        const bool branch_taken_0x1123f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123F8u;
        // 0x1123fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123f8) {
            ctx->pc = 0x11240Cu;
            return;
        }
    }
    ctx->pc = 0x112400u;
    // 0x112400: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112404: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x112404u;
    SET_GPR_U32(ctx, 31, 0x11240Cu);
    ctx->pc = 0x112408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112404u;
    // 0x112408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x112404u, 0x11240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11240Cu;
}
