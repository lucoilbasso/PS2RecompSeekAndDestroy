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

// Function: entry_001aba0c
// Address: 0x1aba0c - 0x1aba24
void entry_001aba0c_0x1aba0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba0c_0x1aba0c");
#endif

    ctx->pc = 0x1aba0cu;

    // 0x1aba0c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1aba0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1aba10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aba14: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1aba18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1aba18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1aba1c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1ABA1Cu;
    {
        const bool branch_taken_0x1aba1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA1Cu;
        // 0x1aba20: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba1c) {
            ctx->pc = 0x1AB9D0u;
            return;
        }
    }
    ctx->pc = 0x1ABA24u;
}
