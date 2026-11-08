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

// Function: entry_00115328
// Address: 0x115328 - 0x11534c
void entry_00115328_0x115328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115328_0x115328");
#endif

    switch (ctx->pc) {
        case 0x115348u: goto label_115348;
        default: break;
    }

    ctx->pc = 0x115328u;

    // 0x115328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11532c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115330: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x115330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115334: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115338: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115338u;
    {
        const bool branch_taken_0x115338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x11533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115338u;
        // 0x11533c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115338) {
            ctx->pc = 0x11534Cu;
            return;
        }
    }
    ctx->pc = 0x115340u;
    // 0x115340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x115340u;
    SET_GPR_U32(ctx, 31, 0x115348u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x115340u, 0x115348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115348u;
label_115348:
    // 0x115348: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x11534cu;
}
