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

// Function: entry_001d4810
// Address: 0x1d4810 - 0x1d4820
void entry_001d4810_0x1d4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4810_0x1d4810");
#endif

    ctx->pc = 0x1d4810u;

    // 0x1d4810: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4810u;
    {
        const bool branch_taken_0x1d4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4810) {
            ctx->pc = 0x1D4814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4810u;
            // 0x1d4814: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4820u;
            return;
        }
    }
    ctx->pc = 0x1D4818u;
    // 0x1d4818: 0x81482  srl         $v0, $t0, 18
    ctx->pc = 0x1d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
    // 0x1d481c: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    ctx->pc = 0x1d4820u;
}
