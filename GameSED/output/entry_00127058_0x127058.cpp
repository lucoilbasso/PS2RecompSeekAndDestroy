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

// Function: entry_00127058
// Address: 0x127058 - 0x127088
void entry_00127058_0x127058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127058_0x127058");
#endif

    ctx->pc = 0x127058u;

    // 0x127058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x127058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12705c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127060: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x127064: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x127064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x127068: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127068u;
    {
        const bool branch_taken_0x127068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127068) {
            ctx->pc = 0x12706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127068u;
            // 0x12706c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127088u;
            return;
        }
    }
    ctx->pc = 0x127070u;
    // 0x127070: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x127074: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x127074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x127078: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x127078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12707c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12707Cu;
    {
        const bool branch_taken_0x12707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12707c) {
            ctx->pc = 0x127098u;
            return;
        }
    }
    ctx->pc = 0x127084u;
    // 0x127084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x127088u;
}
