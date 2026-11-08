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

// Function: entry_001b9e88
// Address: 0x1b9e88 - 0x1b9e9c
void entry_001b9e88_0x1b9e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9e88_0x1b9e88");
#endif

    ctx->pc = 0x1b9e88u;

    // 0x1b9e88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9E88u;
    {
        const bool branch_taken_0x1b9e88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E88u;
        // 0x1b9e8c: 0x2684aed8  addiu       $a0, $s4, -0x5128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e88) {
            ctx->pc = 0x1B9E9Cu;
            return;
        }
    }
    ctx->pc = 0x1B9E90u;
    // 0x1b9e90: 0x8e25d680  lw          $a1, -0x2980($s1)
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956672)));
    // 0x1b9e94: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B9E94u;
    SET_GPR_U32(ctx, 31, 0x1B9E9Cu);
    ctx->pc = 0x1B9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E94u;
    // 0x1b9e98: 0x8e06c0d8  lw          $a2, -0x3F28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B9E94u, 0x1B9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E9Cu;
}
