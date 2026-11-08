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

// Function: entry_0017fd74
// Address: 0x17fd74 - 0x17fd84
void entry_0017fd74_0x17fd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fd74_0x17fd74");
#endif

    ctx->pc = 0x17fd74u;

    // 0x17fd74: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x17fd78: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FD78u;
    {
        const bool branch_taken_0x17fd78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD78u;
        // 0x17fd7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd78) {
            ctx->pc = 0x17FD84u;
            return;
        }
    }
    ctx->pc = 0x17FD80u;
    // 0x17fd80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x17fd84u;
}
