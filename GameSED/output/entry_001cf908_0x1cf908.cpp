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

// Function: entry_001cf908
// Address: 0x1cf908 - 0x1cf910
void entry_001cf908_0x1cf908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf908_0x1cf908");
#endif

    ctx->pc = 0x1cf908u;

    // 0x1cf908: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1CF908u;
    {
        const bool branch_taken_0x1cf908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF908u;
        // 0x1cf90c: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf908) {
            ctx->pc = 0x1CF9ECu;
            return;
        }
    }
    ctx->pc = 0x1CF910u;
}
