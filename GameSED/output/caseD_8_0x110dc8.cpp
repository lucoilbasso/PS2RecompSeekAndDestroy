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

// Function: caseD_8
// Address: 0x110dc8 - 0x110dd8
void caseD_8_0x110dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x110dc8");
#endif

    ctx->pc = 0x110dc8u;

    // 0x110dc8: 0x8f908a30  lw          $s0, -0x75D0($gp)
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x110dcc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x110DCCu;
    {
        const bool branch_taken_0x110dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DCCu;
        // 0x110dd0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dcc) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110DD4u;
    // 0x110dd4: 0x0  nop
    ctx->pc = 0x110dd4u;
    // NOP
    ctx->pc = 0x110dd8u;
}
