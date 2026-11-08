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

// Function: entry_0012d3fc
// Address: 0x12d3fc - 0x12d404
void entry_0012d3fc_0x12d3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3fc_0x12d3fc");
#endif

    ctx->pc = 0x12d3fcu;

    // 0x12d3fc: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D3FCu;
            // 0x12d400: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D378u;
            return;
        }
    }
    ctx->pc = 0x12D404u;
}
