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

// Function: audioDecDelete
// Address: 0x170ed0 - 0x170f28
void audioDecDelete_0x170ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecDelete_0x170ed0");
#endif

    switch (ctx->pc) {
        case 0x170ee8u: goto label_170ee8;
        case 0x170f04u: goto label_170f04;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f14u: goto label_170f14;
        default: break;
    }

    ctx->pc = 0x170ed0u;

    // 0x170ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170edc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170ee0: 0xc05c57c  jal         func_1715F0
    ctx->pc = 0x170EE0u;
    SET_GPR_U32(ctx, 31, 0x170EE8u);
    ctx->pc = 0x170EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EE0u;
    // 0x170ee4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F0u, 0x170EE0u, 0x170EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EE8u;
label_170ee8:
    // 0x170ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170eec: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x170eecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x170ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ef4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x170ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170ef8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170efc: 0xc071254  jal         func_1C4950
    ctx->pc = 0x170EFCu;
    SET_GPR_U32(ctx, 31, 0x170F04u);
    ctx->pc = 0x170F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EFCu;
    // 0x170f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x170EFCu, 0x170F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F04u;
label_170f04:
    // 0x170f04: 0xc06d60c  jal         func_1B5830
    ctx->pc = 0x170F04u;
    SET_GPR_U32(ctx, 31, 0x170F0Cu);
    ctx->pc = 0x170F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F04u;
    // 0x170f08: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5830u, 0x170F04u, 0x170F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F0Cu;
label_170f0c:
    // 0x170f0c: 0xc06d60c  jal         func_1B5830
    ctx->pc = 0x170F0Cu;
    SET_GPR_U32(ctx, 31, 0x170F14u);
    ctx->pc = 0x170F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F0Cu;
    // 0x170f10: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5830u, 0x170F0Cu, 0x170F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F14u;
label_170f14:
    // 0x170f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170f1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170f20: 0x3e00008  jr          $ra
    ctx->pc = 0x170F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F20u;
        // 0x170f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F28u;
}
