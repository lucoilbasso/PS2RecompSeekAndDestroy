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

// Function: entry_001d59dc
// Address: 0x1d59dc - 0x1d5a00
void entry_001d59dc_0x1d59dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d59dc_0x1d59dc");
#endif

    switch (ctx->pc) {
        case 0x1d59fcu: goto label_1d59fc;
        default: break;
    }

    ctx->pc = 0x1d59dcu;

    // 0x1d59dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D59DCu;
    {
        const bool branch_taken_0x1d59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59DCu;
        // 0x1d59e0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59dc) {
            ctx->pc = 0x1D5A00u;
            return;
        }
    }
    ctx->pc = 0x1D59E4u;
    // 0x1d59e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d59e8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1d59ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d59f0: 0x8cc6c66c  lw          $a2, -0x3994($a2)
    ctx->pc = 0x1d59f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952556)));
    // 0x1d59f4: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D59F4u;
    SET_GPR_U32(ctx, 31, 0x1D59FCu);
    ctx->pc = 0x1D59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D59F4u;
    // 0x1d59f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D59F4u, 0x1D59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59FCu;
label_1d59fc:
    // 0x1d59fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d59fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5a00u;
}
