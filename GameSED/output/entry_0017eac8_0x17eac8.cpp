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

// Function: entry_0017eac8
// Address: 0x17eac8 - 0x17eadc
void entry_0017eac8_0x17eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eac8_0x17eac8");
#endif

    switch (ctx->pc) {
        case 0x17ead8u: goto label_17ead8;
        default: break;
    }

    ctx->pc = 0x17eac8u;

    // 0x17eac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAC8u;
    {
        const bool branch_taken_0x17eac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eac8) {
            ctx->pc = 0x17EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAC8u;
            // 0x17eacc: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EADCu;
            return;
        }
    }
    ctx->pc = 0x17EAD0u;
    // 0x17ead0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EAD0u;
    SET_GPR_U32(ctx, 31, 0x17EAD8u);
    ctx->pc = 0x17EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAD0u;
    // 0x17ead4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EAD0u, 0x17EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAD8u;
label_17ead8:
    // 0x17ead8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x17eadcu;
}
