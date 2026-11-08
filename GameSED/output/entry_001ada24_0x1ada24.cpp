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

// Function: entry_001ada24
// Address: 0x1ada24 - 0x1ada4c
void entry_001ada24_0x1ada24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada24_0x1ada24");
#endif

    ctx->pc = 0x1ada24u;

    // 0x1ada24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ada24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ada28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ada2c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ada2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ada30: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADA30u;
    {
        const bool branch_taken_0x1ada30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ada30) {
            ctx->pc = 0x1ADA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADA30u;
            // 0x1ada34: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA4Cu;
            return;
        }
    }
    ctx->pc = 0x1ADA38u;
    // 0x1ada38: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ada3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ada3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ada40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada44: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada48: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1ada4cu;
}
