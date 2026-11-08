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

// Function: entry_001ad87c
// Address: 0x1ad87c - 0x1ad8a4
void entry_001ad87c_0x1ad87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad87c_0x1ad87c");
#endif

    ctx->pc = 0x1ad87cu;

    // 0x1ad87c: 0x2cc200a0  sltiu       $v0, $a2, 0xA0
    ctx->pc = 0x1ad87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1ad880: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD880u;
    {
        const bool branch_taken_0x1ad880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD880u;
        // 0x1ad884: 0x24c2ff20  addiu       $v0, $a2, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad880) {
            ctx->pc = 0x1AD8A4u;
            return;
        }
    }
    ctx->pc = 0x1AD888u;
    // 0x1ad888: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ad888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ad88c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ad890: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD890u;
    {
        const bool branch_taken_0x1ad890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD890u;
        // 0x1ad894: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad890) {
            ctx->pc = 0x1AD8C4u;
            return;
        }
    }
    ctx->pc = 0x1AD898u;
    // 0x1ad898: 0x2c4200a1  sltiu       $v0, $v0, 0xA1
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x1ad89c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD89Cu;
    {
        const bool branch_taken_0x1ad89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad89c) {
            ctx->pc = 0x1AD8B4u;
            return;
        }
    }
    ctx->pc = 0x1AD8A4u;
}
