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

// Function: caseD_16
// Address: 0x10ac68 - 0x10ac80
void caseD_16_0x10ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x10ac68");
#endif

    ctx->pc = 0x10ac68u;

    // 0x10ac68: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac6c: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x10ac6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ac70: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x10ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ac74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10AC74u;
    {
        const bool branch_taken_0x10ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC74u;
        // 0x10ac78: 0x3673001f  ori         $s3, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac74) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC7Cu;
    // 0x10ac7c: 0x0  nop
    ctx->pc = 0x10ac7cu;
    // NOP
    ctx->pc = 0x10ac80u;
}
