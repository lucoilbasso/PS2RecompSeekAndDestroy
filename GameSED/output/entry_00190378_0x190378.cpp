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

// Function: entry_00190378
// Address: 0x190378 - 0x190380
void entry_00190378_0x190378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190378_0x190378");
#endif

    ctx->pc = 0x190378u;

    // 0x190378: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190378u;
    {
        const bool branch_taken_0x190378 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190378u;
        // 0x19037c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190378) {
            ctx->pc = 0x190398u;
            return;
        }
    }
    ctx->pc = 0x190380u;
}
