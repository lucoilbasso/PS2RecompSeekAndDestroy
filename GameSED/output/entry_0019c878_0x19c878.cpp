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

// Function: entry_0019c878
// Address: 0x19c878 - 0x19c88c
void entry_0019c878_0x19c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c878_0x19c878");
#endif

    ctx->pc = 0x19c878u;

    // 0x19c878: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19c878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19c87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C87Cu;
    {
        const bool branch_taken_0x19c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C87Cu;
        // 0x19c880: 0x24e2ffe0  addiu       $v0, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c87c) {
            ctx->pc = 0x19C88Cu;
            return;
        }
    }
    ctx->pc = 0x19C884u;
    // 0x19c884: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c888: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
    ctx->pc = 0x19c88cu;
}
