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

// Function: entry_00149aa8
// Address: 0x149aa8 - 0x149ac8
void entry_00149aa8_0x149aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149aa8_0x149aa8");
#endif

    ctx->pc = 0x149aa8u;

    // 0x149aa8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x149aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x149aac: 0x1a3102a  slt         $v0, $t5, $v1
    ctx->pc = 0x149aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ab0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x149AB0u;
    {
        const bool branch_taken_0x149ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ab0) {
            ctx->pc = 0x149AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149AB0u;
            // 0x149ab4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149B04u;
            return;
        }
    }
    ctx->pc = 0x149AB8u;
    // 0x149ab8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x149ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x149abc: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x149ac0: 0x2c460080  sltiu       $a2, $v0, 0x80
    ctx->pc = 0x149ac0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x149ac4: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x149ac8u;
}
