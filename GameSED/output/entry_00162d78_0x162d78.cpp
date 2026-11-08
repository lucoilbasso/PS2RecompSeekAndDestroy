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

// Function: entry_00162d78
// Address: 0x162d78 - 0x162d94
void entry_00162d78_0x162d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162d78_0x162d78");
#endif

    switch (ctx->pc) {
        case 0x162d90u: goto label_162d90;
        default: break;
    }

    ctx->pc = 0x162d78u;

    // 0x162d78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162d7c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x162d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x162d80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162D80u;
    {
        const bool branch_taken_0x162d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D80u;
        // 0x162d84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d80) {
            ctx->pc = 0x162D94u;
            return;
        }
    }
    ctx->pc = 0x162D88u;
    // 0x162d88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D88u;
    SET_GPR_U32(ctx, 31, 0x162D90u);
    ctx->pc = 0x162D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D88u;
    // 0x162d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D88u, 0x162D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D90u;
label_162d90:
    // 0x162d90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x162d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162d94u;
}
