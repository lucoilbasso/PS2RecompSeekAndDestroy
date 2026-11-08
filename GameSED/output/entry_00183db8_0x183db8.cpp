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

// Function: entry_00183db8
// Address: 0x183db8 - 0x183dc4
void entry_00183db8_0x183db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183db8_0x183db8");
#endif

    ctx->pc = 0x183db8u;

    // 0x183db8: 0x0  nop
    ctx->pc = 0x183db8u;
    // NOP
    // 0x183dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183DBCu;
    {
        const bool branch_taken_0x183dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DBCu;
        // 0x183dc0: 0xa82821  addu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dbc) {
            ctx->pc = 0x183DA8u;
            return;
        }
    }
    ctx->pc = 0x183DC4u;
}
