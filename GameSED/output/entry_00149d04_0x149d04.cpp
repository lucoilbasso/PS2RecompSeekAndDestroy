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

// Function: entry_00149d04
// Address: 0x149d04 - 0x149d10
void entry_00149d04_0x149d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d04_0x149d04");
#endif

    ctx->pc = 0x149d04u;

    // 0x149d04: 0x186102a  slt         $v0, $t4, $a2
    ctx->pc = 0x149d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x149d08: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x149D08u;
    {
        const bool branch_taken_0x149d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D08u;
        // 0x149d0c: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d08) {
            ctx->pc = 0x149CA8u;
            return;
        }
    }
    ctx->pc = 0x149D10u;
}
