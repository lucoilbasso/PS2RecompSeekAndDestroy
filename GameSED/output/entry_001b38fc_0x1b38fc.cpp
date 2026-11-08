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

// Function: entry_001b38fc
// Address: 0x1b38fc - 0x1b3910
void entry_001b38fc_0x1b38fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b38fc_0x1b38fc");
#endif

    switch (ctx->pc) {
        case 0x1b3904u: goto label_1b3904;
        case 0x1b390cu: goto label_1b390c;
        default: break;
    }

    ctx->pc = 0x1b38fcu;

    // 0x1b38fc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B38FCu;
    SET_GPR_U32(ctx, 31, 0x1B3904u);
    ctx->pc = 0x1B3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38FCu;
    // 0x1b3900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B38FCu, 0x1B3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3904u;
label_1b3904:
    // 0x1b3904: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3904u;
    SET_GPR_U32(ctx, 31, 0x1B390Cu);
    ctx->pc = 0x1B3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3904u;
    // 0x1b3908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3904u, 0x1B390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B390Cu;
label_1b390c:
    // 0x1b390c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b3910u;
}
