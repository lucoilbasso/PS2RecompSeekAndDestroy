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

// Function: entry_001a43b4
// Address: 0x1a43b4 - 0x1a43d4
void entry_001a43b4_0x1a43b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a43b4_0x1a43b4");
#endif

    switch (ctx->pc) {
        case 0x1a43ccu: goto label_1a43cc;
        default: break;
    }

    ctx->pc = 0x1a43b4u;

    // 0x1a43b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a43b8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a43bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A43BCu;
    {
        const bool branch_taken_0x1a43bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43BCu;
        // 0x1a43c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43bc) {
            ctx->pc = 0x1A43D4u;
            return;
        }
    }
    ctx->pc = 0x1A43C4u;
    // 0x1a43c4: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A43C4u;
    SET_GPR_U32(ctx, 31, 0x1A43CCu);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A43C4u, 0x1A43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43CCu;
label_1a43cc:
    // 0x1a43cc: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A43CCu;
    SET_GPR_U32(ctx, 31, 0x1A43D4u);
    ctx->pc = 0x1A43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43CCu;
    // 0x1a43d0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A43CCu, 0x1A43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43D4u;
}
