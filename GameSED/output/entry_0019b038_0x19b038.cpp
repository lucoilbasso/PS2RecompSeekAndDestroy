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

// Function: entry_0019b038
// Address: 0x19b038 - 0x19b048
void entry_0019b038_0x19b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b038_0x19b038");
#endif

    ctx->pc = 0x19b038u;

    // 0x19b038: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B038u;
    {
        const bool branch_taken_0x19b038 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B038u;
        // 0x19b03c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b038) {
            ctx->pc = 0x19B048u;
            return;
        }
    }
    ctx->pc = 0x19B040u;
    // 0x19b040: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B040u;
    {
        const bool branch_taken_0x19b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B040u;
        // 0x19b044: 0xa06a0000  sb          $t2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b040) {
            ctx->pc = 0x19B04Cu;
            return;
        }
    }
    ctx->pc = 0x19B048u;
}
