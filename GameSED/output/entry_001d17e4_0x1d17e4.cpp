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

// Function: entry_001d17e4
// Address: 0x1d17e4 - 0x1d17f0
void entry_001d17e4_0x1d17e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d17e4_0x1d17e4");
#endif

    ctx->pc = 0x1d17e4u;

    // 0x1d17e4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x1d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1d17e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D17E8u;
    {
        const bool branch_taken_0x1d17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17E8u;
        // 0x1d17ec: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17e8) {
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D17F0u;
}
