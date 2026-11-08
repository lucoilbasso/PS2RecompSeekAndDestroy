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

// Function: ApCMCockpitTracking__FP16CameraMotionWork
// Address: 0x142738 - 0x1427a4
void ApCMCockpitTracking__FP16CameraMotionWork_0x142738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMCockpitTracking__FP16CameraMotionWork_0x142738");
#endif

    switch (ctx->pc) {
        case 0x142764u: goto label_142764;
        case 0x142780u: goto label_142780;
        default: break;
    }

    ctx->pc = 0x142738u;

    // 0x142738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14273c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142748: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x142748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x14274c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142750: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x142750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x142754: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x142758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14275c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x14275Cu;
    SET_GPR_U32(ctx, 31, 0x142764u);
    ctx->pc = 0x142760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14275Cu;
    // 0x142760: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x14275Cu, 0x142764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142764u;
label_142764:
    // 0x142764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142768: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x142768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14276c: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x14276cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x142770: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x142770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x142774: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x142774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x142778: 0xc050494  jal         func_141250
    ctx->pc = 0x142778u;
    SET_GPR_U32(ctx, 31, 0x142780u);
    ctx->pc = 0x14277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142778u;
    // 0x14277c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x142778u, 0x142780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142780u;
label_142780:
    // 0x142780: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142784: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x142784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142788: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x142788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x14278c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142798: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14279c: 0x3e00008  jr          $ra
    ctx->pc = 0x14279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14279Cu;
        // 0x1427a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1427A4u;
}
