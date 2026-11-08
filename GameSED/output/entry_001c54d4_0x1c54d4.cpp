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

// Function: entry_001c54d4
// Address: 0x1c54d4 - 0x1c54f0
void entry_001c54d4_0x1c54d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c54d4_0x1c54d4");
#endif

    ctx->pc = 0x1c54d4u;

    // 0x1c54d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C54D4u;
    {
        const bool branch_taken_0x1c54d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54d4) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C54DCu;
    // 0x1c54dc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1c54dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c54e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C54E0u;
    {
        const bool branch_taken_0x1c54e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54E0u;
        // 0x1c54e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54e0) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C54E8u;
    // 0x1c54e8: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1c54ec: 0x0  nop
    ctx->pc = 0x1c54ecu;
    // NOP
    ctx->pc = 0x1c54f0u;
}
