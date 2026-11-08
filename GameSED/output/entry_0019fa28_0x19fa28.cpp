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

// Function: entry_0019fa28
// Address: 0x19fa28 - 0x19fa48
void entry_0019fa28_0x19fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa28_0x19fa28");
#endif

    ctx->pc = 0x19fa28u;

    // 0x19fa28: 0x483024  and         $a2, $v0, $t0
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x19fa2c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19fa30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA30u;
    {
        const bool branch_taken_0x19fa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa30) {
            ctx->pc = 0x19FA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA30u;
            // 0x19fa34: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA48u;
            return;
        }
    }
    ctx->pc = 0x19FA38u;
    // 0x19fa38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19fa3c: 0x1446000e  bne         $v0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19FA3Cu;
    {
        const bool branch_taken_0x19fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x19FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA3Cu;
        // 0x19fa40: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa3c) {
            ctx->pc = 0x19FA78u;
            return;
        }
    }
    ctx->pc = 0x19FA44u;
    // 0x19fa44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x19fa48u;
}
