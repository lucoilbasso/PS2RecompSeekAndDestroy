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

// Function: entry_00183eb0
// Address: 0x183eb0 - 0x183ec4
void entry_00183eb0_0x183eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183eb0_0x183eb0");
#endif

    ctx->pc = 0x183eb0u;

    // 0x183eb0: 0x0  nop
    ctx->pc = 0x183eb0u;
    // NOP
    // 0x183eb4: 0x0  nop
    ctx->pc = 0x183eb4u;
    // NOP
    // 0x183eb8: 0x0  nop
    ctx->pc = 0x183eb8u;
    // NOP
    // 0x183ebc: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x183EBCu;
    {
        const bool branch_taken_0x183ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183ebc) {
            ctx->pc = 0x183EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183EBCu;
            // 0x183ec0: 0x94e40004  lhu         $a0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183E98u;
            return;
        }
    }
    ctx->pc = 0x183EC4u;
}
