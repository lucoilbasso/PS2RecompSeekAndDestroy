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

// Function: sGetCent2Frame__FP15BsSCDEntControlPii
// Address: 0x10c3d8 - 0x10c480
void sGetCent2Frame__FP15BsSCDEntControlPii_0x10c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sGetCent2Frame__FP15BsSCDEntControlPii_0x10c3d8");
#endif

    switch (ctx->pc) {
        case 0x10c418u: goto label_10c418;
        case 0x10c424u: goto label_10c424;
        default: break;
    }

    ctx->pc = 0x10c3d8u;

    // 0x10c3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c3e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10c3e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10c3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c3f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c3f8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x10c3f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10c3fc: 0x1a000017  blez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10C3FCu;
    {
        const bool branch_taken_0x10c3fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x10C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3FCu;
        // 0x10c400: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3fc) {
            ctx->pc = 0x10C45Cu;
            goto label_10c45c;
        }
    }
    ctx->pc = 0x10C404u;
    // 0x10c404: 0xc7958048  lwc1        $f21, -0x7FB8($gp)
    ctx->pc = 0x10c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10c408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c40c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10c410: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10c410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c414: 0x0  nop
    ctx->pc = 0x10c414u;
    // NOP
label_10c418:
    // 0x10c418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c41c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C41Cu;
    SET_GPR_U32(ctx, 31, 0x10C424u);
    ctx->pc = 0x10C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C41Cu;
    // 0x10c420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C41Cu, 0x10C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C424u;
label_10c424:
    // 0x10c424: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10c424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C428u;
    {
        const bool branch_taken_0x10c428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C428u;
        // 0x10c42c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c428) {
            ctx->pc = 0x10C450u;
            goto label_10c450;
        }
    }
    ctx->pc = 0x10C430u;
    // 0x10c430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10c434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10c438: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x10c438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x10c43c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10c43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x10c440: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10c440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10c444: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10c444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10c448: 0x705210c8  pmaxw       $v0, $v0, $s2
    ctx->pc = 0x10c448u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x10c44c: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x10c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_10c450:
    // 0x10c450: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10c454: 0x1e00fff0  bgtz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10C454u;
    {
        const bool branch_taken_0x10c454 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x10C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C454u;
        // 0x10c458: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c454) {
            ctx->pc = 0x10C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c418;
        }
    }
    ctx->pc = 0x10C45Cu;
label_10c45c:
    // 0x10c45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10c468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c46c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c470: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x10c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c474: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c478: 0x3e00008  jr          $ra
    ctx->pc = 0x10C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C478u;
        // 0x10c47c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C480u;
}
