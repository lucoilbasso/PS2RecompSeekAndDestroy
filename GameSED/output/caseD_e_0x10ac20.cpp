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

// Function: caseD_e
// Address: 0x10ac20 - 0x10ac38
void caseD_e_0x10ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x10ac20");
#endif

    ctx->pc = 0x10ac20u;

    // 0x10ac20: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac24: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x10ac24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ac28: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ac2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x10AC2Cu;
    {
        const bool branch_taken_0x10ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC2Cu;
        // 0x10ac30: 0x36730017  ori         $s3, $s3, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac2c) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10AC34u;
    // 0x10ac34: 0x0  nop
    ctx->pc = 0x10ac34u;
    // NOP
    ctx->pc = 0x10ac38u;
}
