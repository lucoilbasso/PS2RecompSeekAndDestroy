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

// Function: entry_0018f000
// Address: 0x18f000 - 0x18f018
void entry_0018f000_0x18f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f000_0x18f000");
#endif

    switch (ctx->pc) {
        case 0x18f014u: goto label_18f014;
        default: break;
    }

    ctx->pc = 0x18f000u;

    // 0x18f000: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x18f004: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x18f004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18f008: 0x2610ddb8  addiu       $s0, $s0, -0x2248
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958520));
    // 0x18f00c: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x18F00Cu;
    SET_GPR_U32(ctx, 31, 0x18F014u);
    ctx->pc = 0x18F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F00Cu;
    // 0x18f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x18F00Cu, 0x18F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F014u;
label_18f014:
    // 0x18f014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18f014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18f018u;
}
