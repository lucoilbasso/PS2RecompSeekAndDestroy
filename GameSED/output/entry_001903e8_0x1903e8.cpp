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

// Function: entry_001903e8
// Address: 0x1903e8 - 0x1903f0
void entry_001903e8_0x1903e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903e8_0x1903e8");
#endif

    ctx->pc = 0x1903e8u;

    // 0x1903e8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1903E8u;
    {
        const bool branch_taken_0x1903e8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1903ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E8u;
        // 0x1903ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903e8) {
            ctx->pc = 0x190400u;
            return;
        }
    }
    ctx->pc = 0x1903F0u;
}
