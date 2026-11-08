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

// Function: entry_001cb588
// Address: 0x1cb588 - 0x1cb5b0
void entry_001cb588_0x1cb588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb588_0x1cb588");
#endif

    ctx->pc = 0x1cb588u;

    // 0x1cb588: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1cb58c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB58Cu;
    {
        const bool branch_taken_0x1cb58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB58Cu;
        // 0x1cb590: 0x2e020090  sltiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb58c) {
            ctx->pc = 0x1CB5C0u;
            return;
        }
    }
    ctx->pc = 0x1CB594u;
    // 0x1cb594: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB594u;
    {
        const bool branch_taken_0x1cb594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB594u;
        // 0x1cb598: 0x24020092  addiu       $v0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb594) {
            ctx->pc = 0x1CB5D4u;
            return;
        }
    }
    ctx->pc = 0x1CB59Cu;
    // 0x1cb59c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB59Cu;
    {
        const bool branch_taken_0x1cb59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb59c) {
            ctx->pc = 0x1CB5E8u;
            return;
        }
    }
    ctx->pc = 0x1CB5A4u;
    // 0x1cb5a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CB5A4u;
    {
        const bool branch_taken_0x1cb5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5a4) {
            ctx->pc = 0x1CB640u;
            return;
        }
    }
    ctx->pc = 0x1CB5ACu;
    // 0x1cb5ac: 0x0  nop
    ctx->pc = 0x1cb5acu;
    // NOP
    ctx->pc = 0x1cb5b0u;
}
