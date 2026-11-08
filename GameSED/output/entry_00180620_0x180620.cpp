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

// Function: entry_00180620
// Address: 0x180620 - 0x180650
void entry_00180620_0x180620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180620_0x180620");
#endif

    ctx->pc = 0x180620u;

    // 0x180620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180628: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x180628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18062c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x180630: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x180630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180634: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180634u;
    {
        const bool branch_taken_0x180634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180634u;
        // 0x180638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180634) {
            ctx->pc = 0x180650u;
            return;
        }
    }
    ctx->pc = 0x18063Cu;
    // 0x18063c: 0x6200028  bltz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x18063Cu;
    {
        const bool branch_taken_0x18063c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x180640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18063Cu;
        // 0x180640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18063c) {
            ctx->pc = 0x1806E0u;
            return;
        }
    }
    ctx->pc = 0x180644u;
    // 0x180644: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x180644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x180648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180648u;
    {
        const bool branch_taken_0x180648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180648u;
        // 0x18064c: 0x1219c0  sll         $v1, $s2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180648) {
            ctx->pc = 0x180658u;
            return;
        }
    }
    ctx->pc = 0x180650u;
}
