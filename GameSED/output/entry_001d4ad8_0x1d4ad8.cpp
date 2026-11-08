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

// Function: entry_001d4ad8
// Address: 0x1d4ad8 - 0x1d4af8
void entry_001d4ad8_0x1d4ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ad8_0x1d4ad8");
#endif

    ctx->pc = 0x1d4ad8u;

label_1d4ad8:
    // 0x1d4ad8: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d4adc: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4ae0: 0x0  nop
    ctx->pc = 0x1d4ae0u;
    // NOP
    // 0x1d4ae4: 0x0  nop
    ctx->pc = 0x1d4ae4u;
    // NOP
    // 0x1d4ae8: 0x0  nop
    ctx->pc = 0x1d4ae8u;
    // NOP
    // 0x1d4aec: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4AECu;
    {
        const bool branch_taken_0x1d4aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AECu;
        // 0x1d4af0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aec) {
            ctx->pc = 0x1D4AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ad8;
        }
    }
    ctx->pc = 0x1D4AF4u;
    // 0x1d4af4: 0x2e430401  sltiu       $v1, $s2, 0x401
    ctx->pc = 0x1d4af4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    ctx->pc = 0x1d4af8u;
}
