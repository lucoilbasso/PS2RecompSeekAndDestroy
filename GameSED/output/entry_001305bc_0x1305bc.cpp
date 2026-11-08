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

// Function: entry_001305bc
// Address: 0x1305bc - 0x1305d0
void entry_001305bc_0x1305bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001305bc_0x1305bc");
#endif

    ctx->pc = 0x1305bcu;

    // 0x1305bc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1305BCu;
    {
        const bool branch_taken_0x1305bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1305C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305BCu;
        // 0x1305c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305bc) {
            ctx->pc = 0x130598u;
            return;
        }
    }
    ctx->pc = 0x1305C4u;
    // 0x1305c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1305C4u;
    {
        const bool branch_taken_0x1305c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305C4u;
        // 0x1305c8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305c4) {
            ctx->pc = 0x1305DCu;
            return;
        }
    }
    ctx->pc = 0x1305CCu;
    // 0x1305cc: 0x0  nop
    ctx->pc = 0x1305ccu;
    // NOP
    ctx->pc = 0x1305d0u;
}
