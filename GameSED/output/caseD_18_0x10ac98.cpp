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

// Function: caseD_18
// Address: 0x10ac98 - 0x10acb0
void caseD_18_0x10ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x10ac98");
#endif

    ctx->pc = 0x10ac98u;

    // 0x10ac98: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac9c: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10aca0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10aca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10aca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10ACA4u;
    {
        const bool branch_taken_0x10aca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA4u;
        // 0x10aca8: 0x36730021  ori         $s3, $s3, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aca4) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10ACACu;
    // 0x10acac: 0x0  nop
    ctx->pc = 0x10acacu;
    // NOP
    ctx->pc = 0x10acb0u;
}
