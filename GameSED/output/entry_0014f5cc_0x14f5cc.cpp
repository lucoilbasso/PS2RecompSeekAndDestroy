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

// Function: entry_0014f5cc
// Address: 0x14f5cc - 0x14f5d4
void entry_0014f5cc_0x14f5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f5cc_0x14f5cc");
#endif

    ctx->pc = 0x14f5ccu;

    // 0x14f5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F5CCu;
    {
        const bool branch_taken_0x14f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5CCu;
        // 0x14f5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5cc) {
            ctx->pc = 0x14F5DCu;
            return;
        }
    }
    ctx->pc = 0x14F5D4u;
}
