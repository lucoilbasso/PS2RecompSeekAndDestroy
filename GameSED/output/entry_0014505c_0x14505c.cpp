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

// Function: entry_0014505c
// Address: 0x14505c - 0x145070
void entry_0014505c_0x14505c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014505c_0x14505c");
#endif

    ctx->pc = 0x14505cu;

    // 0x14505c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145060: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x145060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145064: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x145064u;
    {
        const bool branch_taken_0x145064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145064u;
        // 0x145068: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145064) {
            ctx->pc = 0x145030u;
            return;
        }
    }
    ctx->pc = 0x14506Cu;
    // 0x14506c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x145070u;
}
