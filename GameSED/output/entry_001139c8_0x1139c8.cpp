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

// Function: entry_001139c8
// Address: 0x1139c8 - 0x1139ec
void entry_001139c8_0x1139c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001139c8_0x1139c8");
#endif

    ctx->pc = 0x1139c8u;

label_1139c8:
    // 0x1139c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1139cc: 0x0  nop
    ctx->pc = 0x1139ccu;
    // NOP
    // 0x1139d0: 0x0  nop
    ctx->pc = 0x1139d0u;
    // NOP
    // 0x1139d4: 0x0  nop
    ctx->pc = 0x1139d4u;
    // NOP
    // 0x1139d8: 0x0  nop
    ctx->pc = 0x1139d8u;
    // NOP
    // 0x1139dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1139DCu;
    {
        const bool branch_taken_0x1139dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1139dc) {
            ctx->pc = 0x1139E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1139DCu;
            // 0x1139e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1139C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139c8;
        }
    }
    ctx->pc = 0x1139E4u;
    // 0x1139e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1139e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1139e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1139e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1139ecu;
}
