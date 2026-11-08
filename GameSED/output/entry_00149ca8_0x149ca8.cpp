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

// Function: entry_00149ca8
// Address: 0x149ca8 - 0x149cc8
void entry_00149ca8_0x149ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149ca8_0x149ca8");
#endif

    ctx->pc = 0x149ca8u;

    // 0x149ca8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x149ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x149cac: 0x1a4102a  slt         $v0, $t5, $a0
    ctx->pc = 0x149cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149cb0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x149CB0u;
    {
        const bool branch_taken_0x149cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149cb0) {
            ctx->pc = 0x149CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CB0u;
            // 0x149cb4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149D04u;
            return;
        }
    }
    ctx->pc = 0x149CB8u;
    // 0x149cb8: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x149cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x149cbc: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x149cc0: 0x2c470080  sltiu       $a3, $v0, 0x80
    ctx->pc = 0x149cc0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x149cc4: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x149cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->pc = 0x149cc8u;
}
