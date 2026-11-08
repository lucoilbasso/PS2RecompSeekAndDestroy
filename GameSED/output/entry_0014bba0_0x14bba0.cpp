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

// Function: entry_0014bba0
// Address: 0x14bba0 - 0x14bbb8
void entry_0014bba0_0x14bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bba0_0x14bba0");
#endif

    ctx->pc = 0x14bba0u;

    // 0x14bba0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBA0u;
    {
        const bool branch_taken_0x14bba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA0u;
        // 0x14bba4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba0) {
            ctx->pc = 0x14BBB8u;
            return;
        }
    }
    ctx->pc = 0x14BBA8u;
    // 0x14bba8: 0x1282000e  beq         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14BBA8u;
    {
        const bool branch_taken_0x14bba8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA8u;
        // 0x14bbac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba8) {
            ctx->pc = 0x14BBE4u;
            return;
        }
    }
    ctx->pc = 0x14BBB0u;
    // 0x14bbb0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BBD0u;
            return;
        }
    }
    ctx->pc = 0x14BBB8u;
}
