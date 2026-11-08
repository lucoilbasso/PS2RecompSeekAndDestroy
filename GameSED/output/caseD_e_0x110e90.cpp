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

// Function: caseD_e
// Address: 0x110e90 - 0x110ea8
void caseD_e_0x110e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x110e90");
#endif

    ctx->pc = 0x110e90u;

    // 0x110e90: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x110e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x110e94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110e98: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110e98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110e9c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x110E9Cu;
    {
        const bool branch_taken_0x110e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E9Cu;
        // 0x110ea0: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e9c) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110EA4u;
    // 0x110ea4: 0x0  nop
    ctx->pc = 0x110ea4u;
    // NOP
    ctx->pc = 0x110ea8u;
}
