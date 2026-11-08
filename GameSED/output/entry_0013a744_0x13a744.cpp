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

// Function: entry_0013a744
// Address: 0x13a744 - 0x13a7c4
void entry_0013a744_0x13a744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a744_0x13a744");
#endif

    switch (ctx->pc) {
        case 0x13a768u: goto label_13a768;
        case 0x13a77cu: goto label_13a77c;
        default: break;
    }

    ctx->pc = 0x13a744u;

    // 0x13a744: 0xc7948124  lwc1        $f20, -0x7EDC($gp)
    ctx->pc = 0x13a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a748: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x13a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13a74c: 0xad120010  sw          $s2, 0x10($t0)
    ctx->pc = 0x13a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 18));
    // 0x13a750: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x13a750u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x13a754: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13a754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13a758: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x13a758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x13a75c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13a760: 0xc06a82c  jal         func_1AA0B0
    ctx->pc = 0x13A760u;
    SET_GPR_U32(ctx, 31, 0x13A768u);
    ctx->pc = 0x13A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A760u;
    // 0x13a764: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA0B0u, 0x13A760u, 0x13A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x13a76c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a770: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13a770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13a774: 0xc06a82c  jal         func_1AA0B0
    ctx->pc = 0x13A774u;
    SET_GPR_U32(ctx, 31, 0x13A77Cu);
    ctx->pc = 0x13A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A774u;
    // 0x13a778: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA0B0u, 0x13A774u, 0x13A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A77Cu;
label_13a77c:
    // 0x13a77c: 0xe6150018  swc1        $f21, 0x18($s0)
    ctx->pc = 0x13a77cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x13a780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13a784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a788: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13a788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13a78c: 0x0  nop
    ctx->pc = 0x13a78cu;
    // NOP
    // 0x13a790: 0x0  nop
    ctx->pc = 0x13a790u;
    // NOP
    // 0x13a794: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x13a794u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x13a798: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x13a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13a79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a7a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a7a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13a7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a7ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a7b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x13a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a7b4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x13a7b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7BCu;
        // 0x13a7c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A7C4u;
}
