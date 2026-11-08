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

// Function: entry_001c10cc
// Address: 0x1c10cc - 0x1c10e4
void entry_001c10cc_0x1c10cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c10cc_0x1c10cc");
#endif

    switch (ctx->pc) {
        case 0x1c10d4u: goto label_1c10d4;
        default: break;
    }

    ctx->pc = 0x1c10ccu;

    // 0x1c10cc: 0xc070332  jal         func_1C0CC8
    ctx->pc = 0x1C10CCu;
    SET_GPR_U32(ctx, 31, 0x1C10D4u);
    ctx->pc = 0x1C10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10CCu;
    // 0x1c10d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CC8u, 0x1C10CCu, 0x1C10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10D4u;
label_1c10d4:
    // 0x1c10d4: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c10d8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C10D8u;
    {
        const bool branch_taken_0x1c10d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10D8u;
        // 0x1c10dc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10d8) {
            ctx->pc = 0x1C1140u;
            return;
        }
    }
    ctx->pc = 0x1C10E0u;
    // 0x1c10e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1c10e4u;
}
