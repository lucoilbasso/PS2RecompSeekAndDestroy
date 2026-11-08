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

// Function: entry_0012ffe8
// Address: 0x12ffe8 - 0x12fff0
void entry_0012ffe8_0x12ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ffe8_0x12ffe8");
#endif

    ctx->pc = 0x12ffe8u;

    // 0x12ffe8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12FFE8u;
    {
        const bool branch_taken_0x12ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFE8u;
        // 0x12ffec: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffe8) {
            ctx->pc = 0x13010Cu;
            return;
        }
    }
    ctx->pc = 0x12FFF0u;
}
