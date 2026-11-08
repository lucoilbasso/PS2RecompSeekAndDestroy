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

// Function: entry_001c3610
// Address: 0x1c3610 - 0x1c361c
void entry_001c3610_0x1c3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3610_0x1c3610");
#endif

    switch (ctx->pc) {
        case 0x1c3618u: goto label_1c3618;
        default: break;
    }

    ctx->pc = 0x1c3610u;

    // 0x1c3610: 0xc070bda  jal         func_1C2F68
    ctx->pc = 0x1C3610u;
    SET_GPR_U32(ctx, 31, 0x1C3618u);
    ctx->pc = 0x1C3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3610u;
    // 0x1c3614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F68u, 0x1C3610u, 0x1C3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3618u;
label_1c3618:
    // 0x1c3618: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x1c361cu;
}
