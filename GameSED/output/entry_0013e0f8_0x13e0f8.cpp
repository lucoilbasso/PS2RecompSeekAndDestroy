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

// Function: entry_0013e0f8
// Address: 0x13e0f8 - 0x13e114
void entry_0013e0f8_0x13e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e0f8_0x13e0f8");
#endif

    ctx->pc = 0x13e0f8u;

label_13e0f8:
    // 0x13e0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e0fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e100: 0x0  nop
    ctx->pc = 0x13e100u;
    // NOP
    // 0x13e104: 0x0  nop
    ctx->pc = 0x13e104u;
    // NOP
    // 0x13e108: 0x0  nop
    ctx->pc = 0x13e108u;
    // NOP
    // 0x13e10c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E10Cu;
    {
        const bool branch_taken_0x13e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E10Cu;
        // 0x13e110: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e10c) {
            ctx->pc = 0x13E0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e0f8;
        }
    }
    ctx->pc = 0x13E114u;
}
