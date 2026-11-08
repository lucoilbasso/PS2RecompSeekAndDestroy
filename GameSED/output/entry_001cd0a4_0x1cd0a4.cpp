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

// Function: entry_001cd0a4
// Address: 0x1cd0a4 - 0x1cd0c8
void entry_001cd0a4_0x1cd0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd0a4_0x1cd0a4");
#endif

    switch (ctx->pc) {
        case 0x1cd0bcu: goto label_1cd0bc;
        default: break;
    }

    ctx->pc = 0x1cd0a4u;

label_1cd0a4:
    // 0x1cd0a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1cd0a8:
    if (ctx->pc == 0x1CD0A8u) {
        ctx->pc = 0x1CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A4u;
        // 0x1cd0a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0ACu;
        goto label_1cd0ac;
    }
    ctx->pc = 0x1CD0A4u;
    {
        const bool branch_taken_0x1cd0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0A4u;
        // 0x1cd0a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0a4) {
            ctx->pc = 0x1CD0C8u;
            return;
        }
    }
    ctx->pc = 0x1CD0ACu;
label_1cd0ac:
    // 0x1cd0ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd0b0:
    // 0x1cd0b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cd0b4:
    // 0x1cd0b4: 0x40f809  jalr        $v0
label_1cd0b8:
    if (ctx->pc == 0x1CD0B8u) {
        ctx->pc = 0x1CD0BCu;
        goto label_1cd0bc;
    }
    ctx->pc = 0x1CD0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD0BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0B4u, 0x1CD0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD0BCu;
label_1cd0bc:
    // 0x1cd0bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cd0c0:
    if (ctx->pc == 0x1CD0C0u) {
        ctx->pc = 0x1CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0BCu;
        // 0x1cd0c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0C4u;
        goto label_1cd0c4;
    }
    ctx->pc = 0x1CD0BCu;
    {
        const bool branch_taken_0x1cd0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0BCu;
        // 0x1cd0c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0bc) {
            ctx->pc = 0x1CD0D4u;
            return;
        }
    }
    ctx->pc = 0x1CD0C4u;
label_1cd0c4:
    // 0x1cd0c4: 0x0  nop
    ctx->pc = 0x1cd0c4u;
    // NOP
    ctx->pc = 0x1cd0c8u;
}
