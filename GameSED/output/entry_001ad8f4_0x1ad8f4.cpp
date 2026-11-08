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

// Function: entry_001ad8f4
// Address: 0x1ad8f4 - 0x1ad914
void entry_001ad8f4_0x1ad8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad8f4_0x1ad8f4");
#endif

    ctx->pc = 0x1ad8f4u;

    // 0x1ad8f4: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD8F4u;
    {
        const bool branch_taken_0x1ad8f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad8f4) {
            ctx->pc = 0x1AD914u;
            return;
        }
    }
    ctx->pc = 0x1AD8FCu;
    // 0x1ad8fc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad900: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AD900u;
    {
        const bool branch_taken_0x1ad900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD900u;
        // 0x1ad904: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad900) {
            ctx->pc = 0x1AD964u;
            return;
        }
    }
    ctx->pc = 0x1AD908u;
    // 0x1ad908: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad90c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ad90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ad910: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1ad910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1ad914u;
}
