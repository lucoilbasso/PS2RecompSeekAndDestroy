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

// Function: entry_001ab95c
// Address: 0x1ab95c - 0x1ab990
void entry_001ab95c_0x1ab95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab95c_0x1ab95c");
#endif

    ctx->pc = 0x1ab95cu;

    // 0x1ab95c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ab95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ab960: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab964: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1ab964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ab968: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1ab968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ab96c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ab96cu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x1ab970: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1ab974: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ab974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ab978: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB978u;
    {
        const bool branch_taken_0x1ab978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB978u;
        // 0x1ab97c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab978) {
            ctx->pc = 0x1AB9ACu;
            return;
        }
    }
    ctx->pc = 0x1AB980u;
    // 0x1ab980: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab984: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ab984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ab988: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ab988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ab98c: 0x0  nop
    ctx->pc = 0x1ab98cu;
    // NOP
    ctx->pc = 0x1ab990u;
}
