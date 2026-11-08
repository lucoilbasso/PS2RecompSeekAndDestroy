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

// Function: entry_001a8708
// Address: 0x1a8708 - 0x1a8740
void entry_001a8708_0x1a8708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8708_0x1a8708");
#endif

    ctx->pc = 0x1a8708u;

    // 0x1a8708: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8708u;
    {
        const bool branch_taken_0x1a8708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8708u;
        // 0x1a870c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8708) {
            ctx->pc = 0x1A8740u;
            return;
        }
    }
    ctx->pc = 0x1A8710u;
    // 0x1a8710: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a8714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8718: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a8718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a871c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8724: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a8724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8728: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a8728u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a872c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1a872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1a8730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a8734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a8738: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8738u;
    {
        const bool branch_taken_0x1a8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8738u;
        // 0x1a873c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8738) {
            ctx->pc = 0x1A8750u;
            return;
        }
    }
    ctx->pc = 0x1A8740u;
}
