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

// Function: caseD_11
// Address: 0x169c50 - 0x169c60
void caseD_11_0x169c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x169c50");
#endif

    ctx->pc = 0x169c50u;

    // 0x169c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x169c58: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C58u;
        // 0x169c5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c58) {
            ctx->pc = 0x16A07Cu;
            return;
        }
    }
    ctx->pc = 0x169C60u;
}
