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

// Function: entry_001c24c8
// Address: 0x1c24c8 - 0x1c24dc
void entry_001c24c8_0x1c24c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c24c8_0x1c24c8");
#endif

    switch (ctx->pc) {
        case 0x1c24d0u: goto label_1c24d0;
        case 0x1c24d8u: goto label_1c24d8;
        default: break;
    }

    ctx->pc = 0x1c24c8u;

    // 0x1c24c8: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C24C8u;
    SET_GPR_U32(ctx, 31, 0x1C24D0u);
    ctx->pc = 0x1C24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24C8u;
    // 0x1c24cc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C24C8u, 0x1C24D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D0u;
label_1c24d0:
    // 0x1c24d0: 0xc07084a  jal         func_1C2128
    ctx->pc = 0x1C24D0u;
    SET_GPR_U32(ctx, 31, 0x1C24D8u);
    ctx->pc = 0x1C24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24D0u;
    // 0x1c24d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2128u, 0x1C24D0u, 0x1C24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24D8u;
label_1c24d8:
    // 0x1c24d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c24d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c24dcu;
}
