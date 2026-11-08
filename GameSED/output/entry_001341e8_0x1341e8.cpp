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

// Function: entry_001341e8
// Address: 0x1341e8 - 0x134220
void entry_001341e8_0x1341e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001341e8_0x1341e8");
#endif

    switch (ctx->pc) {
        case 0x1341f0u: goto label_1341f0;
        case 0x1341fcu: goto label_1341fc;
        default: break;
    }

    ctx->pc = 0x1341e8u;

    // 0x1341e8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341E8u;
    SET_GPR_U32(ctx, 31, 0x1341F0u);
    ctx->pc = 0x1341ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341E8u;
    // 0x1341ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341E8u, 0x1341F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341F0u;
label_1341f0:
    // 0x1341f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1341f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341f4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341F4u;
    SET_GPR_U32(ctx, 31, 0x1341FCu);
    ctx->pc = 0x1341F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341F4u;
    // 0x1341f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341F4u, 0x1341FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341FCu;
label_1341fc:
    // 0x1341fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134200: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x134200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x134204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134208: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x134208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13420c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13420cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134210: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x134214: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x134214u;
    {
        const bool branch_taken_0x134214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134214u;
        // 0x134218: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134214) {
            ctx->pc = 0x1342A8u;
            return;
        }
    }
    ctx->pc = 0x13421Cu;
    // 0x13421c: 0x0  nop
    ctx->pc = 0x13421cu;
    // NOP
    ctx->pc = 0x134220u;
}
