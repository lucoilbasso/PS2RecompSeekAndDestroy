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

// Function: caseD_c
// Address: 0x10abf0 - 0x10ac08
void caseD_c_0x10abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x10abf0");
#endif

    ctx->pc = 0x10abf0u;

    // 0x10abf0: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10abf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10abf4: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x10abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10abf8: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10abfc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10ABFCu;
    {
        const bool branch_taken_0x10abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABFCu;
        // 0x10ac00: 0x36730015  ori         $s3, $s3, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abfc) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC04u;
    // 0x10ac04: 0x0  nop
    ctx->pc = 0x10ac04u;
    // NOP
    ctx->pc = 0x10ac08u;
}
