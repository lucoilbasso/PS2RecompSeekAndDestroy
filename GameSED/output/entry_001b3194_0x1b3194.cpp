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

// Function: entry_001b3194
// Address: 0x1b3194 - 0x1b31a8
void entry_001b3194_0x1b3194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3194_0x1b3194");
#endif

    ctx->pc = 0x1b3194u;

    // 0x1b3194: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3194u;
    {
        const bool branch_taken_0x1b3194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3194) {
            ctx->pc = 0x1B31A8u;
            return;
        }
    }
    ctx->pc = 0x1B319Cu;
    // 0x1b319c: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x1b319cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b31a0: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B31A0u;
    {
        const bool branch_taken_0x1b31a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b31a0) {
            ctx->pc = 0x1B31A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B31A0u;
            // 0x1b31a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B31B8u;
            return;
        }
    }
    ctx->pc = 0x1B31A8u;
}
