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

// Function: caseD_b
// Address: 0x10abd8 - 0x10abf0
void caseD_b_0x10abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x10abd8");
#endif

    ctx->pc = 0x10abd8u;

    // 0x10abd8: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10abdc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10abe0: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10abe4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10ABE4u;
    {
        const bool branch_taken_0x10abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE4u;
        // 0x10abe8: 0x36730014  ori         $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abe4) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10ABECu;
    // 0x10abec: 0x0  nop
    ctx->pc = 0x10abecu;
    // NOP
    ctx->pc = 0x10abf0u;
}
