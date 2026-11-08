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

// Function: caseD_17
// Address: 0x10ac80 - 0x10ac98
void caseD_17_0x10ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x10ac80");
#endif

    ctx->pc = 0x10ac80u;

    // 0x10ac80: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac84: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac88: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10AC8Cu;
    {
        const bool branch_taken_0x10ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC8Cu;
        // 0x10ac90: 0x36730020  ori         $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac8c) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC94u;
    // 0x10ac94: 0x0  nop
    ctx->pc = 0x10ac94u;
    // NOP
    ctx->pc = 0x10ac98u;
}
