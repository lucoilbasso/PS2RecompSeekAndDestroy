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

// Function: entry_0011e130
// Address: 0x11e130 - 0x11e168
void entry_0011e130_0x11e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e130_0x11e130");
#endif

    ctx->pc = 0x11e130u;

    // 0x11e130: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e134: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e138: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e13c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e148: 0x1222821  addu        $a1, $t1, $v0
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11e14c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e150: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e154: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E154u;
    {
        const bool branch_taken_0x11e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E154u;
        // 0x11e158: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e154) {
            ctx->pc = 0x11E1A0u;
            return;
        }
    }
    ctx->pc = 0x11E15Cu;
    // 0x11e15c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x11e15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e160: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e164: 0x0  nop
    ctx->pc = 0x11e164u;
    // NOP
    ctx->pc = 0x11e168u;
}
