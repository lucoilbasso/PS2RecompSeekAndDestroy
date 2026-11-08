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

// Function: entry_0012b930
// Address: 0x12b930 - 0x12b960
void entry_0012b930_0x12b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b930_0x12b930");
#endif

    ctx->pc = 0x12b930u;

    // 0x12b930: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x12b934: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b938: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12b93c: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12b93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12b940: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B940u;
    {
        const bool branch_taken_0x12b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b940) {
            ctx->pc = 0x12B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B940u;
            // 0x12b944: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B960u;
            return;
        }
    }
    ctx->pc = 0x12B948u;
    // 0x12b948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12b94c: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x12b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x12b950: 0x2c423801  sltiu       $v0, $v0, 0x3801
    ctx->pc = 0x12b950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x12b954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B954u;
    {
        const bool branch_taken_0x12b954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b954) {
            ctx->pc = 0x12B970u;
            return;
        }
    }
    ctx->pc = 0x12B95Cu;
    // 0x12b95c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12b960u;
}
