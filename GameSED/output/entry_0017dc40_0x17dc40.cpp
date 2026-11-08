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

// Function: entry_0017dc40
// Address: 0x17dc40 - 0x17dc50
void entry_0017dc40_0x17dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc40_0x17dc40");
#endif

    ctx->pc = 0x17dc40u;

    // 0x17dc40: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x17dc40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x17dc44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC90u;
            return;
        }
    }
    ctx->pc = 0x17DC4Cu;
    // 0x17dc4c: 0x0  nop
    ctx->pc = 0x17dc4cu;
    // NOP
    ctx->pc = 0x17dc50u;
}
