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

// Function: entry_0010f6b4
// Address: 0x10f6b4 - 0x10f724
void entry_0010f6b4_0x10f6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f6b4_0x10f6b4");
#endif

    switch (ctx->pc) {
        case 0x10f6e8u: goto label_10f6e8;
        case 0x10f704u: goto label_10f704;
        case 0x10f720u: goto label_10f720;
        default: break;
    }

    ctx->pc = 0x10f6b4u;

    // 0x10f6b4: 0x8f839118  lw          $v1, -0x6EE8($gp)
    ctx->pc = 0x10f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x10f6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f6bc: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10F6BCu;
    {
        const bool branch_taken_0x10f6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f6bc) {
            ctx->pc = 0x10F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F6BCu;
            // 0x10f6c0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F724u;
            return;
        }
    }
    ctx->pc = 0x10F6C4u;
    // 0x10f6c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10f6c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f6cc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f6d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f6d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f6d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f6d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f6dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f6dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f6e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F6E0u;
    SET_GPR_U32(ctx, 31, 0x10F6E8u);
    ctx->pc = 0x10F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6E0u;
    // 0x10f6e4: 0x24843df8  addiu       $a0, $a0, 0x3DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F6E0u, 0x10F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F6E8u;
label_10f6e8:
    // 0x10f6e8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f6ec: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f6f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f6f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f6f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f6f8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f6fc: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F6FCu;
    SET_GPR_U32(ctx, 31, 0x10F704u);
    ctx->pc = 0x10F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6FCu;
    // 0x10f700: 0x24843e08  addiu       $a0, $a0, 0x3E08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F6FCu, 0x10F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F704u;
label_10f704:
    // 0x10f704: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10f704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10f708: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f70c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10f70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10f710: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10f710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x10f714: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10f714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x10f718: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F718u;
    SET_GPR_U32(ctx, 31, 0x10F720u);
    ctx->pc = 0x10F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F718u;
    // 0x10f71c: 0x24843e18  addiu       $a0, $a0, 0x3E18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F718u, 0x10F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F720u;
label_10f720:
    // 0x10f720: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x10f724u;
}
