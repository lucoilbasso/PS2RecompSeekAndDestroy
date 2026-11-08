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

// Function: entry_001d8bb8
// Address: 0x1d8bb8 - 0x1d8bcc
void entry_001d8bb8_0x1d8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8bb8_0x1d8bb8");
#endif

    switch (ctx->pc) {
        case 0x1d8bc8u: goto label_1d8bc8;
        default: break;
    }

    ctx->pc = 0x1d8bb8u;

    // 0x1d8bb8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BB8u;
    {
        const bool branch_taken_0x1d8bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bb8) {
            ctx->pc = 0x1D8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BB8u;
            // 0x1d8bbc: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BCCu;
            return;
        }
    }
    ctx->pc = 0x1D8BC0u;
    // 0x1d8bc0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D8BC0u;
    SET_GPR_U32(ctx, 31, 0x1D8BC8u);
    ctx->pc = 0x1D8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BC0u;
    // 0x1d8bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BC0u, 0x1D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BC8u;
label_1d8bc8:
    // 0x1d8bc8: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    ctx->pc = 0x1d8bccu;
}
