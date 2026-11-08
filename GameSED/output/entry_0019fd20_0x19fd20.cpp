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

// Function: entry_0019fd20
// Address: 0x19fd20 - 0x19fd48
void entry_0019fd20_0x19fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd20_0x19fd20");
#endif

    ctx->pc = 0x19fd20u;

    // 0x19fd20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19fd24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fd28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fd2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fd30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FD30u;
    {
        const bool branch_taken_0x19fd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd30) {
            ctx->pc = 0x19FD78u;
            return;
        }
    }
    ctx->pc = 0x19FD38u;
    // 0x19fd38: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x19fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x19fd3c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x19fd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x19fd40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x19fd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x19fd44: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x19fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    ctx->pc = 0x19fd48u;
}
