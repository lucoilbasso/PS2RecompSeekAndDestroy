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

// Function: entry_00159e04
// Address: 0x159e04 - 0x159e0c
void entry_00159e04_0x159e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159e04_0x159e04");
#endif

    ctx->pc = 0x159e04u;

    // 0x159e04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x159E04u;
    {
        const bool branch_taken_0x159e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E04u;
        // 0x159e08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e04) {
            ctx->pc = 0x159E34u;
            return;
        }
    }
    ctx->pc = 0x159E0Cu;
}
