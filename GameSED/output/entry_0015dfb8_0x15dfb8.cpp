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

// Function: entry_0015dfb8
// Address: 0x15dfb8 - 0x15e010
void entry_0015dfb8_0x15dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dfb8_0x15dfb8");
#endif

    ctx->pc = 0x15dfb8u;

    // 0x15dfb8: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x15DFB8u;
    {
        const bool branch_taken_0x15dfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB8u;
        // 0x15dfbc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfb8) {
            ctx->pc = 0x15E2E8u;
            return;
        }
    }
    ctx->pc = 0x15DFC0u;
    // 0x15dfc0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x15dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15dfc4: 0x548000ac  bnel        $a0, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x15DFC4u;
    {
        const bool branch_taken_0x15dfc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dfc4) {
            ctx->pc = 0x15DFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DFC4u;
            // 0x15dfc8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E278u;
            return;
        }
    }
    ctx->pc = 0x15DFCCu;
    // 0x15dfcc: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15dfd0: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15dfd4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15DFD4u;
    {
        const bool branch_taken_0x15dfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFD4u;
        // 0x15dfd8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd4) {
            ctx->pc = 0x15E010u;
            return;
        }
    }
    ctx->pc = 0x15DFDCu;
    // 0x15dfdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15dfe0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15dfe4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15dfe8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15dfec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15dff0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15dff4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15dff8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15dffc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15e000: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x15e000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x15e004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e008: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15e00c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x15e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x15e010u;
}
