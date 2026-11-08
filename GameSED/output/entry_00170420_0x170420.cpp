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

// Function: entry_00170420
// Address: 0x170420 - 0x170440
void entry_00170420_0x170420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170420_0x170420");
#endif

    switch (ctx->pc) {
        case 0x170428u: goto label_170428;
        default: break;
    }

    ctx->pc = 0x170420u;

    // 0x170420: 0xc05d304  jal         func_174C10
    ctx->pc = 0x170420u;
    SET_GPR_U32(ctx, 31, 0x170428u);
    ctx->pc = 0x174C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C10u, 0x170420u, 0x170428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170428u;
label_170428:
    // 0x170428: 0x8f828bd8  lw          $v0, -0x7428($gp)
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x17042c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17042Cu;
    {
        const bool branch_taken_0x17042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17042c) {
            ctx->pc = 0x170440u;
            return;
        }
    }
    ctx->pc = 0x170434u;
    // 0x170434: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170438: 0xc05c40a  jal         func_171028
    ctx->pc = 0x170438u;
    SET_GPR_U32(ctx, 31, 0x170440u);
    ctx->pc = 0x17043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170438u;
    // 0x17043c: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171028u, 0x170438u, 0x170440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170440u;
}
