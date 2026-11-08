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

// Function: entry_00136dd0
// Address: 0x136dd0 - 0x136df0
void entry_00136dd0_0x136dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136dd0_0x136dd0");
#endif

    ctx->pc = 0x136dd0u;

    // 0x136dd0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136DD0u;
    {
        const bool branch_taken_0x136dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x136DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD0u;
        // 0x136dd4: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dd0) {
            ctx->pc = 0x136DF4u;
            return;
        }
    }
    ctx->pc = 0x136DD8u;
    // 0x136dd8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136DD8u;
    {
        const bool branch_taken_0x136dd8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x136DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD8u;
        // 0x136ddc: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dd8) {
            ctx->pc = 0x136DF0u;
            return;
        }
    }
    ctx->pc = 0x136DE0u;
    // 0x136de0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136DE8u;
    {
        const bool branch_taken_0x136de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DE8u;
        // 0x136dec: 0x8c423630  lw          $v0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136de8) {
            ctx->pc = 0x136DF4u;
            return;
        }
    }
    ctx->pc = 0x136DF0u;
}
