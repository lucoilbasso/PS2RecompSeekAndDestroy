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

// Function: entry_001d5698
// Address: 0x1d5698 - 0x1d56a4
void entry_001d5698_0x1d5698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5698_0x1d5698");
#endif

    ctx->pc = 0x1d5698u;

    // 0x1d5698: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d5698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d569c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D569Cu;
    {
        const bool branch_taken_0x1d569c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D569Cu;
        // 0x1d56a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d569c) {
            ctx->pc = 0x1D56A8u;
            return;
        }
    }
    ctx->pc = 0x1D56A4u;
}
