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

// Function: entry_001385d8
// Address: 0x1385d8 - 0x1385f8
void entry_001385d8_0x1385d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001385d8_0x1385d8");
#endif

    ctx->pc = 0x1385d8u;

    // 0x1385d8: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1385D8u;
    {
        const bool branch_taken_0x1385d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1385d8) {
            ctx->pc = 0x1385DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385D8u;
            // 0x1385dc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138600u;
            return;
        }
    }
    ctx->pc = 0x1385E0u;
    // 0x1385e0: 0x8f828a24  lw          $v0, -0x75DC($gp)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x1385e4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1385e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1385e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1385ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1385f0: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1385f4: 0xaf828a24  sw          $v0, -0x75DC($gp)
    ctx->pc = 0x1385f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 2));
    ctx->pc = 0x1385f8u;
}
