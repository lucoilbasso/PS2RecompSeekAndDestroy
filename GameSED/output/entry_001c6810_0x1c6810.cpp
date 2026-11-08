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

// Function: entry_001c6810
// Address: 0x1c6810 - 0x1c6848
void entry_001c6810_0x1c6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6810_0x1c6810");
#endif

    switch (ctx->pc) {
        case 0x1c6818u: goto label_1c6818;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c683cu: goto label_1c683c;
        default: break;
    }

    ctx->pc = 0x1c6810u;

    // 0x1c6810: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6810u;
    SET_GPR_U32(ctx, 31, 0x1C6818u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6810u, 0x1C6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6818u;
label_1c6818:
    // 0x1c6818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c681c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c681cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6824: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6824u;
    SET_GPR_U32(ctx, 31, 0x1C682Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6824u, 0x1C682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C682Cu;
label_1c682c:
    // 0x1c682c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c682cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6834: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6834u;
    SET_GPR_U32(ctx, 31, 0x1C683Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6834u, 0x1C683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C683Cu;
label_1c683c:
    // 0x1c683c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c683cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6840: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6840u;
        // 0x1c6844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C6848u;
}
