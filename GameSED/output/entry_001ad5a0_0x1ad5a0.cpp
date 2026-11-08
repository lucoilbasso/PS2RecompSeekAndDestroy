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

// Function: entry_001ad5a0
// Address: 0x1ad5a0 - 0x1ad5c0
void entry_001ad5a0_0x1ad5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad5a0_0x1ad5a0");
#endif

    ctx->pc = 0x1ad5a0u;

    // 0x1ad5a0: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AD5A0u;
    {
        const bool branch_taken_0x1ad5a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5A0u;
        // 0x1ad5a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5a0) {
            ctx->pc = 0x1AD66Cu;
            return;
        }
    }
    ctx->pc = 0x1AD5A8u;
    // 0x1ad5a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5ac: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ad5b0: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1ad5b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ad5b4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ad5b8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1ad5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1ad5bc: 0x0  nop
    ctx->pc = 0x1ad5bcu;
    // NOP
    ctx->pc = 0x1ad5c0u;
}
