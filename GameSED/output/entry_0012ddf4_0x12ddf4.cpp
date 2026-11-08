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

// Function: entry_0012ddf4
// Address: 0x12ddf4 - 0x12ddfc
void entry_0012ddf4_0x12ddf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ddf4_0x12ddf4");
#endif

    ctx->pc = 0x12ddf4u;

    // 0x12ddf4: 0x5680fdc4  bnel        $s4, $zero, . + 4 + (-0x23C << 2)
    ctx->pc = 0x12DDF4u;
    {
        const bool branch_taken_0x12ddf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ddf4) {
            ctx->pc = 0x12DDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DDF4u;
            // 0x12ddf8: 0x8e820014  lw          $v0, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D508u;
            return;
        }
    }
    ctx->pc = 0x12DDFCu;
}
