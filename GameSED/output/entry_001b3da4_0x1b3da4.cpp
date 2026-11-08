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

// Function: entry_001b3da4
// Address: 0x1b3da4 - 0x1b3dc0
void entry_001b3da4_0x1b3da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3da4_0x1b3da4");
#endif

    ctx->pc = 0x1b3da4u;

    // 0x1b3da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3da8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3dac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3DACu;
    {
        const bool branch_taken_0x1b3dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dac) {
            ctx->pc = 0x1B3DE4u;
            return;
        }
    }
    ctx->pc = 0x1B3DB4u;
    // 0x1b3db4: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1b3db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1b3db8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3dbc: 0x0  nop
    ctx->pc = 0x1b3dbcu;
    // NOP
    ctx->pc = 0x1b3dc0u;
}
