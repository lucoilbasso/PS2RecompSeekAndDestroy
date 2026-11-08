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

// Function: entry_00186078
// Address: 0x186078 - 0x18609c
void entry_00186078_0x186078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186078_0x186078");
#endif

    ctx->pc = 0x186078u;

label_186078:
    // 0x186078: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x18607c: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18607Cu;
    {
        const bool branch_taken_0x18607c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18607c) {
            ctx->pc = 0x186080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18607Cu;
            // 0x186080: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1860A0u;
            return;
        }
    }
    ctx->pc = 0x186084u;
    // 0x186084: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x186084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186088: 0x0  nop
    ctx->pc = 0x186088u;
    // NOP
    // 0x18608c: 0x0  nop
    ctx->pc = 0x18608cu;
    // NOP
    // 0x186090: 0x0  nop
    ctx->pc = 0x186090u;
    // NOP
    // 0x186094: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x186094u;
    {
        const bool branch_taken_0x186094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186094) {
            ctx->pc = 0x186098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186094u;
            // 0x186098: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186078;
        }
    }
    ctx->pc = 0x18609Cu;
}
