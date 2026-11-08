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

// Function: entry_0014b148
// Address: 0x14b148 - 0x14b158
void entry_0014b148_0x14b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b148_0x14b148");
#endif

    switch (ctx->pc) {
        case 0x14b150u: goto label_14b150;
        default: break;
    }

    ctx->pc = 0x14b148u;

    // 0x14b148: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x14B148u;
    SET_GPR_U32(ctx, 31, 0x14B150u);
    ctx->pc = 0x14B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B148u;
    // 0x14b14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x14B148u, 0x14B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b154: 0x36224000  ori         $v0, $s1, 0x4000
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x14b158u;
}
