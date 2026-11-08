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

// Function: entry_001ca848
// Address: 0x1ca848 - 0x1ca860
void entry_001ca848_0x1ca848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca848_0x1ca848");
#endif

    ctx->pc = 0x1ca848u;

    // 0x1ca848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca84c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1ca850: 0x1580ffdb  bnez        $t4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CA850u;
    {
        const bool branch_taken_0x1ca850 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA850u;
        // 0x1ca854: 0xac580000  sw          $t8, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca850) {
            ctx->pc = 0x1CA7C0u;
            return;
        }
    }
    ctx->pc = 0x1CA858u;
    // 0x1ca858: 0x2191021  addu        $v0, $s0, $t9
    ctx->pc = 0x1ca858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x1ca85c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ca85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1ca860u;
}
