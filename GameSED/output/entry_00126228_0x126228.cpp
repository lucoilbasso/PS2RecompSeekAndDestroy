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

// Function: entry_00126228
// Address: 0x126228 - 0x12624c
void entry_00126228_0x126228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126228_0x126228");
#endif

    switch (ctx->pc) {
        case 0x126230u: goto label_126230;
        default: break;
    }

    ctx->pc = 0x126228u;

    // 0x126228: 0xc068086  jal         func_1A0218
    ctx->pc = 0x126228u;
    SET_GPR_U32(ctx, 31, 0x126230u);
    ctx->pc = 0x12622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126228u;
    // 0x12622c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x126228u, 0x126230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126230u;
label_126230:
    // 0x126230: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126230u;
        // 0x126234: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126230) {
            ctx->pc = 0x12624Cu;
            return;
        }
    }
    ctx->pc = 0x126238u;
    // 0x126238: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x126238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12623c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126240: 0x24a55d40  addiu       $a1, $a1, 0x5D40
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
    // 0x126244: 0xc068186  jal         func_1A0618
    ctx->pc = 0x126244u;
    SET_GPR_U32(ctx, 31, 0x12624Cu);
    ctx->pc = 0x126248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126244u;
    // 0x126248: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x126244u, 0x12624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12624Cu;
}
