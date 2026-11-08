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

// Function: entry_0010a8e0
// Address: 0x10a8e0 - 0x10a90c
void entry_0010a8e0_0x10a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8e0_0x10a8e0");
#endif

    switch (ctx->pc) {
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a904u: goto label_10a904;
        default: break;
    }

    ctx->pc = 0x10a8e0u;

    // 0x10a8e0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10a8e4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10a8e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A8E8u;
    {
        const bool branch_taken_0x10a8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a8e8) {
            ctx->pc = 0x10A8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A8E8u;
            // 0x10a8ec: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A90Cu;
            return;
        }
    }
    ctx->pc = 0x10A8F0u;
    // 0x10a8f0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A8F0u;
    SET_GPR_U32(ctx, 31, 0x10A8F8u);
    ctx->pc = 0x10A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8F0u;
    // 0x10a8f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A8F0u, 0x10A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8F8u;
label_10a8f8:
    // 0x10a8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10A8FCu;
    SET_GPR_U32(ctx, 31, 0x10A904u);
    ctx->pc = 0x10A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8FCu;
    // 0x10a900: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10A8FCu, 0x10A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A904u;
label_10a904:
    // 0x10a904: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x10a904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
    // 0x10a908: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->pc = 0x10a90cu;
}
