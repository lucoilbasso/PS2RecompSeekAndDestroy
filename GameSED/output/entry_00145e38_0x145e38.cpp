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

// Function: entry_00145e38
// Address: 0x145e38 - 0x145e40
void entry_00145e38_0x145e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e38_0x145e38");
#endif

    ctx->pc = 0x145e38u;

    // 0x145e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145E38u;
    {
        const bool branch_taken_0x145e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E38u;
        // 0x145e3c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e38) {
            ctx->pc = 0x145E4Cu;
            return;
        }
    }
    ctx->pc = 0x145E40u;
}
