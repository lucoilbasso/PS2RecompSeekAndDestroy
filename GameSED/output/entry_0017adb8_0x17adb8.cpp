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

// Function: entry_0017adb8
// Address: 0x17adb8 - 0x17add4
void entry_0017adb8_0x17adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017adb8_0x17adb8");
#endif

    switch (ctx->pc) {
        case 0x17adc0u: goto label_17adc0;
        default: break;
    }

    ctx->pc = 0x17adb8u;

    // 0x17adb8: 0xc071254  jal         func_1C4950
    ctx->pc = 0x17ADB8u;
    SET_GPR_U32(ctx, 31, 0x17ADC0u);
    ctx->pc = 0x17ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADB8u;
    // 0x17adbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x17ADB8u, 0x17ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADC0u;
label_17adc0:
    // 0x17adc0: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x17adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x17adc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17adc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17adc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x17ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADCCu;
        // 0x17add0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADD4u;
}
