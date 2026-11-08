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

// Function: entry_001adc34
// Address: 0x1adc34 - 0x1adc40
void entry_001adc34_0x1adc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adc34_0x1adc34");
#endif

    ctx->pc = 0x1adc34u;

    // 0x1adc34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1adc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adc38: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1ADC38u;
    {
        const bool branch_taken_0x1adc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC38u;
        // 0x1adc3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc38) {
            ctx->pc = 0x1ADD08u;
            return;
        }
    }
    ctx->pc = 0x1ADC40u;
}
