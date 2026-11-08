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

// Function: entry_00111a58
// Address: 0x111a58 - 0x111a68
void entry_00111a58_0x111a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a58_0x111a58");
#endif

    ctx->pc = 0x111a58u;

    // 0x111a58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111A58u;
    {
        const bool branch_taken_0x111a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a58) {
            ctx->pc = 0x111A78u;
            return;
        }
    }
    ctx->pc = 0x111A60u;
    // 0x111a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111A60u;
    {
        const bool branch_taken_0x111a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A60u;
        // 0x111a64: 0x2442fffa  addiu       $v0, $v0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a60) {
            ctx->pc = 0x111A84u;
            return;
        }
    }
    ctx->pc = 0x111A68u;
}
