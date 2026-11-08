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

// Function: entry_001adb50
// Address: 0x1adb50 - 0x1adb68
void entry_001adb50_0x1adb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb50_0x1adb50");
#endif

    ctx->pc = 0x1adb50u;

    // 0x1adb50: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADB50u;
    {
        const bool branch_taken_0x1adb50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB50u;
        // 0x1adb54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb50) {
            ctx->pc = 0x1ADB90u;
            return;
        }
    }
    ctx->pc = 0x1ADB58u;
    // 0x1adb58: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1adb5c: 0x2a68821  addu        $s1, $s5, $a2
    ctx->pc = 0x1adb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1adb60: 0x2d02821  addu        $a1, $s6, $s0
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1adb64: 0x0  nop
    ctx->pc = 0x1adb64u;
    // NOP
    ctx->pc = 0x1adb68u;
}
