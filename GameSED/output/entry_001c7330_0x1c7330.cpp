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

// Function: entry_001c7330
// Address: 0x1c7330 - 0x1c7344
void entry_001c7330_0x1c7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7330_0x1c7330");
#endif

    ctx->pc = 0x1c7330u;

    // 0x1c7330: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c7334: 0x0  nop
    ctx->pc = 0x1c7334u;
    // NOP
    // 0x1c7338: 0x0  nop
    ctx->pc = 0x1c7338u;
    // NOP
    // 0x1c733c: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C733Cu;
    {
        const bool branch_taken_0x1c733c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C733Cu;
        // 0x1c7340: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c733c) {
            ctx->pc = 0x1C7310u;
            return;
        }
    }
    ctx->pc = 0x1C7344u;
}
