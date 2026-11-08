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

// Function: entry_001860d0
// Address: 0x1860d0 - 0x186100
void entry_001860d0_0x1860d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001860d0_0x1860d0");
#endif

    ctx->pc = 0x1860d0u;

label_1860d0:
    // 0x1860d0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186118u;
            return;
        }
    }
    ctx->pc = 0x1860D8u;
    // 0x1860d8: 0x8c820124  lw          $v0, 0x124($a0)
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1860dc: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1860E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860DCu;
        // 0x1860e0: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186100u;
            return;
        }
    }
    ctx->pc = 0x1860E4u;
    // 0x1860e4: 0x8c820128  lw          $v0, 0x128($a0)
    ctx->pc = 0x1860e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x1860e8: 0x0  nop
    ctx->pc = 0x1860e8u;
    // NOP
    // 0x1860ec: 0x0  nop
    ctx->pc = 0x1860ecu;
    // NOP
    // 0x1860f0: 0x0  nop
    ctx->pc = 0x1860f0u;
    // NOP
    // 0x1860f4: 0x1051fff6  beq         $v0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1860F4u;
    {
        const bool branch_taken_0x1860f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1860f4) {
            ctx->pc = 0x1860D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1860d0;
        }
    }
    ctx->pc = 0x1860FCu;
    // 0x1860fc: 0x0  nop
    ctx->pc = 0x1860fcu;
    // NOP
    ctx->pc = 0x186100u;
}
