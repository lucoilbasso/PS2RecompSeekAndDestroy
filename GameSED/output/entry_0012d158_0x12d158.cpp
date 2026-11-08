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

// Function: entry_0012d158
// Address: 0x12d158 - 0x12d164
void entry_0012d158_0x12d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d158_0x12d158");
#endif

    ctx->pc = 0x12d158u;

    // 0x12d158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D158u;
    {
        const bool branch_taken_0x12d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D158u;
        // 0x12d15c: 0xae8200c4  sw          $v0, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d158) {
            ctx->pc = 0x12D164u;
            return;
        }
    }
    ctx->pc = 0x12D160u;
    // 0x12d160: 0xac5400c0  sw          $s4, 0xC0($v0)
    ctx->pc = 0x12d160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 20));
    ctx->pc = 0x12d164u;
}
