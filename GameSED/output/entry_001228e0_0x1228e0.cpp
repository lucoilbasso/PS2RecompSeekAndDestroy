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

// Function: entry_001228e0
// Address: 0x1228e0 - 0x122908
void entry_001228e0_0x1228e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228e0_0x1228e0");
#endif

    ctx->pc = 0x1228e0u;

    // 0x1228e0: 0x544b0010  bnel        $v0, $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1228E0u;
    {
        const bool branch_taken_0x1228e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1228e0) {
            ctx->pc = 0x1228E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1228E0u;
            // 0x1228e4: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122924u;
            return;
        }
    }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x1228e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1228ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1228f0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1228f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1228f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1228F8u;
    {
        const bool branch_taken_0x1228f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1228FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228F8u;
        // 0x1228fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228f8) {
            ctx->pc = 0x122908u;
            return;
        }
    }
    ctx->pc = 0x122900u;
    // 0x122900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122900u;
    {
        const bool branch_taken_0x122900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122900u;
        // 0x122904: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122900) {
            ctx->pc = 0x122910u;
            return;
        }
    }
    ctx->pc = 0x122908u;
}
