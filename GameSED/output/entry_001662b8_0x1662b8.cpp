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

// Function: entry_001662b8
// Address: 0x1662b8 - 0x1662c8
void entry_001662b8_0x1662b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001662b8_0x1662b8");
#endif

    ctx->pc = 0x1662b8u;

    // 0x1662b8: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1662B8u;
    {
        const bool branch_taken_0x1662b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1662BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662B8u;
        // 0x1662bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662b8) {
            ctx->pc = 0x166480u;
            return;
        }
    }
    ctx->pc = 0x1662C0u;
    // 0x1662c0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1662C0u;
    {
        const bool branch_taken_0x1662c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662C0u;
        // 0x1662c4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662c0) {
            ctx->pc = 0x1665A4u;
            return;
        }
    }
    ctx->pc = 0x1662C8u;
}
