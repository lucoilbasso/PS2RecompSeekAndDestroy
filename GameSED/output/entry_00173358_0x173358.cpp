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

// Function: entry_00173358
// Address: 0x173358 - 0x173388
void entry_00173358_0x173358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173358_0x173358");
#endif

    ctx->pc = 0x173358u;

    // 0x173358: 0x26a6ffff  addiu       $a2, $s5, -0x1
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x17335c: 0x246202a  slt         $a0, $s2, $a2
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x173360: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x173360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173364: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x173364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17336c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173370: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173374: 0x24a30110  addiu       $v1, $a1, 0x110
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x173378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173378u;
    {
        const bool branch_taken_0x173378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173378u;
        // 0x17337c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173378) {
            ctx->pc = 0x173388u;
            return;
        }
    }
    ctx->pc = 0x173380u;
    // 0x173380: 0x24a20280  addiu       $v0, $a1, 0x280
    ctx->pc = 0x173380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x173384: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x173384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x173388u;
}
