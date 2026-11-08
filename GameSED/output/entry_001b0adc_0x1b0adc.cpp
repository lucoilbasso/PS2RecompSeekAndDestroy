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

// Function: entry_001b0adc
// Address: 0x1b0adc - 0x1b0aec
void entry_001b0adc_0x1b0adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0adc_0x1b0adc");
#endif

    ctx->pc = 0x1b0adcu;

    // 0x1b0adc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0ADCu;
    {
        const bool branch_taken_0x1b0adc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ADCu;
        // 0x1b0ae0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0adc) {
            ctx->pc = 0x1B0AECu;
            return;
        }
    }
    ctx->pc = 0x1B0AE4u;
    // 0x1b0ae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0AE4u;
    {
        const bool branch_taken_0x1b0ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AE4u;
        // 0x1b0ae8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ae4) {
            ctx->pc = 0x1B0AF0u;
            return;
        }
    }
    ctx->pc = 0x1B0AECu;
}
