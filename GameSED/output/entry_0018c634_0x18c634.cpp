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

// Function: entry_0018c634
// Address: 0x18c634 - 0x18c648
void entry_0018c634_0x18c634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c634_0x18c634");
#endif

    switch (ctx->pc) {
        case 0x18c644u: goto label_18c644;
        default: break;
    }

    ctx->pc = 0x18c634u;

    // 0x18c634: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C634u;
    {
        const bool branch_taken_0x18c634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c634) {
            ctx->pc = 0x18C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C634u;
            // 0x18c638: 0x8e020200  lw          $v0, 0x200($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C648u;
            return;
        }
    }
    ctx->pc = 0x18C63Cu;
    // 0x18c63c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C63Cu;
    SET_GPR_U32(ctx, 31, 0x18C644u);
    ctx->pc = 0x18C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C63Cu;
    // 0x18c640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C63Cu, 0x18C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C644u;
label_18c644:
    // 0x18c644: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    ctx->pc = 0x18c648u;
}
