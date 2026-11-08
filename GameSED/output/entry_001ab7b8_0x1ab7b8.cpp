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

// Function: entry_001ab7b8
// Address: 0x1ab7b8 - 0x1ab7e8
void entry_001ab7b8_0x1ab7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab7b8_0x1ab7b8");
#endif

    ctx->pc = 0x1ab7b8u;

    // 0x1ab7b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ab7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ab7bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab7c0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1ab7c4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ab7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ab7c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ab7c8u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x1ab7cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ab7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1ab7d0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ab7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ab7d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB7D4u;
    {
        const bool branch_taken_0x1ab7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7D4u;
        // 0x1ab7d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7d4) {
            ctx->pc = 0x1AB804u;
            return;
        }
    }
    ctx->pc = 0x1AB7DCu;
    // 0x1ab7dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ab7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ab7e0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ab7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ab7e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ab7e8u;
}
