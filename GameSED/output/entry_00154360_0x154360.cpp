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

// Function: entry_00154360
// Address: 0x154360 - 0x154398
void entry_00154360_0x154360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154360_0x154360");
#endif

    ctx->pc = 0x154360u;

    // 0x154360: 0x14e0002f  bnez        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x154360u;
    {
        const bool branch_taken_0x154360 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x154364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154360u;
        // 0x154364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154360) {
            ctx->pc = 0x154420u;
            return;
        }
    }
    ctx->pc = 0x154368u;
    // 0x154368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15436c: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15436Cu;
    {
        const bool branch_taken_0x15436c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x154370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15436Cu;
        // 0x154370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15436c) {
            ctx->pc = 0x1543B0u;
            return;
        }
    }
    ctx->pc = 0x154374u;
    // 0x154374: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x154374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x154378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154378u;
    {
        const bool branch_taken_0x154378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154378u;
        // 0x15437c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154378) {
            ctx->pc = 0x154398u;
            return;
        }
    }
    ctx->pc = 0x154380u;
    // 0x154380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154384: 0x52220015  beql        $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x154384u;
    {
        const bool branch_taken_0x154384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x154384) {
            ctx->pc = 0x154388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154384u;
            // 0x154388: 0x267006dc  addiu       $s0, $s3, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1543DCu;
            return;
        }
    }
    ctx->pc = 0x15438Cu;
    // 0x15438c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15438Cu;
    {
        const bool branch_taken_0x15438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15438c) {
            ctx->pc = 0x1543DCu;
            return;
        }
    }
    ctx->pc = 0x154394u;
    // 0x154394: 0x0  nop
    ctx->pc = 0x154394u;
    // NOP
    ctx->pc = 0x154398u;
}
