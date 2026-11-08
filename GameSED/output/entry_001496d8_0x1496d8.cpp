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

// Function: entry_001496d8
// Address: 0x1496d8 - 0x1496f8
void entry_001496d8_0x1496d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001496d8_0x1496d8");
#endif

    ctx->pc = 0x1496d8u;

    // 0x1496d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1496dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1496dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1496e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1496e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1496e4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1496E4u;
    {
        const bool branch_taken_0x1496e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1496e4) {
            ctx->pc = 0x1496E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1496E4u;
            // 0x1496e8: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149738u;
            return;
        }
    }
    ctx->pc = 0x1496ECu;
    // 0x1496ec: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1496f0: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x1496f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1496f4: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x1496f4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    ctx->pc = 0x1496f8u;
}
