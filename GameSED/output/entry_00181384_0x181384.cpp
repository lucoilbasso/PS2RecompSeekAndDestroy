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

// Function: entry_00181384
// Address: 0x181384 - 0x18138c
void entry_00181384_0x181384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181384_0x181384");
#endif

    ctx->pc = 0x181384u;

    // 0x181384: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181384u;
    {
        const bool branch_taken_0x181384 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x181384) {
            ctx->pc = 0x181388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181384u;
            // 0x181388: 0xad390000  sw          $t9, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18138Cu;
            return;
        }
    }
    ctx->pc = 0x18138Cu;
}
