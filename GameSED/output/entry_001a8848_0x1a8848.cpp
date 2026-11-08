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

// Function: entry_001a8848
// Address: 0x1a8848 - 0x1a8880
void entry_001a8848_0x1a8848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8848_0x1a8848");
#endif

    ctx->pc = 0x1a8848u;

    // 0x1a8848: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8848u;
    {
        const bool branch_taken_0x1a8848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8848u;
        // 0x1a884c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8848) {
            ctx->pc = 0x1A8880u;
            return;
        }
    }
    ctx->pc = 0x1A8850u;
    // 0x1a8850: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a8854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8858: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a885c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a8860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8864: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8868: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x1a8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x1a886c: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x1a886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x1a8870: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a8870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a8874: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8874u;
    {
        const bool branch_taken_0x1a8874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8874u;
        // 0x1a8878: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8874) {
            ctx->pc = 0x1A8894u;
            return;
        }
    }
    ctx->pc = 0x1A887Cu;
    // 0x1a887c: 0x0  nop
    ctx->pc = 0x1a887cu;
    // NOP
    ctx->pc = 0x1a8880u;
}
