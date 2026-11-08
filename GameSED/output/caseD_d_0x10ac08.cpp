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

// Function: caseD_d
// Address: 0x10ac08 - 0x10ac20
void caseD_d_0x10ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x10ac08");
#endif

    ctx->pc = 0x10ac08u;

    // 0x10ac08: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac0c: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac10: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x10AC14u;
    {
        const bool branch_taken_0x10ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC14u;
        // 0x10ac18: 0x36730016  ori         $s3, $s3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac14) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC1Cu;
    // 0x10ac1c: 0x0  nop
    ctx->pc = 0x10ac1cu;
    // NOP
    ctx->pc = 0x10ac20u;
}
