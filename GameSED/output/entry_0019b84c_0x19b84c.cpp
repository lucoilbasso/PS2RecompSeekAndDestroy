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

// Function: entry_0019b84c
// Address: 0x19b84c - 0x19b888
void entry_0019b84c_0x19b84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b84c_0x19b84c");
#endif

    ctx->pc = 0x19b84cu;

    // 0x19b84c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b850: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b850u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b854: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b858: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B858u;
    {
        const bool branch_taken_0x19b858 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B858u;
        // 0x19b85c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b858) {
            ctx->pc = 0x19B820u;
            return;
        }
    }
    ctx->pc = 0x19B860u;
    // 0x19b860: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x19b860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x19b864: 0x24a40014  addiu       $a0, $a1, 0x14
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b868: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b870: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b874: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b874u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b878: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b87c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b87cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b880: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b884: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b888u;
}
