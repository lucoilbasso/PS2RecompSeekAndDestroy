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

// Function: entry_00110838
// Address: 0x110838 - 0x110844
void entry_00110838_0x110838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110838_0x110838");
#endif

    ctx->pc = 0x110838u;

    // 0x110838: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x110838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11083c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11083Cu;
    {
        const bool branch_taken_0x11083c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11083Cu;
        // 0x110840: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11083c) {
            ctx->pc = 0x110850u;
            return;
        }
    }
    ctx->pc = 0x110844u;
}
