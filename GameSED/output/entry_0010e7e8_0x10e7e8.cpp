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

// Function: entry_0010e7e8
// Address: 0x10e7e8 - 0x10e80c
void entry_0010e7e8_0x10e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e7e8_0x10e7e8");
#endif

    ctx->pc = 0x10e7e8u;

    // 0x10e7e8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x10e7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x10e7ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e7f0: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x10e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x10e7f4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E7F4u;
    {
        const bool branch_taken_0x10e7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7f4) {
            ctx->pc = 0x10E85Cu;
            return;
        }
    }
    ctx->pc = 0x10E7FCu;
    // 0x10e7fc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x10e7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e800: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E800u;
    {
        const bool branch_taken_0x10e800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E800u;
        // 0x10e804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e800) {
            ctx->pc = 0x10E80Cu;
            return;
        }
    }
    ctx->pc = 0x10E808u;
    // 0x10e808: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x10e80cu;
}
