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

// Function: entry_001cfe58
// Address: 0x1cfe58 - 0x1cfe80
void entry_001cfe58_0x1cfe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe58_0x1cfe58");
#endif

    ctx->pc = 0x1cfe58u;

    // 0x1cfe58: 0x2684e1b8  addiu       $a0, $s4, -0x1E48
    ctx->pc = 0x1cfe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
    // 0x1cfe5c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1cfe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfe60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cfe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cfe64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cfe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cfe68: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1cfe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1cfe6c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1cfe6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfe70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFE70u;
    {
        const bool branch_taken_0x1cfe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE70u;
        // 0x1cfe74: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe70) {
            ctx->pc = 0x1CFE80u;
            return;
        }
    }
    ctx->pc = 0x1CFE78u;
    // 0x1cfe78: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CFE78u;
    {
        const bool branch_taken_0x1cfe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE78u;
        // 0x1cfe7c: 0x2686e1b8  addiu       $a2, $s4, -0x1E48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe78) {
            ctx->pc = 0x1CFF38u;
            return;
        }
    }
    ctx->pc = 0x1CFE80u;
}
