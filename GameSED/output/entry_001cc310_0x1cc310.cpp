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

// Function: entry_001cc310
// Address: 0x1cc310 - 0x1cc354
void entry_001cc310_0x1cc310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc310_0x1cc310");
#endif

    ctx->pc = 0x1cc310u;

    // 0x1cc310: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1cc314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cc318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cc318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc31c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cc320: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1cc324: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cc328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cc330: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc334: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1cc338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc33c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC33Cu;
    {
        const bool branch_taken_0x1cc33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33Cu;
        // 0x1cc340: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33c) {
            ctx->pc = 0x1CC354u;
            return;
        }
    }
    ctx->pc = 0x1CC344u;
    // 0x1cc344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC344u;
    {
        const bool branch_taken_0x1cc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc344) {
            ctx->pc = 0x1CC354u;
            return;
        }
    }
    ctx->pc = 0x1CC34Cu;
    // 0x1cc34c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc350: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1cc354u;
}
