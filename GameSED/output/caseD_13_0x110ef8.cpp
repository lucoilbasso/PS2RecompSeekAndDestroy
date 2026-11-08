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

// Function: caseD_13
// Address: 0x110ef8 - 0x110f10
void caseD_13_0x110ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x110ef8");
#endif

    ctx->pc = 0x110ef8u;

    // 0x110ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x110ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x110efc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f00: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110f00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110f04: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x110F04u;
    {
        const bool branch_taken_0x110f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F04u;
        // 0x110f08: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f04) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110F0Cu;
    // 0x110f0c: 0x0  nop
    ctx->pc = 0x110f0cu;
    // NOP
    ctx->pc = 0x110f10u;
}
