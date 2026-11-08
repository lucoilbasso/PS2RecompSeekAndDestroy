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

// Function: anti_flicker_preset2__Fiiiff
// Address: 0x13ecf8 - 0x13ed74
void anti_flicker_preset2__Fiiiff_0x13ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anti_flicker_preset2__Fiiiff_0x13ecf8");
#endif

    switch (ctx->pc) {
        case 0x13ed38u: goto label_13ed38;
        case 0x13ed54u: goto label_13ed54;
        default: break;
    }

    ctx->pc = 0x13ecf8u;

    // 0x13ecf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ecfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ed00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13ed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ed08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13ed08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ed10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ed10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed14: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x13ed14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13ed18: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x13ed18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x13ed1c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x13ed1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13ed20: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13ed20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13ed24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13ed24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed28: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13ed28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ed30: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13ED30u;
    SET_GPR_U32(ctx, 31, 0x13ED38u);
    ctx->pc = 0x13ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED30u;
    // 0x13ed34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13ED30u, 0x13ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED38u;
label_13ed38:
    // 0x13ed38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13ed3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13ed40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13ed44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13ed48: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13ed48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13ed4c: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13ED4Cu;
    SET_GPR_U32(ctx, 31, 0x13ED54u);
    ctx->pc = 0x13ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED4Cu;
    // 0x13ed50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13ED4Cu, 0x13ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED54u;
label_13ed54:
    // 0x13ed54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ed54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ed58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ed58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ed5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ed5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ed60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13ed60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ed64: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x13ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13ed68: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x13ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x13ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED6Cu;
        // 0x13ed70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED74u;
}
