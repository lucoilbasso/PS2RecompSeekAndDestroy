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

// Function: caseD_5
// Address: 0x133300 - 0x133344
void caseD_5_0x133300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x133300");
#endif

    ctx->pc = 0x133300u;

    // 0x133300: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133304: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x133304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x133308: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13330c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13330Cu;
    {
        const bool branch_taken_0x13330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13330c) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133314u;
    // 0x133314: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x133318: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x133318u;
    {
        const bool branch_taken_0x133318 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133318u;
        // 0x13331c: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133318) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133320u;
    // 0x133320: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x133320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133324: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133324u;
    {
        const bool branch_taken_0x133324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x133324) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x13332Cu;
    // 0x13332c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x13332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x133330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133330u;
    {
        const bool branch_taken_0x133330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133330u;
        // 0x133334: 0x8ca30260  lw          $v1, 0x260($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133330) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133338u;
    // 0x133338: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x133338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x13333c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133340: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x133340u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->pc = 0x133344u;
}
