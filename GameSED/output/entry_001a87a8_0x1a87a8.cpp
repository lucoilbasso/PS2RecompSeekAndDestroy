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

// Function: entry_001a87a8
// Address: 0x1a87a8 - 0x1a87e8
void entry_001a87a8_0x1a87a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a87a8_0x1a87a8");
#endif

    ctx->pc = 0x1a87a8u;

    // 0x1a87a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A87A8u;
    {
        const bool branch_taken_0x1a87a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87A8u;
        // 0x1a87ac: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87a8) {
            ctx->pc = 0x1A87E8u;
            return;
        }
    }
    ctx->pc = 0x1A87B0u;
    // 0x1a87b0: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a87b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a87b8: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a87bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a87c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a87c4: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a87c8: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a87cc: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1a87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a87d0: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x1a87d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1a87d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a87d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a87d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a87dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A87DCu;
    {
        const bool branch_taken_0x1a87dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87DCu;
        // 0x1a87e0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87dc) {
            ctx->pc = 0x1A87F8u;
            return;
        }
    }
    ctx->pc = 0x1A87E4u;
    // 0x1a87e4: 0x0  nop
    ctx->pc = 0x1a87e4u;
    // NOP
    ctx->pc = 0x1a87e8u;
}
