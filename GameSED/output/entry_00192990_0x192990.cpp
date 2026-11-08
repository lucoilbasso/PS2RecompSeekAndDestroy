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

// Function: entry_00192990
// Address: 0x192990 - 0x19299c
void entry_00192990_0x192990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192990_0x192990");
#endif

    ctx->pc = 0x192990u;

    // 0x192990: 0x10e50008  beq         $a3, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x192990u;
    {
        const bool branch_taken_0x192990 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x192994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192990u;
        // 0x192994: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192990) {
            ctx->pc = 0x1929B4u;
            return;
        }
    }
    ctx->pc = 0x192998u;
    // 0x192998: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x192998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x19299cu;
}
