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

// Function: entry_0014baf8
// Address: 0x14baf8 - 0x14bb38
void entry_0014baf8_0x14baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014baf8_0x14baf8");
#endif

    ctx->pc = 0x14baf8u;

    // 0x14baf8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14bafc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14bb00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BB00u;
    {
        const bool branch_taken_0x14bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB00u;
        // 0x14bb04: 0xae320240  sw          $s2, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb00) {
            ctx->pc = 0x14BB38u;
            return;
        }
    }
    ctx->pc = 0x14BB08u;
    // 0x14bb08: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BB08u;
    {
        const bool branch_taken_0x14bb08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB08u;
        // 0x14bb0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb08) {
            ctx->pc = 0x14BB3Cu;
            return;
        }
    }
    ctx->pc = 0x14BB10u;
    // 0x14bb10: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14bb14: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x14bb18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14bb1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BB1Cu;
    {
        const bool branch_taken_0x14bb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB1Cu;
        // 0x14bb20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb1c) {
            ctx->pc = 0x14BB3Cu;
            return;
        }
    }
    ctx->pc = 0x14BB24u;
    // 0x14bb24: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x14bb28: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14bb2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14BB2Cu;
    {
        const bool branch_taken_0x14bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB2Cu;
        // 0x14bb30: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb2c) {
            ctx->pc = 0x14BB48u;
            return;
        }
    }
    ctx->pc = 0x14BB34u;
    // 0x14bb34: 0x0  nop
    ctx->pc = 0x14bb34u;
    // NOP
    ctx->pc = 0x14bb38u;
}
