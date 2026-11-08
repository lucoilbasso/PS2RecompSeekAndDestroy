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

// Function: entry_001c6630
// Address: 0x1c6630 - 0x1c6658
void entry_001c6630_0x1c6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6630_0x1c6630");
#endif

    switch (ctx->pc) {
        case 0x1c664cu: goto label_1c664c;
        default: break;
    }

    ctx->pc = 0x1c6630u;

    // 0x1c6630: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x1c6630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x1c6634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6638: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1c6638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c663c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C663Cu;
    {
        const bool branch_taken_0x1c663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c663c) {
            ctx->pc = 0x1C6658u;
            return;
        }
    }
    ctx->pc = 0x1C6644u;
    // 0x1c6644: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6644u;
    SET_GPR_U32(ctx, 31, 0x1C664Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6644u, 0x1C664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C664Cu;
label_1c664c:
    // 0x1c664c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C664Cu;
    {
        const bool branch_taken_0x1c664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C664Cu;
        // 0x1c6650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c664c) {
            ctx->pc = 0x1C6714u;
            return;
        }
    }
    ctx->pc = 0x1C6654u;
    // 0x1c6654: 0x0  nop
    ctx->pc = 0x1c6654u;
    // NOP
    ctx->pc = 0x1c6658u;
}
