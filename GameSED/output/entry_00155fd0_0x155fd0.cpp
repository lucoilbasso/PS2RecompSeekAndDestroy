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

// Function: entry_00155fd0
// Address: 0x155fd0 - 0x155ff4
void entry_00155fd0_0x155fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155fd0_0x155fd0");
#endif

    ctx->pc = 0x155fd0u;

label_155fd0:
    // 0x155fd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155fd4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x155FD4u;
    {
        const bool branch_taken_0x155fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155fd4) {
            ctx->pc = 0x155FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FD4u;
            // 0x155fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FF8u;
            return;
        }
    }
    ctx->pc = 0x155FDCu;
    // 0x155fdc: 0x0  nop
    ctx->pc = 0x155fdcu;
    // NOP
    // 0x155fe0: 0x0  nop
    ctx->pc = 0x155fe0u;
    // NOP
    // 0x155fe4: 0x0  nop
    ctx->pc = 0x155fe4u;
    // NOP
    // 0x155fe8: 0x0  nop
    ctx->pc = 0x155fe8u;
    // NOP
    // 0x155fec: 0x5467fff8  bnel        $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x155FECu;
    {
        const bool branch_taken_0x155fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x155fec) {
            ctx->pc = 0x155FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155FECu;
            // 0x155ff0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155fd0;
        }
    }
    ctx->pc = 0x155FF4u;
}
