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

// Function: entry_0017e48c
// Address: 0x17e48c - 0x17e494
void entry_0017e48c_0x17e48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e48c_0x17e48c");
#endif

    ctx->pc = 0x17e48cu;

    // 0x17e48c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E48Cu;
    {
        const bool branch_taken_0x17e48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E48Cu;
        // 0x17e490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e48c) {
            ctx->pc = 0x17E4A0u;
            return;
        }
    }
    ctx->pc = 0x17E494u;
}
