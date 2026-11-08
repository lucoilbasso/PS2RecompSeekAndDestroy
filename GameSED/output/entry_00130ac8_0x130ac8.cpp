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

// Function: entry_00130ac8
// Address: 0x130ac8 - 0x130aec
void entry_00130ac8_0x130ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ac8_0x130ac8");
#endif

    switch (ctx->pc) {
        case 0x130ad4u: goto label_130ad4;
        case 0x130ae8u: goto label_130ae8;
        default: break;
    }

    ctx->pc = 0x130ac8u;

    // 0x130ac8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x130ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x130acc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130ACCu;
    SET_GPR_U32(ctx, 31, 0x130AD4u);
    ctx->pc = 0x130AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ACCu;
    // 0x130ad0: 0x24846130  addiu       $a0, $a0, 0x6130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130ACCu, 0x130AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AD4u;
label_130ad4:
    // 0x130ad4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130ad8: 0x24a56150  addiu       $a1, $a1, 0x6150
    ctx->pc = 0x130ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
    // 0x130adc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130AE0u;
    SET_GPR_U32(ctx, 31, 0x130AE8u);
    ctx->pc = 0x130AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AE0u;
    // 0x130ae4: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130AE0u, 0x130AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AE8u;
label_130ae8:
    // 0x130ae8: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x130ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->pc = 0x130aecu;
}
