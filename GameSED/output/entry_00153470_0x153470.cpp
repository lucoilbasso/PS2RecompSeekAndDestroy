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

// Function: entry_00153470
// Address: 0x153470 - 0x1534a0
void entry_00153470_0x153470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153470_0x153470");
#endif

    ctx->pc = 0x153470u;

    // 0x153470: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x153474: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x153474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x153478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x153478u;
    {
        const bool branch_taken_0x153478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153478u;
        // 0x15347c: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153478) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153480u;
    // 0x153480: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153484: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x153484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x153488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153488u;
    {
        const bool branch_taken_0x153488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153488u;
        // 0x15348c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153488) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153490u;
    // 0x153490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153494: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x153494u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x153498: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15349c: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x15349cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1534a0u;
}
