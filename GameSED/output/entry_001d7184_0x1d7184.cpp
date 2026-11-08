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

// Function: entry_001d7184
// Address: 0x1d7184 - 0x1d71a8
void entry_001d7184_0x1d7184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7184_0x1d7184");
#endif

    switch (ctx->pc) {
        case 0x1d718cu: goto label_1d718c;
        default: break;
    }

    ctx->pc = 0x1d7184u;

    // 0x1d7184: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D7184u;
    SET_GPR_U32(ctx, 31, 0x1D718Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D7184u, 0x1D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D718Cu;
label_1d718c:
    // 0x1d718c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D718Cu;
    {
        const bool branch_taken_0x1d718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D718Cu;
        // 0x1d7190: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d718c) {
            ctx->pc = 0x1D71A8u;
            return;
        }
    }
    ctx->pc = 0x1D7194u;
    // 0x1d7194: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d719c: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x1d719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
    // 0x1d71a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D71A0u;
    SET_GPR_U32(ctx, 31, 0x1D71A8u);
    ctx->pc = 0x1D71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71A0u;
    // 0x1d71a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D71A0u, 0x1D71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71A8u;
}
