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

// Function: entry_001b2ab0
// Address: 0x1b2ab0 - 0x1b2adc
void entry_001b2ab0_0x1b2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ab0_0x1b2ab0");
#endif

    switch (ctx->pc) {
        case 0x1b2abcu: goto label_1b2abc;
        case 0x1b2ad8u: goto label_1b2ad8;
        default: break;
    }

    ctx->pc = 0x1b2ab0u;

    // 0x1b2ab0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1b2ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ab4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2AB4u;
    SET_GPR_U32(ctx, 31, 0x1B2ABCu);
    ctx->pc = 0x1B2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AB4u;
    // 0x1b2ab8: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2AB4u, 0x1B2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2ABCu;
label_1b2abc:
    // 0x1b2abc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b2ac0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ac4: 0x8e04aa10  lw          $a0, -0x55F0($s0)
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    // 0x1b2ac8: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1b2ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x1b2acc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1b2accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1b2ad0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B2AD0u;
    SET_GPR_U32(ctx, 31, 0x1B2AD8u);
    ctx->pc = 0x1B2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AD0u;
    // 0x1b2ad4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B2AD0u, 0x1B2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AD8u;
label_1b2ad8:
    // 0x1b2ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2adcu;
}
