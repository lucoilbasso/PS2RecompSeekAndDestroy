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

// Function: entry_001b8518
// Address: 0x1b8518 - 0x1b8538
void entry_001b8518_0x1b8518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8518_0x1b8518");
#endif

    switch (ctx->pc) {
        case 0x1b8534u: goto label_1b8534;
        default: break;
    }

    ctx->pc = 0x1b8518u;

    // 0x1b8518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b851c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b852c: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B852Cu;
    SET_GPR_U32(ctx, 31, 0x1B8534u);
    ctx->pc = 0x1B8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B852Cu;
    // 0x1b8530: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B852Cu, 0x1B8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8534u;
label_1b8534:
    // 0x1b8534: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1b8534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    ctx->pc = 0x1b8538u;
}
