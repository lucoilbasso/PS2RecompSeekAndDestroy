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

// Function: entry_00184c04
// Address: 0x184c04 - 0x184c18
void entry_00184c04_0x184c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c04_0x184c04");
#endif

    ctx->pc = 0x184c04u;

    // 0x184c04: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x184C04u;
    {
        const bool branch_taken_0x184c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x184C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C04u;
        // 0x184c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c04) {
            ctx->pc = 0x184BE0u;
            return;
        }
    }
    ctx->pc = 0x184C0Cu;
    // 0x184c0c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C0Cu;
        // 0x184c10: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184CD4u;
            return;
        }
    }
    ctx->pc = 0x184C14u;
    // 0x184c14: 0x0  nop
    ctx->pc = 0x184c14u;
    // NOP
    ctx->pc = 0x184c18u;
}
