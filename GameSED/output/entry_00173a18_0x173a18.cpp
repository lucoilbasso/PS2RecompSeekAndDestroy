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

// Function: entry_00173a18
// Address: 0x173a18 - 0x173a28
void entry_00173a18_0x173a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a18_0x173a18");
#endif

    ctx->pc = 0x173a18u;

    // 0x173a18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173A18u;
    {
        const bool branch_taken_0x173a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A18u;
        // 0x173a1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a18) {
            ctx->pc = 0x173A30u;
            return;
        }
    }
    ctx->pc = 0x173A20u;
    // 0x173a20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173A20u;
    {
        const bool branch_taken_0x173a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a20) {
            ctx->pc = 0x173A54u;
            return;
        }
    }
    ctx->pc = 0x173A28u;
}
