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

// Function: entry_0013c210
// Address: 0x13c210 - 0x13c22c
void entry_0013c210_0x13c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c210_0x13c210");
#endif

    ctx->pc = 0x13c210u;

    // 0x13c210: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x13c214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c218: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x13c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x13c21c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x13c21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13c220: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x13C220u;
    {
        const bool branch_taken_0x13c220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C220u;
        // 0x13c224: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c220) {
            ctx->pc = 0x13C280u;
            return;
        }
    }
    ctx->pc = 0x13C228u;
    // 0x13c228: 0x8ce401e0  lw          $a0, 0x1E0($a3)
    ctx->pc = 0x13c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    ctx->pc = 0x13c22cu;
}
