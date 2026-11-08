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

// Function: entry_0014bb64
// Address: 0x14bb64 - 0x14bba0
void entry_0014bb64_0x14bb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bb64_0x14bb64");
#endif

    ctx->pc = 0x14bb64u;

    // 0x14bb64: 0x8e640250  lw          $a0, 0x250($s3)
    ctx->pc = 0x14bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x14bb68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BB68u;
    {
        const bool branch_taken_0x14bb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB68u;
        // 0x14bb6c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb68) {
            ctx->pc = 0x14BBA0u;
            return;
        }
    }
    ctx->pc = 0x14BB70u;
    // 0x14bb70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bb74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bb78: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BB78u;
    {
        const bool branch_taken_0x14bb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bb78) {
            ctx->pc = 0x14BBA0u;
            return;
        }
    }
    ctx->pc = 0x14BB80u;
    // 0x14bb80: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x14bb84: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14bb88: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14bb8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BB8Cu;
    {
        const bool branch_taken_0x14bb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb8c) {
            ctx->pc = 0x14BBA0u;
            return;
        }
    }
    ctx->pc = 0x14BB94u;
    // 0x14bb94: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x14bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x14bb98: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14bb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x14bb9c: 0xae620184  sw          $v0, 0x184($s3)
    ctx->pc = 0x14bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x14bba0u;
}
