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

// Function: WModelModelPackageInitInfo__FP7WcModelP13WModelPackage
// Address: 0x17f720 - 0x17f770
void WModelModelPackageInitInfo__FP7WcModelP13WModelPackage_0x17f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelModelPackageInitInfo__FP7WcModelP13WModelPackage_0x17f720");
#endif

    switch (ctx->pc) {
        case 0x17f73cu: goto label_17f73c;
        default: break;
    }

    ctx->pc = 0x17f720u;

    // 0x17f720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f724: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17f728: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f730: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17f734: 0xc05fbc6  jal         func_17EF18
    ctx->pc = 0x17F734u;
    SET_GPR_U32(ctx, 31, 0x17F73Cu);
    ctx->pc = 0x17F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F734u;
    // 0x17f738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF18u, 0x17F734u, 0x17F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f740: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17f740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f744: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x17f744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x17f748: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x17f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f74c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x17f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17f750: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x17f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f754: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f758: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x17f758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17f75c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x17f75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x17f760: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x17f760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17f764: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17f764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f768: 0x3e00008  jr          $ra
    ctx->pc = 0x17F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F768u;
        // 0x17f76c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F770u;
}
