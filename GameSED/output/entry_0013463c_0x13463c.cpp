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

// Function: entry_0013463c
// Address: 0x13463c - 0x134660
void entry_0013463c_0x13463c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013463c_0x13463c");
#endif

    switch (ctx->pc) {
        case 0x134658u: goto label_134658;
        default: break;
    }

    ctx->pc = 0x13463cu;

    // 0x13463c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134640: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x134640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x134644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13464c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13464cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134650: 0xc04e120  jal         func_138480
    ctx->pc = 0x134650u;
    SET_GPR_U32(ctx, 31, 0x134658u);
    ctx->pc = 0x134654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134650u;
    // 0x134654: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x134650u, 0x134658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134658u;
label_134658:
    // 0x134658: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x134658u;
    {
        const bool branch_taken_0x134658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134658u;
        // 0x13465c: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134658) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x134660u;
}
