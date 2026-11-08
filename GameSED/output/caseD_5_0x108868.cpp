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

// Function: caseD_5
// Address: 0x108868 - 0x108888
void caseD_5_0x108868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x108868");
#endif

    switch (ctx->pc) {
        case 0x108878u: goto label_108878;
        default: break;
    }

    ctx->pc = 0x108868u;

    // 0x108868: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10886c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108870: 0xc042144  jal         func_108510
    ctx->pc = 0x108870u;
    SET_GPR_U32(ctx, 31, 0x108878u);
    ctx->pc = 0x108874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108870u;
    // 0x108874: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108870u, 0x108878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108878u;
label_108878:
    // 0x108878: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x108878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x10887c: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x10887Cu;
    {
        const bool branch_taken_0x10887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10887Cu;
        // 0x108880: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10887c) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108884u;
    // 0x108884: 0x0  nop
    ctx->pc = 0x108884u;
    // NOP
    ctx->pc = 0x108888u;
}
