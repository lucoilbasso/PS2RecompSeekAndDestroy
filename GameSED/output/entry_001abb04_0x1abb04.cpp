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

// Function: entry_001abb04
// Address: 0x1abb04 - 0x1abb18
void entry_001abb04_0x1abb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abb04_0x1abb04");
#endif

    ctx->pc = 0x1abb04u;

    // 0x1abb04: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1abb04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1abb08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1abb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1abb0c: 0xb6182a  slt         $v1, $a1, $s6
    ctx->pc = 0x1abb0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1abb10: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1ABB10u;
    {
        const bool branch_taken_0x1abb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB10u;
        // 0x1abb14: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb10) {
            ctx->pc = 0x1ABAC8u;
            return;
        }
    }
    ctx->pc = 0x1ABB18u;
}
