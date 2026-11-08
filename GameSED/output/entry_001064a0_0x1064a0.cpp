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

// Function: entry_001064a0
// Address: 0x1064a0 - 0x1064ac
void entry_001064a0_0x1064a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064a0_0x1064a0");
#endif

    ctx->pc = 0x1064a0u;

    // 0x1064a0: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1064A0u;
    {
        const bool branch_taken_0x1064a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064A0u;
        // 0x1064a4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064a0) {
            ctx->pc = 0x1064ACu;
            return;
        }
    }
    ctx->pc = 0x1064A8u;
    // 0x1064a8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x1064acu;
}
