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

// Function: entry_001c2c90
// Address: 0x1c2c90 - 0x1c2cb8
void entry_001c2c90_0x1c2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2c90_0x1c2c90");
#endif

    ctx->pc = 0x1c2c90u;

    // 0x1c2c90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C90u;
    {
        const bool branch_taken_0x1c2c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c90) {
            ctx->pc = 0x1C2C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C90u;
            // 0x1c2c94: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2CB8u;
            return;
        }
    }
    ctx->pc = 0x1C2C98u;
    // 0x1c2c98: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1c2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2c9c: 0x8ce401c8  lw          $a0, 0x1C8($a3)
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2ca0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1c2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1c2ca4: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x1c2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2ca8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1c2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1c2cac: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1c2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1c2cb0: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c2cb4: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x1c2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
    ctx->pc = 0x1c2cb8u;
}
