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

// Function: entry_00143644
// Address: 0x143644 - 0x143660
void entry_00143644_0x143644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143644_0x143644");
#endif

    switch (ctx->pc) {
        case 0x14364cu: goto label_14364c;
        default: break;
    }

    ctx->pc = 0x143644u;

    // 0x143644: 0xc068086  jal         func_1A0218
    ctx->pc = 0x143644u;
    SET_GPR_U32(ctx, 31, 0x14364Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x143644u, 0x14364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14364Cu;
label_14364c:
    // 0x14364c: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x14364cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x143650: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x143650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x143654: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x143654u;
    {
        const bool branch_taken_0x143654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x143658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143654u;
        // 0x143658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143654) {
            ctx->pc = 0x143660u;
            return;
        }
    }
    ctx->pc = 0x14365Cu;
    // 0x14365c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x143660u;
}
