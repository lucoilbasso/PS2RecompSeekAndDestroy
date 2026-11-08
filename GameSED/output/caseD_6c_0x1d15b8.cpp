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

// Function: caseD_6c
// Address: 0x1d15b8 - 0x1d15cc
void caseD_6c_0x1d15b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6c_0x1d15b8");
#endif

    ctx->pc = 0x1d15b8u;

    // 0x1d15b8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d15bc: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1d15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d15c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D15C0u;
    {
        const bool branch_taken_0x1d15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C0u;
        // 0x1d15c4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15c0) {
            ctx->pc = 0x1D15D8u;
            return;
        }
    }
    ctx->pc = 0x1D15C8u;
    // 0x1d15c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d15c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1d15ccu;
}
