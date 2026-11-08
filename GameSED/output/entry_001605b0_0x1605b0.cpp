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

// Function: entry_001605b0
// Address: 0x1605b0 - 0x1605d4
void entry_001605b0_0x1605b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605b0_0x1605b0");
#endif

    ctx->pc = 0x1605b0u;

    // 0x1605b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1605b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1605b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1605B8u;
    {
        const bool branch_taken_0x1605b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605B8u;
        // 0x1605bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605b8) {
            ctx->pc = 0x1605D4u;
            return;
        }
    }
    ctx->pc = 0x1605C0u;
    // 0x1605c0: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1605c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1605c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1605C4u;
    {
        const bool branch_taken_0x1605c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605C4u;
        // 0x1605c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605c4) {
            ctx->pc = 0x1605D4u;
            return;
        }
    }
    ctx->pc = 0x1605CCu;
    // 0x1605cc: 0xc056a3e  jal         func_15A8F8
    ctx->pc = 0x1605CCu;
    SET_GPR_U32(ctx, 31, 0x1605D4u);
    ctx->pc = 0x1605D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605CCu;
    // 0x1605d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8F8u, 0x1605CCu, 0x1605D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605D4u;
}
