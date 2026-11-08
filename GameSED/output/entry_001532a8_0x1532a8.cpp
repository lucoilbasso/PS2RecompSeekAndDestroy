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

// Function: entry_001532a8
// Address: 0x1532a8 - 0x1532e4
void entry_001532a8_0x1532a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001532a8_0x1532a8");
#endif

    ctx->pc = 0x1532a8u;

    // 0x1532a8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1532A8u;
    {
        const bool branch_taken_0x1532a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532A8u;
        // 0x1532ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532a8) {
            ctx->pc = 0x1532E4u;
            return;
        }
    }
    ctx->pc = 0x1532B0u;
    // 0x1532b0: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x1532b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1532b4: 0x8c621ab0  lw          $v0, 0x1AB0($v1)
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6832)));
    // 0x1532b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1532b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1532bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1532BCu;
    {
        const bool branch_taken_0x1532bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532BCu;
        // 0x1532c0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532bc) {
            ctx->pc = 0x1532E4u;
            return;
        }
    }
    ctx->pc = 0x1532C4u;
    // 0x1532c4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1532c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1532c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1532cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1532CCu;
    {
        const bool branch_taken_0x1532cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532cc) {
            ctx->pc = 0x1532E4u;
            return;
        }
    }
    ctx->pc = 0x1532D4u;
    // 0x1532d4: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x1532d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1532d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1532dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1532dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1532e0: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x1532e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    ctx->pc = 0x1532e4u;
}
