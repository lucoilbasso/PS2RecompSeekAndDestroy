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

// Function: entry_0019a8c4
// Address: 0x19a8c4 - 0x19a8d0
void entry_0019a8c4_0x19a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a8c4_0x19a8c4");
#endif

    ctx->pc = 0x19a8c4u;

    // 0x19a8c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A8C4u;
    {
        const bool branch_taken_0x19a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8C4u;
        // 0x19a8c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8c4) {
            ctx->pc = 0x19A8E0u;
            return;
        }
    }
    ctx->pc = 0x19A8CCu;
    // 0x19a8cc: 0x0  nop
    ctx->pc = 0x19a8ccu;
    // NOP
    ctx->pc = 0x19a8d0u;
}
