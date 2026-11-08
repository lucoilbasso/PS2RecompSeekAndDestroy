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

// Function: entry_0012b210
// Address: 0x12b210 - 0x12b228
void entry_0012b210_0x12b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b210_0x12b210");
#endif

    ctx->pc = 0x12b210u;

    // 0x12b210: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12b214: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12b218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B218u;
    {
        const bool branch_taken_0x12b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B218u;
        // 0x12b21c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b218) {
            ctx->pc = 0x12B22Cu;
            return;
        }
    }
    ctx->pc = 0x12B220u;
    // 0x12b220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b224: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12b228u;
}
