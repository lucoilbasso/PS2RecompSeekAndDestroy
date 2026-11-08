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

// Function: caseD_15
// Address: 0x10ac50 - 0x10ac68
void caseD_15_0x10ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x10ac50");
#endif

    ctx->pc = 0x10ac50u;

    // 0x10ac50: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac54: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ac58: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ac5c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10AC5Cu;
    {
        const bool branch_taken_0x10ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC5Cu;
        // 0x10ac60: 0x3673001e  ori         $s3, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac5c) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC64u;
    // 0x10ac64: 0x0  nop
    ctx->pc = 0x10ac64u;
    // NOP
    ctx->pc = 0x10ac68u;
}
