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

// Function: entry_001cac78
// Address: 0x1cac78 - 0x1caca8
void entry_001cac78_0x1cac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac78_0x1cac78");
#endif

    ctx->pc = 0x1cac78u;

    // 0x1cac78: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cac7c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cac80: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cac84: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cac88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cac8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cac90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cac94: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAC94u;
    {
        const bool branch_taken_0x1cac94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cac94) {
            ctx->pc = 0x1CACBCu;
            return;
        }
    }
    ctx->pc = 0x1CAC9Cu;
    // 0x1cac9c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1cac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1caca0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1caca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1caca4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x1caca8u;
}
