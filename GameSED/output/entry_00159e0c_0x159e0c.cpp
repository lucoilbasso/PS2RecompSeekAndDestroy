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

// Function: entry_00159e0c
// Address: 0x159e0c - 0x159e1c
void entry_00159e0c_0x159e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159e0c_0x159e0c");
#endif

    ctx->pc = 0x159e0cu;

    // 0x159e0c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x159e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x159e10: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x159e14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159E14u;
    {
        const bool branch_taken_0x159e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159e14) {
            ctx->pc = 0x159E28u;
            return;
        }
    }
    ctx->pc = 0x159E1Cu;
}
