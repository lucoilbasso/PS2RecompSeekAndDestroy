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

// Function: entry_001552ac
// Address: 0x1552ac - 0x1552c0
void entry_001552ac_0x1552ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001552ac_0x1552ac");
#endif

    ctx->pc = 0x1552acu;

    // 0x1552ac: 0x5480001b  bnel        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1552ACu;
    {
        const bool branch_taken_0x1552ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552ac) {
            ctx->pc = 0x1552B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1552ACu;
            // 0x1552b0: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1552B4u;
    // 0x1552b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1552B4u;
    {
        const bool branch_taken_0x1552b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B4u;
        // 0x1552b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552b4) {
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x1552BCu;
    // 0x1552bc: 0x0  nop
    ctx->pc = 0x1552bcu;
    // NOP
    ctx->pc = 0x1552c0u;
}
