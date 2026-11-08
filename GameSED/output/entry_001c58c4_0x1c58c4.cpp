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

// Function: entry_001c58c4
// Address: 0x1c58c4 - 0x1c58d4
void entry_001c58c4_0x1c58c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c58c4_0x1c58c4");
#endif

    switch (ctx->pc) {
        case 0x1c58d0u: goto label_1c58d0;
        default: break;
    }

    ctx->pc = 0x1c58c4u;

    // 0x1c58c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c58c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C58C8u;
    SET_GPR_U32(ctx, 31, 0x1C58D0u);
    ctx->pc = 0x1C58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58C8u;
    // 0x1c58cc: 0x8c44ddfc  lw          $a0, -0x2204($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C58C8u, 0x1C58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58D0u;
label_1c58d0:
    // 0x1c58d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c58d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c58d4u;
}
