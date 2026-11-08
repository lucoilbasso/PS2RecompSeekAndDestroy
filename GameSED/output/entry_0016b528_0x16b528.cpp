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

// Function: entry_0016b528
// Address: 0x16b528 - 0x16b530
void entry_0016b528_0x16b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b528_0x16b528");
#endif

    ctx->pc = 0x16b528u;

    // 0x16b528: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B528u;
    {
        const bool branch_taken_0x16b528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b528) {
            ctx->pc = 0x16B52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B528u;
            // 0x16b52c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B53Cu;
            return;
        }
    }
    ctx->pc = 0x16B530u;
}
