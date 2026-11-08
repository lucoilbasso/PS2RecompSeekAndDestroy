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

// Function: MoveLightColor__7WcLightP7WcLightf
// Address: 0x1de1b8 - 0x1de260
void MoveLightColor__7WcLightP7WcLightf_0x1de1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveLightColor__7WcLightP7WcLightf_0x1de1b8");
#endif

    switch (ctx->pc) {
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de204u: goto label_1de204;
        case 0x1de218u: goto label_1de218;
        case 0x1de22cu: goto label_1de22c;
        default: break;
    }

    ctx->pc = 0x1de1b8u;

    // 0x1de1b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de1c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1de1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1cc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1de1ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1de1d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1de1d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1de1d4: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1de1d8: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x1de1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1de1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de1e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1de1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1de1e8: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x1DE1E8u;
    SET_GPR_U32(ctx, 31, 0x1DE1F0u);
    ctx->pc = 0x1DE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1E8u;
    // 0x1de1ec: 0x26130150  addiu       $s3, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x1DE1E8u, 0x1DE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1F0u;
label_1de1f0:
    // 0x1de1f0: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x1de1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1de1f4: 0x26450220  addiu       $a1, $s2, 0x220
    ctx->pc = 0x1de1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1de1f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de1f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1de1fc: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x1DE1FCu;
    SET_GPR_U32(ctx, 31, 0x1DE204u);
    ctx->pc = 0x1DE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1FCu;
    // 0x1de200: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x1DE1FCu, 0x1DE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE204u;
label_1de204:
    // 0x1de204: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x1de204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1de208: 0x26450230  addiu       $a1, $s2, 0x230
    ctx->pc = 0x1de208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x1de20c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1de210: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x1DE210u;
    SET_GPR_U32(ctx, 31, 0x1DE218u);
    ctx->pc = 0x1DE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE210u;
    // 0x1de214: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x1DE210u, 0x1DE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE218u;
label_1de218:
    // 0x1de218: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x1de218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1de21c: 0x26450240  addiu       $a1, $s2, 0x240
    ctx->pc = 0x1de21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1de220: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1de224: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x1DE224u;
    SET_GPR_U32(ctx, 31, 0x1DE22Cu);
    ctx->pc = 0x1DE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE224u;
    // 0x1de228: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x1DE224u, 0x1DE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE22Cu;
label_1de22c:
    // 0x1de22c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1de22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1de230: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1de230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1de234: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1de234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1de238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de23c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1de23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1de240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de244: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1de244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1de248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de24c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de254: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1de254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1de258: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE258u;
        // 0x1de25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE260u;
}
