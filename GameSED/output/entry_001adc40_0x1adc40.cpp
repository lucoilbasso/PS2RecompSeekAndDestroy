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

// Function: entry_001adc40
// Address: 0x1adc40 - 0x1adc58
void entry_001adc40_0x1adc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adc40_0x1adc40");
#endif

    ctx->pc = 0x1adc40u;

    // 0x1adc40: 0x12c00016  beqz        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADC40u;
    {
        const bool branch_taken_0x1adc40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC40u;
        // 0x1adc44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc40) {
            ctx->pc = 0x1ADC9Cu;
            return;
        }
    }
    ctx->pc = 0x1ADC48u;
    // 0x1adc48: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adc4c: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x1adc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1adc50: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1adc54: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1adc58u;
}
