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

// Function: entry_0012d254
// Address: 0x12d254 - 0x12d260
void entry_0012d254_0x12d254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d254_0x12d254");
#endif

    ctx->pc = 0x12d254u;

    // 0x12d254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D254u;
    {
        const bool branch_taken_0x12d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D254u;
        // 0x12d258: 0xaca000c4  sw          $zero, 0xC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d254) {
            ctx->pc = 0x12D268u;
            return;
        }
    }
    ctx->pc = 0x12D25Cu;
    // 0x12d25c: 0x0  nop
    ctx->pc = 0x12d25cu;
    // NOP
    ctx->pc = 0x12d260u;
}
