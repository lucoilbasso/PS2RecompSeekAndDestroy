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

// Function: entry_0014aa38
// Address: 0x14aa38 - 0x14aa50
void entry_0014aa38_0x14aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa38_0x14aa38");
#endif

    switch (ctx->pc) {
        case 0x14aa48u: goto label_14aa48;
        default: break;
    }

    ctx->pc = 0x14aa38u;

    // 0x14aa38: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14AA38u;
    {
        const bool branch_taken_0x14aa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa38) {
            ctx->pc = 0x14AA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA38u;
            // 0x14aa3c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA5Cu;
            return;
        }
    }
    ctx->pc = 0x14AA40u;
    // 0x14aa40: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14AA40u;
    SET_GPR_U32(ctx, 31, 0x14AA48u);
    ctx->pc = 0x14AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA40u;
    // 0x14aa44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AA40u, 0x14AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA48u;
label_14aa48:
    // 0x14aa48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AA5Cu;
            return;
        }
    }
    ctx->pc = 0x14AA50u;
}
