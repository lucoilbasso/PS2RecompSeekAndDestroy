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

// Function: entry_00183dc8
// Address: 0x183dc8 - 0x183dd4
void entry_00183dc8_0x183dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183dc8_0x183dc8");
#endif

    ctx->pc = 0x183dc8u;

    // 0x183dc8: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x183dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x183dcc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x183DCCu;
    {
        const bool branch_taken_0x183dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DCCu;
        // 0x183dd0: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dcc) {
            ctx->pc = 0x183D90u;
            return;
        }
    }
    ctx->pc = 0x183DD4u;
}
