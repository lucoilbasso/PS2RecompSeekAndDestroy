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

// Function: entry_001b1adc
// Address: 0x1b1adc - 0x1b1af0
void entry_001b1adc_0x1b1adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1adc_0x1b1adc");
#endif

    ctx->pc = 0x1b1adcu;

    // 0x1b1adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ae0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b1ae4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1AE4u;
    {
        const bool branch_taken_0x1b1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ae4) {
            ctx->pc = 0x1B1AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1AE4u;
            // 0x1b1ae8: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1B10u;
            return;
        }
    }
    ctx->pc = 0x1B1AECu;
    // 0x1b1aec: 0x0  nop
    ctx->pc = 0x1b1aecu;
    // NOP
    ctx->pc = 0x1b1af0u;
}
