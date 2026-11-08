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

// Function: entry_0017146c
// Address: 0x17146c - 0x1714a0
void entry_0017146c_0x17146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017146c_0x17146c");
#endif

    ctx->pc = 0x17146cu;

    // 0x17146c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x171470: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x171470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171474: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x171474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171478: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x171478u;
    {
        const bool branch_taken_0x171478 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171478u;
        // 0x17147c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171478) {
            ctx->pc = 0x1714A4u;
            return;
        }
    }
    ctx->pc = 0x171480u;
    // 0x171480: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x171480u;
    {
        const bool branch_taken_0x171480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171480) {
            ctx->pc = 0x171484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171480u;
            // 0x171484: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1714A0u;
            return;
        }
    }
    ctx->pc = 0x171488u;
    // 0x171488: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17148c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171490: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x171494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171494u;
    {
        const bool branch_taken_0x171494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171494u;
        // 0x171498: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171494) {
            ctx->pc = 0x1714A4u;
            return;
        }
    }
    ctx->pc = 0x17149Cu;
    // 0x17149c: 0x0  nop
    ctx->pc = 0x17149cu;
    // NOP
    ctx->pc = 0x1714a0u;
}
