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

// Function: entry_00146218
// Address: 0x146218 - 0x146234
void entry_00146218_0x146218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146218_0x146218");
#endif

    switch (ctx->pc) {
        case 0x146230u: goto label_146230;
        default: break;
    }

    ctx->pc = 0x146218u;

    // 0x146218: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x146218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14621c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146220: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x146220u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x146224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x146224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x146228: 0xc0514c2  jal         func_145308
    ctx->pc = 0x146228u;
    SET_GPR_U32(ctx, 31, 0x146230u);
    ctx->pc = 0x14622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146228u;
    // 0x14622c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x146228u, 0x146230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146230u;
label_146230:
    // 0x146230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x146234u;
}
