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

// Function: entry_0013f2e4
// Address: 0x13f2e4 - 0x13f318
void entry_0013f2e4_0x13f2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f2e4_0x13f2e4");
#endif

    ctx->pc = 0x13f2e4u;

    // 0x13f2e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f2e8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13f2ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13f2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f2f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f2f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2fc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13f300: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F300u;
    {
        const bool branch_taken_0x13f300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F300u;
        // 0x13f304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f300) {
            ctx->pc = 0x13F338u;
            return;
        }
    }
    ctx->pc = 0x13F308u;
    // 0x13f308: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x13f308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13f30c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F30Cu;
    {
        const bool branch_taken_0x13f30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F30Cu;
        // 0x13f310: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f30c) {
            ctx->pc = 0x13F334u;
            return;
        }
    }
    ctx->pc = 0x13F314u;
    // 0x13f314: 0x0  nop
    ctx->pc = 0x13f314u;
    // NOP
    ctx->pc = 0x13f318u;
}
