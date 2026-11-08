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

// Function: entry_001d8bcc
// Address: 0x1d8bcc - 0x1d8be0
void entry_001d8bcc_0x1d8bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8bcc_0x1d8bcc");
#endif

    switch (ctx->pc) {
        case 0x1d8bdcu: goto label_1d8bdc;
        default: break;
    }

    ctx->pc = 0x1d8bccu;

    // 0x1d8bcc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BCCu;
    {
        const bool branch_taken_0x1d8bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bcc) {
            ctx->pc = 0x1D8BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BCCu;
            // 0x1d8bd0: 0x8e240328  lw          $a0, 0x328($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BE0u;
            return;
        }
    }
    ctx->pc = 0x1D8BD4u;
    // 0x1d8bd4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D8BD4u;
    SET_GPR_U32(ctx, 31, 0x1D8BDCu);
    ctx->pc = 0x1D8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BD4u;
    // 0x1d8bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BD4u, 0x1D8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BDCu;
label_1d8bdc:
    // 0x1d8bdc: 0x8e240328  lw          $a0, 0x328($s1)
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    ctx->pc = 0x1d8be0u;
}
