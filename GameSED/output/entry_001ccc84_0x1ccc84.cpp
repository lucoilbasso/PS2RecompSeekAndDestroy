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

// Function: entry_001ccc84
// Address: 0x1ccc84 - 0x1cccc8
void entry_001ccc84_0x1ccc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc84_0x1ccc84");
#endif

    ctx->pc = 0x1ccc84u;

    // 0x1ccc84: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CCC84u;
    {
        const bool branch_taken_0x1ccc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc84) {
            ctx->pc = 0x1CCD04u;
            return;
        }
    }
    ctx->pc = 0x1CCC8Cu;
    // 0x1ccc8c: 0x56030035  bnel        $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CCC8Cu;
    {
        const bool branch_taken_0x1ccc8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ccc8c) {
            ctx->pc = 0x1CCC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC8Cu;
            // 0x1ccc90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            return;
        }
    }
    ctx->pc = 0x1CCC94u;
    // 0x1ccc94: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ccc98: 0x50a00032  beql        $a1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CCC98u;
    {
        const bool branch_taken_0x1ccc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc98) {
            ctx->pc = 0x1CCC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC98u;
            // 0x1ccc9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            return;
        }
    }
    ctx->pc = 0x1CCCA0u;
    // 0x1ccca0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ccca4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CCCA4u;
    {
        const bool branch_taken_0x1ccca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccca4) {
            ctx->pc = 0x1CCCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCA4u;
            // 0x1ccca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD64u;
            return;
        }
    }
    ctx->pc = 0x1CCCACu;
    // 0x1cccac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cccacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccb0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCCB0u;
    {
        const bool branch_taken_0x1cccb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB0u;
        // 0x1cccb4: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccb0) {
            ctx->pc = 0x1CCCECu;
            return;
        }
    }
    ctx->pc = 0x1CCCB8u;
    // 0x1cccb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCCB8u;
    {
        const bool branch_taken_0x1cccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccb8) {
            ctx->pc = 0x1CCCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCB8u;
            // 0x1cccbc: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCF0u;
            return;
        }
    }
    ctx->pc = 0x1CCCC0u;
    // 0x1cccc0: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1cccc4: 0x0  nop
    ctx->pc = 0x1cccc4u;
    // NOP
    ctx->pc = 0x1cccc8u;
}
