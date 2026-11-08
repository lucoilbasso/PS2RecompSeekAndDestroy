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

// Function: entry_001c2bb4
// Address: 0x1c2bb4 - 0x1c2bc8
void entry_001c2bb4_0x1c2bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2bb4_0x1c2bb4");
#endif

    switch (ctx->pc) {
        case 0x1c2bc0u: goto label_1c2bc0;
        default: break;
    }

    ctx->pc = 0x1c2bb4u;

    // 0x1c2bb4: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c2bb8: 0xc070cec  jal         func_1C33B0
    ctx->pc = 0x1C2BB8u;
    SET_GPR_U32(ctx, 31, 0x1C2BC0u);
    ctx->pc = 0x1C2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BB8u;
    // 0x1c2bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33B0u, 0x1C2BB8u, 0x1C2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BC0u;
label_1c2bc0:
    // 0x1c2bc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2BC0u;
    {
        const bool branch_taken_0x1c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC0u;
        // 0x1c2bc4: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc0) {
            ctx->pc = 0x1C2BF0u;
            return;
        }
    }
    ctx->pc = 0x1C2BC8u;
}
