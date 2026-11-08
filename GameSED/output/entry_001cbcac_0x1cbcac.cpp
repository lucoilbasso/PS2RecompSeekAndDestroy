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

// Function: entry_001cbcac
// Address: 0x1cbcac - 0x1cbcc4
void entry_001cbcac_0x1cbcac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbcac_0x1cbcac");
#endif

    switch (ctx->pc) {
        case 0x1cbcc0u: goto label_1cbcc0;
        default: break;
    }

    ctx->pc = 0x1cbcacu;

    // 0x1cbcac: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBCACu;
    {
        const bool branch_taken_0x1cbcac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCACu;
        // 0x1cbcb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcac) {
            ctx->pc = 0x1CBCC8u;
            return;
        }
    }
    ctx->pc = 0x1CBCB4u;
    // 0x1cbcb4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbcb8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CBCB8u;
    SET_GPR_U32(ctx, 31, 0x1CBCC0u);
    ctx->pc = 0x1CBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCB8u;
    // 0x1cbcbc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CBCB8u, 0x1CBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCC0u;
label_1cbcc0:
    // 0x1cbcc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBCC0u;
    {
        const bool branch_taken_0x1cbcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcc0) {
            ctx->pc = 0x1CBCD0u;
            return;
        }
    }
    ctx->pc = 0x1CBCC8u;
}
