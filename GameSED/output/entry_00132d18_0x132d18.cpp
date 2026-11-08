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

// Function: entry_00132d18
// Address: 0x132d18 - 0x132d20
void entry_00132d18_0x132d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132d18_0x132d18");
#endif

    ctx->pc = 0x132d18u;

    // 0x132d18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x132D18u;
    {
        const bool branch_taken_0x132d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132d18) {
            ctx->pc = 0x132D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D18u;
            // 0x132d1c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D20u;
            return;
        }
    }
    ctx->pc = 0x132D20u;
}
