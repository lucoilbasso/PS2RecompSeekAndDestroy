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

// Function: entry_001d4b68
// Address: 0x1d4b68 - 0x1d4b88
void entry_001d4b68_0x1d4b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b68_0x1d4b68");
#endif

    ctx->pc = 0x1d4b68u;

label_1d4b68:
    // 0x1d4b68: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4b68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d4b6c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4b70: 0x0  nop
    ctx->pc = 0x1d4b70u;
    // NOP
    // 0x1d4b74: 0x0  nop
    ctx->pc = 0x1d4b74u;
    // NOP
    // 0x1d4b78: 0x0  nop
    ctx->pc = 0x1d4b78u;
    // NOP
    // 0x1d4b7c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B7Cu;
        // 0x1d4b80: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D4B84u;
    // 0x1d4b84: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1d4b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    ctx->pc = 0x1d4b88u;
}
