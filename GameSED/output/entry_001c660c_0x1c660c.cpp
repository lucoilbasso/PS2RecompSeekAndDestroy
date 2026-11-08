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

// Function: entry_001c660c
// Address: 0x1c660c - 0x1c6630
void entry_001c660c_0x1c660c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c660c_0x1c660c");
#endif

    switch (ctx->pc) {
        case 0x1c6624u: goto label_1c6624;
        default: break;
    }

    ctx->pc = 0x1c660cu;

    // 0x1c660c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1c660cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c6610: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6610u;
    {
        const bool branch_taken_0x1c6610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6610u;
        // 0x1c6614: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6610) {
            ctx->pc = 0x1C6630u;
            return;
        }
    }
    ctx->pc = 0x1C6618u;
    // 0x1c6618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c661c: 0xc071ec0  jal         func_1C7B00
    ctx->pc = 0x1C661Cu;
    SET_GPR_U32(ctx, 31, 0x1C6624u);
    ctx->pc = 0x1C6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C661Cu;
    // 0x1c6620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7B00u, 0x1C661Cu, 0x1C6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6624u;
label_1c6624:
    // 0x1c6624: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C6624u;
    {
        const bool branch_taken_0x1c6624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6624u;
        // 0x1c6628: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6624) {
            ctx->pc = 0x1C6714u;
            return;
        }
    }
    ctx->pc = 0x1C662Cu;
    // 0x1c662c: 0x0  nop
    ctx->pc = 0x1c662cu;
    // NOP
    ctx->pc = 0x1c6630u;
}
