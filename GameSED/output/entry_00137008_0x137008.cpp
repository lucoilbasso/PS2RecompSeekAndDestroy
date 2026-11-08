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

// Function: entry_00137008
// Address: 0x137008 - 0x13702c
void entry_00137008_0x137008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137008_0x137008");
#endif

    ctx->pc = 0x137008u;

    // 0x137008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x137008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13700c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13700cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137010: 0x38421118  xori        $v0, $v0, 0x1118
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4376);
    // 0x137014: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x137014u;
    {
        const bool branch_taken_0x137014 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x137018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137014u;
        // 0x137018: 0x242980a  movz        $s3, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137014) {
            ctx->pc = 0x13702Cu;
            return;
        }
    }
    ctx->pc = 0x13701Cu;
    // 0x13701c: 0x8ce2017c  lw          $v0, 0x17C($a3)
    ctx->pc = 0x13701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 380)));
    // 0x137020: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x137020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x137024: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x137024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x137028: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x137028u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x13702cu;
}
