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

// Function: entry_0017d76c
// Address: 0x17d76c - 0x17d774
void entry_0017d76c_0x17d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d76c_0x17d76c");
#endif

    ctx->pc = 0x17d76cu;

    // 0x17d76c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D76Cu;
    {
        const bool branch_taken_0x17d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d76c) {
            ctx->pc = 0x17D770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D76Cu;
            // 0x17d770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D788u;
            return;
        }
    }
    ctx->pc = 0x17D774u;
}
