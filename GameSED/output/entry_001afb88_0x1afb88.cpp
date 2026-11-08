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

// Function: entry_001afb88
// Address: 0x1afb88 - 0x1afbac
void entry_001afb88_0x1afb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb88_0x1afb88");
#endif

    ctx->pc = 0x1afb88u;

label_1afb88:
    // 0x1afb88: 0x42000039  di
    ctx->pc = 0x1afb88u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1afb8c: 0x40f  sync.p
    ctx->pc = 0x1afb8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afb90: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1afb94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1afb98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1afb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1afb9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFB9Cu;
    {
        const bool branch_taken_0x1afb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb9c) {
            ctx->pc = 0x1AFB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFBA4u;
    // 0x1afba4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFBA4u;
    {
        const bool branch_taken_0x1afba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBA4u;
        // 0x1afba8: 0x8e42a96c  lw          $v0, -0x5694($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afba4) {
            ctx->pc = 0x1AFBB0u;
            return;
        }
    }
    ctx->pc = 0x1AFBACu;
}
