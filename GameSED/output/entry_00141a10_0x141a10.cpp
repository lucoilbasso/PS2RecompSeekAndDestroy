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

// Function: entry_00141a10
// Address: 0x141a10 - 0x141a30
void entry_00141a10_0x141a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a10_0x141a10");
#endif

    ctx->pc = 0x141a10u;

    // 0x141a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141a14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141a18: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x141a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x141a1c: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x141A1Cu;
    {
        const bool branch_taken_0x141a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x141A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A1Cu;
        // 0x141a20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a1c) {
            ctx->pc = 0x141A50u;
            return;
        }
    }
    ctx->pc = 0x141A24u;
    // 0x141a24: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141a28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141A28u;
    {
        const bool branch_taken_0x141a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A28u;
        // 0x141a2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a28) {
            ctx->pc = 0x141A4Cu;
            return;
        }
    }
    ctx->pc = 0x141A30u;
}
