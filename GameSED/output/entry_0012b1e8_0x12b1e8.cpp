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

// Function: entry_0012b1e8
// Address: 0x12b1e8 - 0x12b210
void entry_0012b1e8_0x12b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1e8_0x12b1e8");
#endif

    ctx->pc = 0x12b1e8u;

    // 0x12b1e8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12b1ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b1f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b1f4: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x12b1f8: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x12b1fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1FCu;
    {
        const bool branch_taken_0x12b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b1fc) {
            ctx->pc = 0x12B200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B1FCu;
            // 0x12b200: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B210u;
            return;
        }
    }
    ctx->pc = 0x12B204u;
    // 0x12b204: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B208u;
    {
        const bool branch_taken_0x12b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B208u;
        // 0x12b20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b208) {
            ctx->pc = 0x12B228u;
            return;
        }
    }
    ctx->pc = 0x12B210u;
}
