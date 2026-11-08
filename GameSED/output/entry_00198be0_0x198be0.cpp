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

// Function: entry_00198be0
// Address: 0x198be0 - 0x198c00
void entry_00198be0_0x198be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198be0_0x198be0");
#endif

    ctx->pc = 0x198be0u;

    // 0x198be0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x198be0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198be4: 0x12a00056  beqz        $s5, . + 4 + (0x56 << 2)
    ctx->pc = 0x198BE4u;
    {
        const bool branch_taken_0x198be4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BE4u;
        // 0x198be8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198be4) {
            ctx->pc = 0x198D40u;
            return;
        }
    }
    ctx->pc = 0x198BECu;
    // 0x198bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bf0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bf4: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198bf8: 0x17bff8  dsll        $s7, $s7, 31
    ctx->pc = 0x198bf8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 31);
    // 0x198bfc: 0x0  nop
    ctx->pc = 0x198bfcu;
    // NOP
    ctx->pc = 0x198c00u;
}
