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

// Function: entry_001601a8
// Address: 0x1601a8 - 0x1601c8
void entry_001601a8_0x1601a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601a8_0x1601a8");
#endif

    ctx->pc = 0x1601a8u;

    // 0x1601a8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1601ac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1601b0: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1601B0u;
    {
        const bool branch_taken_0x1601b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601B0u;
        // 0x1601b4: 0x2404ff7e  addiu       $a0, $zero, -0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601b0) {
            ctx->pc = 0x1601DCu;
            return;
        }
    }
    ctx->pc = 0x1601B8u;
    // 0x1601b8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1601b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1601bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1601BCu;
    {
        const bool branch_taken_0x1601bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1601bc) {
            ctx->pc = 0x1601C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1601BCu;
            // 0x1601c0: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601E0u;
            return;
        }
    }
    ctx->pc = 0x1601C4u;
    // 0x1601c4: 0x24630082  addiu       $v1, $v1, 0x82
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 130));
    ctx->pc = 0x1601c8u;
}
