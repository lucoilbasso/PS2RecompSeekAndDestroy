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

// Function: entry_00134498
// Address: 0x134498 - 0x1344b8
void entry_00134498_0x134498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134498_0x134498");
#endif

    switch (ctx->pc) {
        case 0x1344b0u: goto label_1344b0;
        default: break;
    }

    ctx->pc = 0x134498u;

    // 0x134498: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134498u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13449c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1344a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1344a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a8: 0xc04df1c  jal         func_137C70
    ctx->pc = 0x1344A8u;
    SET_GPR_U32(ctx, 31, 0x1344B0u);
    ctx->pc = 0x1344ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344A8u;
    // 0x1344ac: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C70u, 0x1344A8u, 0x1344B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344B0u;
label_1344b0:
    // 0x1344b0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1344B0u;
    {
        const bool branch_taken_0x1344b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344B0u;
        // 0x1344b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344b0) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x1344B8u;
}
