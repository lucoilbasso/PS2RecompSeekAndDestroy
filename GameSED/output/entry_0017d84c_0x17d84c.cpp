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

// Function: entry_0017d84c
// Address: 0x17d84c - 0x17d854
void entry_0017d84c_0x17d84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d84c_0x17d84c");
#endif

    ctx->pc = 0x17d84cu;

    // 0x17d84c: 0x15c0ffec  bnez        $t6, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17D84Cu;
    {
        const bool branch_taken_0x17d84c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D84Cu;
        // 0x17d850: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d84c) {
            ctx->pc = 0x17D800u;
            return;
        }
    }
    ctx->pc = 0x17D854u;
}
