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

// Function: entry_001c0d3c
// Address: 0x1c0d3c - 0x1c0d50
void entry_001c0d3c_0x1c0d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d3c_0x1c0d3c");
#endif

    ctx->pc = 0x1c0d3cu;

    // 0x1c0d3c: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D3Cu;
    {
        const bool branch_taken_0x1c0d3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x1c0d3c) {
            ctx->pc = 0x1C0D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0D3Cu;
            // 0x1c0d40: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0D9Cu;
            return;
        }
    }
    ctx->pc = 0x1C0D44u;
    // 0x1c0d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0D48u;
    {
        const bool branch_taken_0x1c0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D48u;
        // 0x1c0d4c: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d48) {
            ctx->pc = 0x1C0DA0u;
            return;
        }
    }
    ctx->pc = 0x1C0D50u;
}
