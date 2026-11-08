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

// Function: entry_0011e760
// Address: 0x11e760 - 0x11e77c
void entry_0011e760_0x11e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e760_0x11e760");
#endif

    switch (ctx->pc) {
        case 0x11e778u: goto label_11e778;
        default: break;
    }

    ctx->pc = 0x11e760u;

    // 0x11e760: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x11e760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11e764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e768: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x11e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11e76c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11e770: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11E770u;
    SET_GPR_U32(ctx, 31, 0x11E778u);
    ctx->pc = 0x11E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E770u;
    // 0x11e774: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11E770u, 0x11E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E778u;
label_11e778:
    // 0x11e778: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x11e778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    ctx->pc = 0x11e77cu;
}
