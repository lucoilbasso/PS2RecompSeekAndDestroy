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

// Function: entry_001dd2c8
// Address: 0x1dd2c8 - 0x1dd2dc
void entry_001dd2c8_0x1dd2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd2c8_0x1dd2c8");
#endif

    ctx->pc = 0x1dd2c8u;

label_1dd2c8:
    // 0x1dd2c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1dd2cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD2CCu;
    {
        const bool branch_taken_0x1dd2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2cc) {
            ctx->pc = 0x1DD300u;
            return;
        }
    }
    ctx->pc = 0x1DD2D4u;
    // 0x1dd2d4: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1DD2D4u;
    {
        const bool branch_taken_0x1dd2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd2d4) {
            ctx->pc = 0x1DD2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD2D4u;
            // 0x1dd2d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd2c8;
        }
    }
    ctx->pc = 0x1DD2DCu;
}
