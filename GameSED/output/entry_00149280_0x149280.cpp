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

// Function: entry_00149280
// Address: 0x149280 - 0x149290
void entry_00149280_0x149280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149280_0x149280");
#endif

    ctx->pc = 0x149280u;

    // 0x149280: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x149284: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x149284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149288: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x149288u;
    {
        const bool branch_taken_0x149288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149288u;
        // 0x14928c: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149288) {
            ctx->pc = 0x149198u;
            return;
        }
    }
    ctx->pc = 0x149290u;
}
