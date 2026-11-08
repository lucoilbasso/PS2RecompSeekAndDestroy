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

// Function: entry_00136db8
// Address: 0x136db8 - 0x136dd0
void entry_00136db8_0x136db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136db8_0x136db8");
#endif

    ctx->pc = 0x136db8u;

    // 0x136db8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136DB8u;
    {
        const bool branch_taken_0x136db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x136db8) {
            ctx->pc = 0x136DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136DB8u;
            // 0x136dbc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136DD0u;
            return;
        }
    }
    ctx->pc = 0x136DC0u;
    // 0x136dc0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136dc4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136dc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136DC8u;
    {
        const bool branch_taken_0x136dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DC8u;
        // 0x136dcc: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dc8) {
            ctx->pc = 0x136DF4u;
            return;
        }
    }
    ctx->pc = 0x136DD0u;
}
