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

// Function: entry_001528e8
// Address: 0x1528e8 - 0x152900
void entry_001528e8_0x1528e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001528e8_0x1528e8");
#endif

    ctx->pc = 0x1528e8u;

    // 0x1528e8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1528e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528ec: 0x12c0005b  beqz        $s6, . + 4 + (0x5B << 2)
    ctx->pc = 0x1528ECu;
    {
        const bool branch_taken_0x1528ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528ec) {
            ctx->pc = 0x152A5Cu;
            return;
        }
    }
    ctx->pc = 0x1528F4u;
    // 0x1528f4: 0x265306dc  addiu       $s3, $s2, 0x6DC
    ctx->pc = 0x1528f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1756));
    // 0x1528f8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1528F8u;
    {
        const bool branch_taken_0x1528f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F8u;
        // 0x1528fc: 0x8e770004  lw          $s7, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528f8) {
            ctx->pc = 0x152A5Cu;
            return;
        }
    }
    ctx->pc = 0x152900u;
}
