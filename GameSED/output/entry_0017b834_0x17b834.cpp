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

// Function: entry_0017b834
// Address: 0x17b834 - 0x17b83c
void entry_0017b834_0x17b834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b834_0x17b834");
#endif

    ctx->pc = 0x17b834u;

    // 0x17b834: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B834u;
    {
        const bool branch_taken_0x17b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B834u;
        // 0x17b838: 0x2866000c  slti        $a2, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b834) {
            ctx->pc = 0x17B840u;
            return;
        }
    }
    ctx->pc = 0x17B83Cu;
}
