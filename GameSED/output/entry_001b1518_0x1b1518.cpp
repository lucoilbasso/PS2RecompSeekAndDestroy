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

// Function: entry_001b1518
// Address: 0x1b1518 - 0x1b1530
void entry_001b1518_0x1b1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1518_0x1b1518");
#endif

    switch (ctx->pc) {
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1528u: goto label_1b1528;
        default: break;
    }

    ctx->pc = 0x1b1518u;

    // 0x1b1518: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B1518u;
    SET_GPR_U32(ctx, 31, 0x1B1520u);
    ctx->pc = 0x1B151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1518u;
    // 0x1b151c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B1518u, 0x1B1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1520u;
label_1b1520:
    // 0x1b1520: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B1520u;
    SET_GPR_U32(ctx, 31, 0x1B1528u);
    ctx->pc = 0x1B1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1520u;
    // 0x1b1524: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B1520u, 0x1B1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1528u;
label_1b1528:
    // 0x1b1528: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1528u;
    {
        const bool branch_taken_0x1b1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1528u;
        // 0x1b152c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1528) {
            ctx->pc = 0x1B156Cu;
            return;
        }
    }
    ctx->pc = 0x1B1530u;
}
