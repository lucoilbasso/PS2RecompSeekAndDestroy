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

// Function: entry_0017eaf0
// Address: 0x17eaf0 - 0x17eb04
void entry_0017eaf0_0x17eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eaf0_0x17eaf0");
#endif

    switch (ctx->pc) {
        case 0x17eb00u: goto label_17eb00;
        default: break;
    }

    ctx->pc = 0x17eaf0u;

    // 0x17eaf0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAF0u;
    {
        const bool branch_taken_0x17eaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaf0) {
            ctx->pc = 0x17EAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAF0u;
            // 0x17eaf4: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EB04u;
            return;
        }
    }
    ctx->pc = 0x17EAF8u;
    // 0x17eaf8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAF8u;
    SET_GPR_U32(ctx, 31, 0x17EB00u);
    ctx->pc = 0x17EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAF8u;
    // 0x17eafc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAF8u, 0x17EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB00u;
label_17eb00:
    // 0x17eb00: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x17eb04u;
}
