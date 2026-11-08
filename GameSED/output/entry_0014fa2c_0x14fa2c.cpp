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

// Function: entry_0014fa2c
// Address: 0x14fa2c - 0x14fa48
void entry_0014fa2c_0x14fa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa2c_0x14fa2c");
#endif

    ctx->pc = 0x14fa2cu;

    // 0x14fa2c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14fa30: 0x8c620c0c  lw          $v0, 0xC0C($v1)
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x14fa34: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA34u;
    {
        const bool branch_taken_0x14fa34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA34u;
        // 0x14fa38: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa34) {
            ctx->pc = 0x14FA48u;
            return;
        }
    }
    ctx->pc = 0x14FA3Cu;
    // 0x14fa3c: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FA40u;
    {
        const bool branch_taken_0x14fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA40u;
        // 0x14fa44: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa40) {
            ctx->pc = 0x14FA4Cu;
            return;
        }
    }
    ctx->pc = 0x14FA48u;
}
