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

// Function: entry_00174d48
// Address: 0x174d48 - 0x174d58
void entry_00174d48_0x174d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d48_0x174d48");
#endif

    switch (ctx->pc) {
        case 0x174d50u: goto label_174d50;
        default: break;
    }

    ctx->pc = 0x174d48u;

    // 0x174d48: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x174D48u;
    SET_GPR_U32(ctx, 31, 0x174D50u);
    ctx->pc = 0x174D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D48u;
    // 0x174d4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x174D48u, 0x174D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D50u;
label_174d50:
    // 0x174d50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x174D50u;
    {
        const bool branch_taken_0x174d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D50u;
        // 0x174d54: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d50) {
            ctx->pc = 0x174D90u;
            return;
        }
    }
    ctx->pc = 0x174D58u;
}
