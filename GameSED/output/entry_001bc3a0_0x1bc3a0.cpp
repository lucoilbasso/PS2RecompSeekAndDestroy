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

// Function: entry_001bc3a0
// Address: 0x1bc3a0 - 0x1bc480
void entry_001bc3a0_0x1bc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc3a0_0x1bc3a0");
#endif

    ctx->pc = 0x1bc3a0u;

    // 0x1bc3a0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1bc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bc3a4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x1bc3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bc3a8: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x1bc3a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x1bc3ac: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x1bc3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1bc3b0: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x1bc3b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x1bc3b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bc3b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc3bc: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x1bc3bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x1bc3c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1bc3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1bc3c4: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x1bc3c4u;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x1bc3c8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1bc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1bc3cc: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x1bc3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1bc3d0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1bc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1bc3d4: 0x46047282  mul.s       $f10, $f14, $f4
    ctx->pc = 0x1bc3d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x1bc3d8: 0x460022c7  neg.s       $f11, $f4
    ctx->pc = 0x1bc3d8u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
    // 0x1bc3dc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1bc3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1bc3e0: 0x460278c2  mul.s       $f3, $f15, $f2
    ctx->pc = 0x1bc3e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x1bc3e4: 0x46078302  mul.s       $f12, $f16, $f7
    ctx->pc = 0x1bc3e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x1bc3e8: 0x0  nop
    ctx->pc = 0x1bc3e8u;
    // NOP
    // 0x1bc3ec: 0x0  nop
    ctx->pc = 0x1bc3ecu;
    // NOP
    // 0x1bc3f0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bc3f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bc3f4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1bc3f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1bc3f8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x1bc3f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x1bc3fc: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x1bc3fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x1bc400: 0x46077b42  mul.s       $f13, $f15, $f7
    ctx->pc = 0x1bc400u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x1bc404: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1bc404u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1bc408: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x1bc408u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x1bc40c: 0x46048102  mul.s       $f4, $f16, $f4
    ctx->pc = 0x1bc40cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x1bc410: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1bc410u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x1bc414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bc414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bc418: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x1bc418u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1bc41c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1bc41cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1bc420: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1bc420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bc424: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1bc424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1bc428: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x1bc428u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x1bc42c: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x1bc42cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bc430: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1bc430u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1bc434: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1bc434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1bc438: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x1bc438u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1bc43c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1bc43cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1bc440: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x1bc440u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x1bc444: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x1bc444u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1bc448: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x1bc448u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x1bc44c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x1bc44cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bc450: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x1bc450u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1bc454: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x1bc454u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1bc458: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x1bc458u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1bc45c: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x1bc45cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1bc460: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x1bc460u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x1bc464: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x1bc464u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1bc468: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1bc468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1bc46c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1bc46cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bc470: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1bc470u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1bc474: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x1bc474u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1bc478: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC478u;
        // 0x1bc47c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC480u;
}
