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

// Function: entry_001495e0
// Address: 0x1495e0 - 0x149608
void entry_001495e0_0x1495e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001495e0_0x1495e0");
#endif

    ctx->pc = 0x1495e0u;

    // 0x1495e0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495E0u;
        // 0x1495e4: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x149608u;
            return;
        }
    }
    ctx->pc = 0x1495E8u;
    // 0x1495e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1495E8u;
    {
        const bool branch_taken_0x1495e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1495e8) {
            ctx->pc = 0x1495ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495E8u;
            // 0x1495ec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14960Cu;
            return;
        }
    }
    ctx->pc = 0x1495F0u;
    // 0x1495f0: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1495f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1495f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1495F4u;
    {
        const bool branch_taken_0x1495f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495f4) {
            ctx->pc = 0x1495F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1495F4u;
            // 0x1495f8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14960Cu;
            return;
        }
    }
    ctx->pc = 0x1495FCu;
    // 0x1495fc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1495fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149600: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x149600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x149604: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x149604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149608u;
}
