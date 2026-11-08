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

// Function: Finish__7WcSeStd
// Address: 0x17b740 - 0x17b7ac
void Finish__7WcSeStd_0x17b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcSeStd_0x17b740");
#endif

    switch (ctx->pc) {
        case 0x17b768u: goto label_17b768;
        case 0x17b774u: goto label_17b774;
        case 0x17b784u: goto label_17b784;
        case 0x17b78cu: goto label_17b78c;
        case 0x17b794u: goto label_17b794;
        default: break;
    }

    ctx->pc = 0x17b740u;

    // 0x17b740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b74c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17b74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b754: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17b754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17b758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b75c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b764: 0x0  nop
    ctx->pc = 0x17b764u;
    // NOP
label_17b768:
    // 0x17b768: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x17b76c: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17B76Cu;
    SET_GPR_U32(ctx, 31, 0x17B774u);
    ctx->pc = 0x17B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B76Cu;
    // 0x17b770: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17B76Cu, 0x17B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B774u;
label_17b774:
    // 0x17b774: 0x623fffc  bgezl       $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17B774u;
    {
        const bool branch_taken_0x17b774 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17b774) {
            ctx->pc = 0x17B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B774u;
            // 0x17b778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b768;
        }
    }
    ctx->pc = 0x17B77Cu;
    // 0x17b77c: 0xc05e9e6  jal         func_17A798
    ctx->pc = 0x17B77Cu;
    SET_GPR_U32(ctx, 31, 0x17B784u);
    ctx->pc = 0x17B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B77Cu;
    // 0x17b780: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A798u, 0x17B77Cu, 0x17B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B784u;
label_17b784:
    // 0x17b784: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17B784u;
    SET_GPR_U32(ctx, 31, 0x17B78Cu);
    ctx->pc = 0x17B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B784u;
    // 0x17b788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17B784u, 0x17B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B78Cu;
label_17b78c:
    // 0x17b78c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17B78Cu;
    SET_GPR_U32(ctx, 31, 0x17B794u);
    ctx->pc = 0x17B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B78Cu;
    // 0x17b790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17B78Cu, 0x17B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B794u;
label_17b794:
    // 0x17b794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b79c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7A4u;
        // 0x17b7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B7ACu;
}
