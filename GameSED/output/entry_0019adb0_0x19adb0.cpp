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

// Function: entry_0019adb0
// Address: 0x19adb0 - 0x19add0
void entry_0019adb0_0x19adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019adb0_0x19adb0");
#endif

    ctx->pc = 0x19adb0u;

label_19adb0:
    // 0x19adb0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19adb4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x19adb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19adb8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19adbc: 0x0  nop
    ctx->pc = 0x19adbcu;
    // NOP
    // 0x19adc0: 0x0  nop
    ctx->pc = 0x19adc0u;
    // NOP
    // 0x19adc4: 0x14e9fffa  bne         $a3, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ADC4u;
    {
        const bool branch_taken_0x19adc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x19ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC4u;
        // 0x19adc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adc4) {
            ctx->pc = 0x19ADB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19adb0;
        }
    }
    ctx->pc = 0x19ADCCu;
    // 0x19adcc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19adccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x19add0u;
}
