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

// Function: entry_0012dcc0
// Address: 0x12dcc0 - 0x12dcf8
void entry_0012dcc0_0x12dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dcc0_0x12dcc0");
#endif

    ctx->pc = 0x12dcc0u;

    // 0x12dcc0: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12DCC0u;
    {
        const bool branch_taken_0x12dcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dcc0) {
            ctx->pc = 0x12DDF4u;
            return;
        }
    }
    ctx->pc = 0x12DCC8u;
    // 0x12dcc8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x12dccc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x12dcd0: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12dcd4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x12dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12dcd8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12dcd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12dcdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12dce0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DCE0u;
    {
        const bool branch_taken_0x12dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCE0u;
        // 0x12dce4: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dce0) {
            ctx->pc = 0x12DCF8u;
            return;
        }
    }
    ctx->pc = 0x12DCE8u;
    // 0x12dce8: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x12dcec: 0x24a55e70  addiu       $a1, $a1, 0x5E70
    ctx->pc = 0x12dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24176));
    // 0x12dcf0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12DCF0u;
    SET_GPR_U32(ctx, 31, 0x12DCF8u);
    ctx->pc = 0x12DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DCF0u;
    // 0x12dcf4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12DCF0u, 0x12DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCF8u;
}
