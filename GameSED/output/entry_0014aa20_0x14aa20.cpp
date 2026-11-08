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

// Function: entry_0014aa20
// Address: 0x14aa20 - 0x14aa38
void entry_0014aa20_0x14aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa20_0x14aa20");
#endif

    switch (ctx->pc) {
        case 0x14aa34u: goto label_14aa34;
        default: break;
    }

    ctx->pc = 0x14aa20u;

    // 0x14aa20: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x14aa24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AA24u;
    {
        const bool branch_taken_0x14aa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa24) {
            ctx->pc = 0x14AA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA24u;
            // 0x14aa28: 0x8e2401b8  lw          $a0, 0x1B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA38u;
            return;
        }
    }
    ctx->pc = 0x14AA2Cu;
    // 0x14aa2c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14AA2Cu;
    SET_GPR_U32(ctx, 31, 0x14AA34u);
    ctx->pc = 0x14AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA2Cu;
    // 0x14aa30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AA2Cu, 0x14AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA34u;
label_14aa34:
    // 0x14aa34: 0x8e2401b8  lw          $a0, 0x1B8($s1)
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    ctx->pc = 0x14aa38u;
}
