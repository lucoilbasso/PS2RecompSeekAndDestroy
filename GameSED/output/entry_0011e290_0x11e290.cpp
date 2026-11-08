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

// Function: entry_0011e290
// Address: 0x11e290 - 0x11e2c8
void entry_0011e290_0x11e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e290_0x11e290");
#endif

    ctx->pc = 0x11e290u;

    // 0x11e290: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11e294: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x11e294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11e298: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x11e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x11e29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11e2a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e2a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e2ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e2b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E2B4u;
    {
        const bool branch_taken_0x11e2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2B4u;
        // 0x11e2b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2b4) {
            ctx->pc = 0x11E304u;
            return;
        }
    }
    ctx->pc = 0x11E2BCu;
    // 0x11e2bc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x11e2bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x11e2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2c4: 0x0  nop
    ctx->pc = 0x11e2c4u;
    // NOP
    ctx->pc = 0x11e2c8u;
}
