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

// Function: entry_00145008
// Address: 0x145008 - 0x145030
void entry_00145008_0x145008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145008_0x145008");
#endif

    ctx->pc = 0x145008u;

    // 0x145008: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14500c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x14500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145010: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x145010u;
    {
        const bool branch_taken_0x145010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145010) {
            ctx->pc = 0x145014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145010u;
            // 0x145014: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145070u;
            return;
        }
    }
    ctx->pc = 0x145018u;
    // 0x145018: 0x619c0  sll         $v1, $a2, 7
    ctx->pc = 0x145018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x14501c: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x14501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x145020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145024: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x145024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x145028: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x145028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14502c: 0x24432040  addiu       $v1, $v0, 0x2040
    ctx->pc = 0x14502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    ctx->pc = 0x145030u;
}
