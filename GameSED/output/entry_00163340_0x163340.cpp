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

// Function: entry_00163340
// Address: 0x163340 - 0x163358
void entry_00163340_0x163340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163340_0x163340");
#endif

    switch (ctx->pc) {
        case 0x163348u: goto label_163348;
        default: break;
    }

    ctx->pc = 0x163340u;

    // 0x163340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163340u;
    SET_GPR_U32(ctx, 31, 0x163348u);
    ctx->pc = 0x163344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163340u;
    // 0x163344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163340u, 0x163348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163348u;
label_163348:
    // 0x163348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163348u;
    {
        const bool branch_taken_0x163348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163348) {
            ctx->pc = 0x163358u;
            return;
        }
    }
    ctx->pc = 0x163350u;
    // 0x163350: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163350u;
    {
        const bool branch_taken_0x163350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163350u;
        // 0x163354: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163350) {
            ctx->pc = 0x163394u;
            return;
        }
    }
    ctx->pc = 0x163358u;
}
