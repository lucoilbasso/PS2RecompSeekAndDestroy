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

// Function: entry_001d4298
// Address: 0x1d4298 - 0x1d42ac
void entry_001d4298_0x1d4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4298_0x1d4298");
#endif

    switch (ctx->pc) {
        case 0x1d42a8u: goto label_1d42a8;
        default: break;
    }

    ctx->pc = 0x1d4298u;

    // 0x1d4298: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4298u;
    {
        const bool branch_taken_0x1d4298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4298) {
            ctx->pc = 0x1D429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4298u;
            // 0x1d429c: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D42ACu;
            return;
        }
    }
    ctx->pc = 0x1D42A0u;
    // 0x1d42a0: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D42A0u;
    SET_GPR_U32(ctx, 31, 0x1D42A8u);
    ctx->pc = 0x1D42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42A0u;
    // 0x1d42a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D42A0u, 0x1D42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42A8u;
label_1d42a8:
    // 0x1d42a8: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x1d42a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1d42acu;
}
