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

// Function: entry_001cfde8
// Address: 0x1cfde8 - 0x1cfe18
void entry_001cfde8_0x1cfde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfde8_0x1cfde8");
#endif

    ctx->pc = 0x1cfde8u;

    // 0x1cfde8: 0x2690e1b8  addiu       $s0, $s4, -0x1E48
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
    // 0x1cfdec: 0x2412fffc  addiu       $s2, $zero, -0x4
    ctx->pc = 0x1cfdecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfdf0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cfdf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cfdf8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1cfdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1cfdfc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1cfdfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfe00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFE00u;
    {
        const bool branch_taken_0x1cfe00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE00u;
        // 0x1cfe04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe00) {
            ctx->pc = 0x1CFE18u;
            return;
        }
    }
    ctx->pc = 0x1CFE08u;
    // 0x1cfe08: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1cfe08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cfe0c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1CFE0Cu;
    {
        const bool branch_taken_0x1cfe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE0Cu;
        // 0x1cfe10: 0x2686e1b8  addiu       $a2, $s4, -0x1E48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe0c) {
            ctx->pc = 0x1CFF38u;
            return;
        }
    }
    ctx->pc = 0x1CFE14u;
    // 0x1cfe14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cfe18u;
}
