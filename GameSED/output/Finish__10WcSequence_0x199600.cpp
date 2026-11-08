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

// Function: Finish__10WcSequence
// Address: 0x199600 - 0x199650
void Finish__10WcSequence_0x199600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__10WcSequence_0x199600");
#endif

    switch (ctx->pc) {
        case 0x199620u: goto label_199620;
        case 0x199630u: goto label_199630;
        case 0x199638u: goto label_199638;
        case 0x199640u: goto label_199640;
        default: break;
    }

    ctx->pc = 0x199600u;

    // 0x199600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19960c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x19960cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x199610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199614: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x199618: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x199618u;
    SET_GPR_U32(ctx, 31, 0x199620u);
    ctx->pc = 0x19961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199618u;
    // 0x19961c: 0x2484de80  addiu       $a0, $a0, -0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x199618u, 0x199620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199620u;
label_199620:
    // 0x199620: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x199624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199628: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x199628u;
    SET_GPR_U32(ctx, 31, 0x199630u);
    ctx->pc = 0x19962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199628u;
    // 0x19962c: 0x2484de98  addiu       $a0, $a0, -0x2168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x199628u, 0x199630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199630u;
label_199630:
    // 0x199630: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x199630u;
    SET_GPR_U32(ctx, 31, 0x199638u);
    ctx->pc = 0x199634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199630u;
    // 0x199634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x199630u, 0x199638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199638u;
label_199638:
    // 0x199638: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x199638u;
    SET_GPR_U32(ctx, 31, 0x199640u);
    ctx->pc = 0x19963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199638u;
    // 0x19963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x199638u, 0x199640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199640u;
label_199640:
    // 0x199640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199648: 0x3e00008  jr          $ra
    ctx->pc = 0x199648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199648u;
        // 0x19964c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199650u;
}
