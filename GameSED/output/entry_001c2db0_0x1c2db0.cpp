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

// Function: entry_001c2db0
// Address: 0x1c2db0 - 0x1c2ddc
void entry_001c2db0_0x1c2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2db0_0x1c2db0");
#endif

    ctx->pc = 0x1c2db0u;

    // 0x1c2db0: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x1c2db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2db8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1c2db8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1c2dbc: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2DBCu;
    {
        const bool branch_taken_0x1c2dbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x1C2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DBCu;
        // 0x1c2dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dbc) {
            ctx->pc = 0x1C2DF8u;
            return;
        }
    }
    ctx->pc = 0x1C2DC4u;
    // 0x1c2dc4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2DC4u;
    {
        const bool branch_taken_0x1c2dc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dc4) {
            ctx->pc = 0x1C2DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2DC4u;
            // 0x1c2dc8: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DDCu;
            return;
        }
    }
    ctx->pc = 0x1C2DCCu;
    // 0x1c2dcc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1c2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2dd0: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2DD0u;
    {
        const bool branch_taken_0x1c2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c2dd0) {
            ctx->pc = 0x1C2DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2DD0u;
            // 0x1c2dd4: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DFCu;
            return;
        }
    }
    ctx->pc = 0x1C2DD8u;
    // 0x1c2dd8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1c2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    ctx->pc = 0x1c2ddcu;
}
