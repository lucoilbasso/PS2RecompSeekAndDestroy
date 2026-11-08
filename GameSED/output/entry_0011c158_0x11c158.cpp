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

// Function: entry_0011c158
// Address: 0x11c158 - 0x11c170
void entry_0011c158_0x11c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c158_0x11c158");
#endif

    ctx->pc = 0x11c158u;

    // 0x11c158: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x11c158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11c15c: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11C15Cu;
    {
        const bool branch_taken_0x11c15c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C15Cu;
        // 0x11c160: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c15c) {
            ctx->pc = 0x11C1B4u;
            return;
        }
    }
    ctx->pc = 0x11C164u;
    // 0x11c164: 0x32b1ffff  andi        $s1, $s5, 0xFFFF
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x11c168: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c16c: 0x0  nop
    ctx->pc = 0x11c16cu;
    // NOP
    ctx->pc = 0x11c170u;
}
