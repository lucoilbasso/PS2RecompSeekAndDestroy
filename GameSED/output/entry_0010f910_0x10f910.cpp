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

// Function: entry_0010f910
// Address: 0x10f910 - 0x10f92c
void entry_0010f910_0x10f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f910_0x10f910");
#endif

    ctx->pc = 0x10f910u;

    // 0x10f910: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10f910u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f914: 0x8eb20018  lw          $s2, 0x18($s5)
    ctx->pc = 0x10f914u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10f918: 0x12400158  beqz        $s2, . + 4 + (0x158 << 2)
    ctx->pc = 0x10F918u;
    {
        const bool branch_taken_0x10f918 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F918u;
        // 0x10f91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f918) {
            ctx->pc = 0x10FE7Cu;
            return;
        }
    }
    ctx->pc = 0x10F920u;
    // 0x10f920: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10f920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10f924: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x10f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x10f928: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x10f928u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->pc = 0x10f92cu;
}
