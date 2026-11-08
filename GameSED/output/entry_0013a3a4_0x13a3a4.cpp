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

// Function: entry_0013a3a4
// Address: 0x13a3a4 - 0x13a3fc
void entry_0013a3a4_0x13a3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a3a4_0x13a3a4");
#endif

    switch (ctx->pc) {
        case 0x13a3bcu: goto label_13a3bc;
        default: break;
    }

    ctx->pc = 0x13a3a4u;

    // 0x13a3a4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x13a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x13a3a8: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x13a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x13a3ac: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13a3b0: 0xace80010  sw          $t0, 0x10($a3)
    ctx->pc = 0x13a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 8));
    // 0x13a3b4: 0xc066810  jal         func_19A040
    ctx->pc = 0x13A3B4u;
    SET_GPR_U32(ctx, 31, 0x13A3BCu);
    ctx->pc = 0x13A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3B4u;
    // 0x13a3b8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x13A3B4u, 0x13A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x13a3bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x13a3c0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x13a3c0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a3c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a3c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13a3c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a3cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x13a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13a3d0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13a3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a3d8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x13a3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x13a3dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a3e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a3e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13a3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a3ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a3f0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x13a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3F4u;
        // 0x13a3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A3FCu;
}
