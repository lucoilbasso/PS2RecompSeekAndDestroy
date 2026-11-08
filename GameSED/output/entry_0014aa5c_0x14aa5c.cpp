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

// Function: entry_0014aa5c
// Address: 0x14aa5c - 0x14aa80
void entry_0014aa5c_0x14aa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa5c_0x14aa5c");
#endif

    ctx->pc = 0x14aa5cu;

    // 0x14aa5c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14AA5Cu;
    {
        const bool branch_taken_0x14aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aa5c) {
            ctx->pc = 0x14AA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA5Cu;
            // 0x14aa60: 0x8e2501bc  lw          $a1, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA50u;
            return;
        }
    }
    ctx->pc = 0x14AA64u;
    // 0x14aa64: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x14aa68: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14AA68u;
    {
        const bool branch_taken_0x14aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa68) {
            ctx->pc = 0x14AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA68u;
            // 0x14aa6c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AAB4u;
            return;
        }
    }
    ctx->pc = 0x14AA70u;
    // 0x14aa70: 0x922201ab  lbu         $v0, 0x1AB($s1)
    ctx->pc = 0x14aa70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 427)));
    // 0x14aa74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14AA74u;
    {
        const bool branch_taken_0x14aa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA74u;
        // 0x14aa78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa74) {
            ctx->pc = 0x14AAA4u;
            return;
        }
    }
    ctx->pc = 0x14AA7Cu;
    // 0x14aa7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14aa80u;
}
