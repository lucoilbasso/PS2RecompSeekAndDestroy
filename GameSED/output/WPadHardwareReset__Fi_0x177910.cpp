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

// Function: WPadHardwareReset__Fi
// Address: 0x177910 - 0x177960
void WPadHardwareReset__Fi_0x177910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardwareReset__Fi_0x177910");
#endif

    switch (ctx->pc) {
        case 0x177924u: goto label_177924;
        case 0x17792cu: goto label_17792c;
        case 0x177944u: goto label_177944;
        case 0x17794cu: goto label_17794c;
        case 0x177954u: goto label_177954;
        default: break;
    }

    ctx->pc = 0x177910u;

    // 0x177910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177914: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x177914u;
    {
        const bool branch_taken_0x177914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x177918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177914u;
        // 0x177918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177914) {
            ctx->pc = 0x177954u;
            goto label_177954;
        }
    }
    ctx->pc = 0x17791Cu;
    // 0x17791c: 0xc05de8e  jal         func_177A38
    ctx->pc = 0x17791Cu;
    SET_GPR_U32(ctx, 31, 0x177924u);
    ctx->pc = 0x177A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A38u, 0x17791Cu, 0x177924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177924u;
label_177924:
    // 0x177924: 0xc06e27e  jal         func_1B89F8
    ctx->pc = 0x177924u;
    SET_GPR_U32(ctx, 31, 0x17792Cu);
    ctx->pc = 0x177928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177924u;
    // 0x177928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B89F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B89F8u, 0x177924u, 0x17792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17792Cu;
label_17792c:
    // 0x17792c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17792cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177934: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177934u;
    {
        const bool branch_taken_0x177934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x177938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177934u;
        // 0x177938: 0x248478f8  addiu       $a0, $a0, 0x78F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177934) {
            ctx->pc = 0x177944u;
            goto label_177944;
        }
    }
    ctx->pc = 0x17793Cu;
    // 0x17793c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17793Cu;
    SET_GPR_U32(ctx, 31, 0x177944u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17793Cu, 0x177944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177944u;
label_177944:
    // 0x177944: 0xc05e4d8  jal         func_179360
    ctx->pc = 0x177944u;
    SET_GPR_U32(ctx, 31, 0x17794Cu);
    ctx->pc = 0x179360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179360u, 0x177944u, 0x17794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17794Cu;
label_17794c:
    // 0x17794c: 0xc05deb6  jal         func_177AD8
    ctx->pc = 0x17794Cu;
    SET_GPR_U32(ctx, 31, 0x177954u);
    ctx->pc = 0x177AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177AD8u, 0x17794Cu, 0x177954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177954u;
label_177954:
    // 0x177954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177958: 0x3e00008  jr          $ra
    ctx->pc = 0x177958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177958u;
        // 0x17795c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177960u;
}
