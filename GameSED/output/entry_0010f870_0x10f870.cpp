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

// Function: entry_0010f870
// Address: 0x10f870 - 0x10f8b4
void entry_0010f870_0x10f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f870_0x10f870");
#endif

    switch (ctx->pc) {
        case 0x10f894u: goto label_10f894;
        default: break;
    }

    ctx->pc = 0x10f870u;

    // 0x10f870: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10f874: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f878: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f87c: 0xc6600154  lwc1        $f0, 0x154($s3)
    ctx->pc = 0x10f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10f880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10f884: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f888: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f88c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F88Cu;
    SET_GPR_U32(ctx, 31, 0x10F894u);
    ctx->pc = 0x10F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F88Cu;
    // 0x10f890: 0x24843e28  addiu       $a0, $a0, 0x3E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F88Cu, 0x10F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F894u;
label_10f894:
    // 0x10f894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f89c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f8a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f8a8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8ACu;
        // 0x10f8b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8B4u;
}
