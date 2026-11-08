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

// Function: entry_001383d0
// Address: 0x1383d0 - 0x1383f0
void entry_001383d0_0x1383d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001383d0_0x1383d0");
#endif

    ctx->pc = 0x1383d0u;

    // 0x1383d0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1383d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383d4: 0x546a0019  bnel        $v1, $t2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1383D4u;
    {
        const bool branch_taken_0x1383d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1383d4) {
            ctx->pc = 0x1383D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383D4u;
            // 0x1383d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            return;
        }
    }
    ctx->pc = 0x1383DCu;
    // 0x1383dc: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1383DCu;
    {
        const bool branch_taken_0x1383dc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1383dc) {
            ctx->pc = 0x1383F0u;
            return;
        }
    }
    ctx->pc = 0x1383E4u;
    // 0x1383e4: 0x84420264  lh          $v0, 0x264($v0)
    ctx->pc = 0x1383e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 612)));
    // 0x1383e8: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1383E8u;
    {
        const bool branch_taken_0x1383e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1383e8) {
            ctx->pc = 0x1383ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383E8u;
            // 0x1383ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383FCu;
            return;
        }
    }
    ctx->pc = 0x1383F0u;
}
