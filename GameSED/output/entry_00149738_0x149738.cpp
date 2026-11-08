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

// Function: entry_00149738
// Address: 0x149738 - 0x149748
void entry_00149738_0x149738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149738_0x149738");
#endif

    ctx->pc = 0x149738u;

    // 0x149738: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x149738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14973c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x14973cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149740: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x149740u;
    {
        const bool branch_taken_0x149740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149740u;
        // 0x149744: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149740) {
            ctx->pc = 0x1496D8u;
            return;
        }
    }
    ctx->pc = 0x149748u;
}
