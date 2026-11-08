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

// Function: BMotionTriCycleSetup__FP5BcObjP11BMotionCtrlfiiii
// Address: 0x1a5228 - 0x1a52bc
void BMotionTriCycleSetup__FP5BcObjP11BMotionCtrlfiiii_0x1a5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionTriCycleSetup__FP5BcObjP11BMotionCtrlfiiii_0x1a5228");
#endif

    switch (ctx->pc) {
        case 0x1a5274u: goto label_1a5274;
        default: break;
    }

    ctx->pc = 0x1a5228u;

    // 0x1a5228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a522c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a522cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5230: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5234: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5238: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a5238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a523c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a523cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5244: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a5244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5248: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a5248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a524c: 0x24462990  addiu       $a2, $v0, 0x2990
    ctx->pc = 0x1a524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x1a5250: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a5254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a525c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5260: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1a5260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a5264: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5264u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a5268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a526c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A526Cu;
    SET_GPR_U32(ctx, 31, 0x1A5274u);
    ctx->pc = 0x1A5270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A526Cu;
    // 0x1a5270: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A526Cu, 0x1A5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5274u;
label_1a5274:
    // 0x1a5274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5278: 0x8f829070  lw          $v0, -0x6F90($gp)
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a527c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A527Cu;
    {
        const bool branch_taken_0x1a527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A527Cu;
        // 0x1a5280: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a527c) {
            ctx->pc = 0x1A5288u;
            goto label_1a5288;
        }
    }
    ctx->pc = 0x1A5284u;
    // 0x1a5284: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1a5284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1a5288:
    // 0x1a5288: 0xa470001e  sh          $s0, 0x1E($v1)
    ctx->pc = 0x1a5288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 16));
    // 0x1a528c: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x1a528cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1a5290: 0xa4720018  sh          $s2, 0x18($v1)
    ctx->pc = 0x1a5290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5294: 0xa473001a  sh          $s3, 0x1A($v1)
    ctx->pc = 0x1a5294u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 19));
    // 0x1a5298: 0xa471001c  sh          $s1, 0x1C($v1)
    ctx->pc = 0x1a5298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a529c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a529cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a52a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a52a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a52a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a52a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a52ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52b0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1a52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a52b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A52B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B4u;
        // 0x1a52b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52BCu;
}
