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

// Function: caseD_f
// Address: 0x10ac38 - 0x10ac50
void caseD_f_0x10ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x10ac38");
#endif

    ctx->pc = 0x10ac38u;

    // 0x10ac38: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac3c: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x10ac3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ac40: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ac44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10AC44u;
    {
        const bool branch_taken_0x10ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC44u;
        // 0x10ac48: 0x36730018  ori         $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac44) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC4Cu;
    // 0x10ac4c: 0x0  nop
    ctx->pc = 0x10ac4cu;
    // NOP
    ctx->pc = 0x10ac50u;
}
