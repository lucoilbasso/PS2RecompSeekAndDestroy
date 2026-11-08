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

// Function: entry_001d1810
// Address: 0x1d1810 - 0x1d1820
void entry_001d1810_0x1d1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1810_0x1d1810");
#endif

    ctx->pc = 0x1d1810u;

    // 0x1d1810: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1810u;
    {
        const bool branch_taken_0x1d1810 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x1d1810) {
            ctx->pc = 0x1D1814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1810u;
            // 0x1d1814: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D1818u;
    // 0x1d1818: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x1d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d181c: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x1d181cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1d1820u;
}
