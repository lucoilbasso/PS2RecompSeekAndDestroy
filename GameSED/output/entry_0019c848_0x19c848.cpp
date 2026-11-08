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

// Function: entry_0019c848
// Address: 0x19c848 - 0x19c878
void entry_0019c848_0x19c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c848_0x19c848");
#endif

    ctx->pc = 0x19c848u;

    // 0x19c848: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x19c848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x19c84c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c850: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19C850u;
    {
        const bool branch_taken_0x19c850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C850u;
        // 0x19c854: 0x21e03  sra         $v1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c850) {
            ctx->pc = 0x19C88Cu;
            return;
        }
    }
    ctx->pc = 0x19C858u;
    // 0x19c858: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x19c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x19c85c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19c860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C860u;
    {
        const bool branch_taken_0x19c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C860u;
        // 0x19c864: 0x24e2ff9f  addiu       $v0, $a3, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c860) {
            ctx->pc = 0x19C878u;
            return;
        }
    }
    ctx->pc = 0x19C868u;
    // 0x19c868: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x19c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x19c86c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c870: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x19c870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19c874: 0x24e2ff9f  addiu       $v0, $a3, -0x61
    ctx->pc = 0x19c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    ctx->pc = 0x19c878u;
}
