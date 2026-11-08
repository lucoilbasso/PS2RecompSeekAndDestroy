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

// Function: entry_00130cf8
// Address: 0x130cf8 - 0x130d18
void entry_00130cf8_0x130cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130cf8_0x130cf8");
#endif

    ctx->pc = 0x130cf8u;

    // 0x130cf8: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x130cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x130cfc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x130d00: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x130D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D00u;
        // 0x130d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130D08u;
    // 0x130d08: 0x8c8401f8  lw          $a0, 0x1F8($a0)
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x130d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x130d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d10: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130d14: 0x0  nop
    ctx->pc = 0x130d14u;
    // NOP
    ctx->pc = 0x130d18u;
}
