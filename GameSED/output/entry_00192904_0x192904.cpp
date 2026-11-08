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

// Function: entry_00192904
// Address: 0x192904 - 0x19291c
void entry_00192904_0x192904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192904_0x192904");
#endif

    ctx->pc = 0x192904u;

    // 0x192904: 0x0  nop
    ctx->pc = 0x192904u;
    // NOP
    // 0x192908: 0x0  nop
    ctx->pc = 0x192908u;
    // NOP
    // 0x19290c: 0x0  nop
    ctx->pc = 0x19290cu;
    // NOP
    // 0x192910: 0x0  nop
    ctx->pc = 0x192910u;
    // NOP
    // 0x192914: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192914u;
    {
        const bool branch_taken_0x192914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192914u;
        // 0x192918: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192914) {
            ctx->pc = 0x1928F8u;
            return;
        }
    }
    ctx->pc = 0x19291Cu;
}
