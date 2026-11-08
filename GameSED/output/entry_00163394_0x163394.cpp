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

// Function: entry_00163394
// Address: 0x163394 - 0x1633b0
void entry_00163394_0x163394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163394_0x163394");
#endif

    switch (ctx->pc) {
        case 0x1633a0u: goto label_1633a0;
        default: break;
    }

    ctx->pc = 0x163394u;

    // 0x163394: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x163394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x163398: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163398u;
    SET_GPR_U32(ctx, 31, 0x1633A0u);
    ctx->pc = 0x16339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163398u;
    // 0x16339c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163398u, 0x1633A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633A0u;
    {
        const bool branch_taken_0x1633a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633a0) {
            ctx->pc = 0x1633B0u;
            return;
        }
    }
    ctx->pc = 0x1633A8u;
    // 0x1633a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1633A8u;
    {
        const bool branch_taken_0x1633a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633A8u;
        // 0x1633ac: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633a8) {
            ctx->pc = 0x1633F0u;
            return;
        }
    }
    ctx->pc = 0x1633B0u;
}
