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

// Function: entry_0017f520
// Address: 0x17f520 - 0x17f528
void entry_0017f520_0x17f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f520_0x17f520");
#endif

    ctx->pc = 0x17f520u;

    // 0x17f520: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17F520u;
    {
        const bool branch_taken_0x17f520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F520u;
        // 0x17f524: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f520) {
            ctx->pc = 0x17F500u;
            return;
        }
    }
    ctx->pc = 0x17F528u;
}
