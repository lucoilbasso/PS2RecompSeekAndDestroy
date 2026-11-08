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

// Function: entry_0011e168
// Address: 0x11e168 - 0x11e1a0
void entry_0011e168_0x11e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e168_0x11e168");
#endif

    ctx->pc = 0x11e168u;

label_11e168:
    // 0x11e168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e16c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e170: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e174: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E174u;
    {
        const bool branch_taken_0x11e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E174u;
        // 0x11e178: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e174) {
            ctx->pc = 0x11E1A4u;
            return;
        }
    }
    ctx->pc = 0x11E17Cu;
    // 0x11e17c: 0x108a0009  beq         $a0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E17Cu;
    {
        const bool branch_taken_0x11e17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x11E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E17Cu;
        // 0x11e180: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e17c) {
            ctx->pc = 0x11E1A4u;
            return;
        }
    }
    ctx->pc = 0x11E184u;
    // 0x11e184: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e18c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e190: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e194: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e198: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E198u;
    {
        const bool branch_taken_0x11e198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E198u;
        // 0x11e19c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e198) {
            ctx->pc = 0x11E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e168;
        }
    }
    ctx->pc = 0x11E1A0u;
}
