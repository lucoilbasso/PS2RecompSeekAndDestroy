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

// Function: entry_001025c0
// Address: 0x1025c0 - 0x1025f0
void entry_001025c0_0x1025c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001025c0_0x1025c0");
#endif

    ctx->pc = 0x1025c0u;

    // 0x1025c0: 0x6430025  bgezl       $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1025C0u;
    {
        const bool branch_taken_0x1025c0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1025c0) {
            ctx->pc = 0x1025C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025C0u;
            // 0x1025c4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102658u;
            return;
        }
    }
    ctx->pc = 0x1025C8u;
    // 0x1025c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1025c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1025cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1025ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1025d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1025D0u;
    {
        const bool branch_taken_0x1025d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025D0u;
        // 0x1025d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025d0) {
            ctx->pc = 0x102618u;
            return;
        }
    }
    ctx->pc = 0x1025D8u;
    // 0x1025d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1025d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1025dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1025dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1025e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1025E0u;
    {
        const bool branch_taken_0x1025e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1025e0) {
            ctx->pc = 0x1025E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1025E0u;
            // 0x1025e4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1025F0u;
            return;
        }
    }
    ctx->pc = 0x1025E8u;
    // 0x1025e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1025E8u;
    {
        const bool branch_taken_0x1025e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E8u;
        // 0x1025ec: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e8) {
            ctx->pc = 0x102618u;
            return;
        }
    }
    ctx->pc = 0x1025F0u;
}
