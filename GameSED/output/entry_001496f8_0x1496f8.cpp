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

// Function: entry_001496f8
// Address: 0x1496f8 - 0x149720
void entry_001496f8_0x1496f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001496f8_0x1496f8");
#endif

    ctx->pc = 0x1496f8u;

    // 0x1496f8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1496F8u;
    {
        const bool branch_taken_0x1496f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496F8u;
        // 0x1496fc: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496f8) {
            ctx->pc = 0x149720u;
            return;
        }
    }
    ctx->pc = 0x149700u;
    // 0x149700: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149700u;
    {
        const bool branch_taken_0x149700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149700) {
            ctx->pc = 0x149704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149700u;
            // 0x149704: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149724u;
            return;
        }
    }
    ctx->pc = 0x149708u;
    // 0x149708: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x149708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14970c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14970Cu;
    {
        const bool branch_taken_0x14970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14970c) {
            ctx->pc = 0x149710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14970Cu;
            // 0x149710: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149724u;
            return;
        }
    }
    ctx->pc = 0x149714u;
    // 0x149714: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x149714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149718: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x149718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14971c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x14971cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149720u;
}
