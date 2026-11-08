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

// Function: entry_001a2608
// Address: 0x1a2608 - 0x1a261c
void entry_001a2608_0x1a2608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2608_0x1a2608");
#endif

    switch (ctx->pc) {
        case 0x1a2618u: goto label_1a2618;
        default: break;
    }

    ctx->pc = 0x1a2608u;

    // 0x1a2608: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a260c: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x1a2610: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2610u;
    SET_GPR_U32(ctx, 31, 0x1A2618u);
    ctx->pc = 0x1A2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2610u;
    // 0x1a2614: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2610u, 0x1A2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2618u;
label_1a2618:
    // 0x1a2618: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a2618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1a261cu;
}
