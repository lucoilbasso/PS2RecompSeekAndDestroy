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

// Function: entry_001dd058
// Address: 0x1dd058 - 0x1dd068
void entry_001dd058_0x1dd058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd058_0x1dd058");
#endif

    ctx->pc = 0x1dd058u;

    // 0x1dd058: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd05c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD05Cu;
    {
        const bool branch_taken_0x1dd05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD05Cu;
        // 0x1dd060: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd05c) {
            ctx->pc = 0x1DD070u;
            return;
        }
    }
    ctx->pc = 0x1DD064u;
    // 0x1dd064: 0x0  nop
    ctx->pc = 0x1dd064u;
    // NOP
    ctx->pc = 0x1dd068u;
}
