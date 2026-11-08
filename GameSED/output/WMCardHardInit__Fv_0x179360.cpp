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

// Function: WMCardHardInit__Fv
// Address: 0x179360 - 0x1793c0
void WMCardHardInit__Fv_0x179360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardHardInit__Fv_0x179360");
#endif

    switch (ctx->pc) {
        case 0x17937cu: goto label_17937c;
        case 0x179394u: goto label_179394;
        case 0x1793a8u: goto label_1793a8;
        default: break;
    }

    ctx->pc = 0x179360u;

    // 0x179360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179364: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x179368: 0x3c110027  lui         $s1, 0x27
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39 << 16));
    // 0x17936c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x179370: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179374: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x179374u;
    SET_GPR_U32(ctx, 31, 0x17937Cu);
    ctx->pc = 0x179378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179374u;
    // 0x179378: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4DF0u, 0x179374u, 0x17937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17937Cu;
label_17937c:
    // 0x17937c: 0x2631d180  addiu       $s1, $s1, -0x2E80
    ctx->pc = 0x17937cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955392));
    // 0x179380: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x179380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x179384: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x179384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x179388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17938c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17938Cu;
    SET_GPR_U32(ctx, 31, 0x179394u);
    ctx->pc = 0x179390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17938Cu;
    // 0x179390: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17938Cu, 0x179394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179394u;
label_179394:
    // 0x179394: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x179394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x179398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17939c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x17939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1793a0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1793A0u;
    SET_GPR_U32(ctx, 31, 0x1793A8u);
    ctx->pc = 0x1793A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793A0u;
    // 0x1793a4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1793A0u, 0x1793A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793A8u;
label_1793a8:
    // 0x1793a8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1793a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1793ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1793acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1793b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1793b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1793b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1793b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1793B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793B8u;
        // 0x1793bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793C0u;
}
