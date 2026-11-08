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

// Function: entry_001adb98
// Address: 0x1adb98 - 0x1adba4
void entry_001adb98_0x1adb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb98_0x1adb98");
#endif

    ctx->pc = 0x1adb98u;

    // 0x1adb98: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x1adb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1adb9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1ADB9Cu;
    {
        const bool branch_taken_0x1adb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb9c) {
            ctx->pc = 0x1ADB50u;
            return;
        }
    }
    ctx->pc = 0x1ADBA4u;
}
