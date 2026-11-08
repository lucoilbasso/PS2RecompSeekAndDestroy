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

// Function: entry_0019fa64
// Address: 0x19fa64 - 0x19fa78
void entry_0019fa64_0x19fa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa64_0x19fa64");
#endif

    ctx->pc = 0x19fa64u;

    // 0x19fa64: 0x54a0000d  bnel        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19FA64u;
    {
        const bool branch_taken_0x19fa64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fa64) {
            ctx->pc = 0x19FA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA64u;
            // 0x19fa68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FA9Cu;
            return;
        }
    }
    ctx->pc = 0x19FA6Cu;
    // 0x19fa6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19FA6Cu;
    {
        const bool branch_taken_0x19fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA6Cu;
        // 0x19fa70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa6c) {
            ctx->pc = 0x19FAE8u;
            return;
        }
    }
    ctx->pc = 0x19FA74u;
    // 0x19fa74: 0x0  nop
    ctx->pc = 0x19fa74u;
    // NOP
    ctx->pc = 0x19fa78u;
}
