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

// Function: entry_001d3cc8
// Address: 0x1d3cc8 - 0x1d3cd8
void entry_001d3cc8_0x1d3cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cc8_0x1d3cc8");
#endif

    ctx->pc = 0x1d3cc8u;

    // 0x1d3cc8: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x1d3cc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d3ccc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3CCCu;
    {
        const bool branch_taken_0x1d3ccc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CCCu;
        // 0x1d3cd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ccc) {
            ctx->pc = 0x1D3CD8u;
            return;
        }
    }
    ctx->pc = 0x1D3CD4u;
    // 0x1d3cd4: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x1d3cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x1d3cd8u;
}
