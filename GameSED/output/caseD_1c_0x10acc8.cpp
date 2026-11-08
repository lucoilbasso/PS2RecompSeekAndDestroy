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

// Function: caseD_1c
// Address: 0x10acc8 - 0x10ace0
void caseD_1c_0x10acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x10acc8");
#endif

    ctx->pc = 0x10acc8u;

    // 0x10acc8: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10accc: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10acd0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10acd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10acd4: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x10acd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x10acd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10ACD8u;
    {
        const bool branch_taken_0x10acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD8u;
        // 0x10acdc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acd8) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10ACE0u;
}
