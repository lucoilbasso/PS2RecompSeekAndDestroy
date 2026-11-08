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

// Function: caseD_20
// Address: 0x165fd8 - 0x165ff0
void caseD_20_0x165fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x165fd8");
#endif

    ctx->pc = 0x165fd8u;

    // 0x165fd8: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x165fdc: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x165fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x165fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165fe4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x165FE4u;
    {
        const bool branch_taken_0x165fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FE4u;
        // 0x165fe8: 0x24c665d0  addiu       $a2, $a2, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fe4) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x165FECu;
    // 0x165fec: 0x0  nop
    ctx->pc = 0x165fecu;
    // NOP
    ctx->pc = 0x165ff0u;
}
