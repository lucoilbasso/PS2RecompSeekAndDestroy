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

// Function: entry_001c4be0
// Address: 0x1c4be0 - 0x1c4bf0
void entry_001c4be0_0x1c4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4be0_0x1c4be0");
#endif

    ctx->pc = 0x1c4be0u;

    // 0x1c4be0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4BE0u;
    {
        const bool branch_taken_0x1c4be0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BE0u;
        // 0x1c4be4: 0x34028170  ori         $v0, $zero, 0x8170 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4be0) {
            ctx->pc = 0x1C4BF0u;
            return;
        }
    }
    ctx->pc = 0x1C4BE8u;
    // 0x1c4be8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4BE8u;
    {
        const bool branch_taken_0x1c4be8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BE8u;
        // 0x1c4bec: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4be8) {
            ctx->pc = 0x1C4BF8u;
            return;
        }
    }
    ctx->pc = 0x1C4BF0u;
}
