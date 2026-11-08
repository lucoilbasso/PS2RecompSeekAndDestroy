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

// Function: caseD_19
// Address: 0x10acb0 - 0x10acc8
void caseD_19_0x10acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x10acb0");
#endif

    ctx->pc = 0x10acb0u;

    // 0x10acb0: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10acb4: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10acb8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10acbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10ACBCu;
    {
        const bool branch_taken_0x10acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACBCu;
        // 0x10acc0: 0x36730022  ori         $s3, $s3, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acbc) {
            ctx->pc = 0x10ACF0u;
            return;
        }
    }
    ctx->pc = 0x10ACC4u;
    // 0x10acc4: 0x0  nop
    ctx->pc = 0x10acc4u;
    // NOP
    ctx->pc = 0x10acc8u;
}
