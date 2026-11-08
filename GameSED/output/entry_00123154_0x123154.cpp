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

// Function: entry_00123154
// Address: 0x123154 - 0x123164
void entry_00123154_0x123154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123154_0x123154");
#endif

    ctx->pc = 0x123154u;

    // 0x123154: 0x0  nop
    ctx->pc = 0x123154u;
    // NOP
    // 0x123158: 0x0  nop
    ctx->pc = 0x123158u;
    // NOP
    // 0x12315c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12315Cu;
    {
        const bool branch_taken_0x12315c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x123160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12315Cu;
        // 0x123160: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12315c) {
            ctx->pc = 0x123148u;
            return;
        }
    }
    ctx->pc = 0x123164u;
}
