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

// Function: entry_00194df8
// Address: 0x194df8 - 0x194e14
void entry_00194df8_0x194df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194df8_0x194df8");
#endif

    ctx->pc = 0x194df8u;

label_194df8:
    // 0x194df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194dfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x194dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194e00: 0x0  nop
    ctx->pc = 0x194e00u;
    // NOP
    // 0x194e04: 0x0  nop
    ctx->pc = 0x194e04u;
    // NOP
    // 0x194e08: 0x0  nop
    ctx->pc = 0x194e08u;
    // NOP
    // 0x194e0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x194E0Cu;
    {
        const bool branch_taken_0x194e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E0Cu;
        // 0x194e10: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e0c) {
            ctx->pc = 0x194DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194df8;
        }
    }
    ctx->pc = 0x194E14u;
}
