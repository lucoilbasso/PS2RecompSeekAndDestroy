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

// Function: caseD_4
// Address: 0x1342b8 - 0x1342e0
void caseD_4_0x1342b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1342b8");
#endif

    ctx->pc = 0x1342b8u;

    // 0x1342b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1342bc: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1342c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1342c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1342c4: 0x144300ef  bne         $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1342C4u;
    {
        const bool branch_taken_0x1342c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1342C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342C4u;
        // 0x1342c8: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342c4) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1342CCu;
    // 0x1342cc: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x1342d0: 0x5c4000eb  bgtzl       $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1342D0u;
    {
        const bool branch_taken_0x1342d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1342d0) {
            ctx->pc = 0x1342D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1342D0u;
            // 0x1342d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1342D8u;
    // 0x1342d8: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1342D8u;
    {
        const bool branch_taken_0x1342d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342d8) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1342E0u;
}
