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

// Function: entry_0018e854
// Address: 0x18e854 - 0x18e870
void entry_0018e854_0x18e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e854_0x18e854");
#endif

    ctx->pc = 0x18e854u;

    // 0x18e854: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18e854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e85c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e860: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x18e860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x18e864: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E864u;
    {
        const bool branch_taken_0x18e864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E864u;
        // 0x18e868: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e864) {
            ctx->pc = 0x18E870u;
            return;
        }
    }
    ctx->pc = 0x18E86Cu;
    // 0x18e86c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18e870u;
}
