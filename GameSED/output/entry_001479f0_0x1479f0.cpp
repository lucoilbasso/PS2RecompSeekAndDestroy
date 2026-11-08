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

// Function: entry_001479f0
// Address: 0x1479f0 - 0x1479f8
void entry_001479f0_0x1479f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001479f0_0x1479f0");
#endif

    ctx->pc = 0x1479f0u;

    // 0x1479f0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1479F0u;
    {
        const bool branch_taken_0x1479f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1479F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479F0u;
        // 0x1479f4: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479f0) {
            ctx->pc = 0x147978u;
            return;
        }
    }
    ctx->pc = 0x1479F8u;
}
