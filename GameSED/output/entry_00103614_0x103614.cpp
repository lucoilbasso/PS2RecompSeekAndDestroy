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

// Function: entry_00103614
// Address: 0x103614 - 0x103638
void entry_00103614_0x103614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103614_0x103614");
#endif

    switch (ctx->pc) {
        case 0x10362cu: goto label_10362c;
        default: break;
    }

    ctx->pc = 0x103614u;

    // 0x103614: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x103614u;
    {
        const bool branch_taken_0x103614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103614u;
        // 0x103618: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103614) {
            ctx->pc = 0x103638u;
            return;
        }
    }
    ctx->pc = 0x10361Cu;
    // 0x10361c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x10361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x103620: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x103620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x103624: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103624u;
    SET_GPR_U32(ctx, 31, 0x10362Cu);
    ctx->pc = 0x103628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103624u;
    // 0x103628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103624u, 0x10362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10362Cu;
label_10362c:
    // 0x10362c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10362Cu;
    {
        const bool branch_taken_0x10362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10362Cu;
        // 0x103630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10362c) {
            ctx->pc = 0x103648u;
            return;
        }
    }
    ctx->pc = 0x103634u;
    // 0x103634: 0x0  nop
    ctx->pc = 0x103634u;
    // NOP
    ctx->pc = 0x103638u;
}
