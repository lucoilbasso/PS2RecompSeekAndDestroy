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

// Function: entry_00165a90
// Address: 0x165a90 - 0x165aa0
void entry_00165a90_0x165a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a90_0x165a90");
#endif

    ctx->pc = 0x165a90u;

    // 0x165a90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165A90u;
    {
        const bool branch_taken_0x165a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a90) {
            ctx->pc = 0x165A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A90u;
            // 0x165a94: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165AC0u;
            return;
        }
    }
    ctx->pc = 0x165A98u;
    // 0x165a98: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x165a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x165a9c: 0x0  nop
    ctx->pc = 0x165a9cu;
    // NOP
    ctx->pc = 0x165aa0u;
}
