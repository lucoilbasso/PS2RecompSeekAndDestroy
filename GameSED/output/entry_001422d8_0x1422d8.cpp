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

// Function: entry_001422d8
// Address: 0x1422d8 - 0x1422f8
void entry_001422d8_0x1422d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001422d8_0x1422d8");
#endif

    switch (ctx->pc) {
        case 0x1422e0u: goto label_1422e0;
        default: break;
    }

    ctx->pc = 0x1422d8u;

    // 0x1422d8: 0xc04ff88  jal         func_13FE20
    ctx->pc = 0x1422D8u;
    SET_GPR_U32(ctx, 31, 0x1422E0u);
    ctx->pc = 0x13FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE20u, 0x1422D8u, 0x1422E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422E0u;
label_1422e0:
    // 0x1422e0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1422E0u;
    {
        const bool branch_taken_0x1422e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422E0u;
        // 0x1422e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422e0) {
            ctx->pc = 0x1422F8u;
            return;
        }
    }
    ctx->pc = 0x1422E8u;
    // 0x1422e8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1422e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1422ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1422ECu;
    {
        const bool branch_taken_0x1422ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422ECu;
        // 0x1422f0: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422ec) {
            ctx->pc = 0x142304u;
            return;
        }
    }
    ctx->pc = 0x1422F4u;
    // 0x1422f4: 0x0  nop
    ctx->pc = 0x1422f4u;
    // NOP
    ctx->pc = 0x1422f8u;
}
