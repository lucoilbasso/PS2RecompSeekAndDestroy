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

// Function: entry_0018e728
// Address: 0x18e728 - 0x18e730
void entry_0018e728_0x18e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e728_0x18e728");
#endif

    ctx->pc = 0x18e728u;

    // 0x18e728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E728u;
    {
        const bool branch_taken_0x18e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E728u;
        // 0x18e72c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e728) {
            ctx->pc = 0x18E734u;
            return;
        }
    }
    ctx->pc = 0x18E730u;
}
