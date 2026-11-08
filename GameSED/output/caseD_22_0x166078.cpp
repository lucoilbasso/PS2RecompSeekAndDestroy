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

// Function: caseD_22
// Address: 0x166078 - 0x166090
void caseD_22_0x166078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_22_0x166078");
#endif

    ctx->pc = 0x166078u;

    // 0x166078: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x166078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16607c: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x16607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x166080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166084: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x166084u;
    {
        const bool branch_taken_0x166084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166084u;
        // 0x166088: 0x24c6afb8  addiu       $a2, $a2, -0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166084) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x16608Cu;
    // 0x16608c: 0x0  nop
    ctx->pc = 0x16608cu;
    // NOP
    ctx->pc = 0x166090u;
}
