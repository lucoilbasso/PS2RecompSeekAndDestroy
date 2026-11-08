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

// Function: entry_001a0928
// Address: 0x1a0928 - 0x1a0948
void entry_001a0928_0x1a0928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0928_0x1a0928");
#endif

    switch (ctx->pc) {
        case 0x1a093cu: goto label_1a093c;
        default: break;
    }

    ctx->pc = 0x1a0928u;

    // 0x1a0928: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a092c: 0x24a59080  addiu       $a1, $a1, -0x6F80
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938752));
    // 0x1a0930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0934: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0934u;
    SET_GPR_U32(ctx, 31, 0x1A093Cu);
    ctx->pc = 0x1A0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0934u;
    // 0x1a0938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0934u, 0x1A093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A093Cu;
label_1a093c:
    // 0x1a093c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0940: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x1A0940u;
    SET_GPR_U32(ctx, 31, 0x1A0948u);
    ctx->pc = 0x1A0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0940u;
    // 0x1a0944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x1A0940u, 0x1A0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0948u;
}
