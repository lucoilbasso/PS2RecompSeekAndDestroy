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

// Function: entry_00148e78
// Address: 0x148e78 - 0x148e8c
void entry_00148e78_0x148e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148e78_0x148e78");
#endif

    ctx->pc = 0x148e78u;

    // 0x148e78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x148E78u;
    {
        const bool branch_taken_0x148e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e78) {
            ctx->pc = 0x148E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148E78u;
            // 0x148e7c: 0xc53021  addu        $a2, $a2, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148E8Cu;
            return;
        }
    }
    ctx->pc = 0x148E80u;
    // 0x148e80: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x148e84: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x148e88: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->pc = 0x148e8cu;
}
