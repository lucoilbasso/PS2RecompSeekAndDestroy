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

// Function: entry_001c3f88
// Address: 0x1c3f88 - 0x1c3fa8
void entry_001c3f88_0x1c3f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f88_0x1c3f88");
#endif

    switch (ctx->pc) {
        case 0x1c3fa0u: goto label_1c3fa0;
        default: break;
    }

    ctx->pc = 0x1c3f88u;

    // 0x1c3f88: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3F88u;
    {
        const bool branch_taken_0x1c3f88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F88u;
        // 0x1c3f8c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f88) {
            ctx->pc = 0x1C3FA8u;
            return;
        }
    }
    ctx->pc = 0x1C3F90u;
    // 0x1c3f90: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1c3f94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f98: 0xc070e1c  jal         func_1C3870
    ctx->pc = 0x1C3F98u;
    SET_GPR_U32(ctx, 31, 0x1C3FA0u);
    ctx->pc = 0x1C3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F98u;
    // 0x1c3f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3870u, 0x1C3F98u, 0x1C3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FA0u;
label_1c3fa0:
    // 0x1c3fa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3FA0u;
    {
        const bool branch_taken_0x1c3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA0u;
        // 0x1c3fa4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa0) {
            ctx->pc = 0x1C3FBCu;
            return;
        }
    }
    ctx->pc = 0x1C3FA8u;
}
