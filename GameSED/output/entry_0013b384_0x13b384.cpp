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

// Function: entry_0013b384
// Address: 0x13b384 - 0x13b3e8
void entry_0013b384_0x13b384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b384_0x13b384");
#endif

    switch (ctx->pc) {
        case 0x13b38cu: goto label_13b38c;
        case 0x13b3a0u: goto label_13b3a0;
        case 0x13b3dcu: goto label_13b3dc;
        default: break;
    }

    ctx->pc = 0x13b384u;

    // 0x13b384: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x13B384u;
    SET_GPR_U32(ctx, 31, 0x13B38Cu);
    ctx->pc = 0x13B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B384u;
    // 0x13b388: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13B384u, 0x13B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B38Cu;
label_13b38c:
    // 0x13b38c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13B38Cu;
    {
        const bool branch_taken_0x13b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b38c) {
            ctx->pc = 0x13B3F0u;
            return;
        }
    }
    ctx->pc = 0x13B394u;
    // 0x13b394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b398: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x13B398u;
    SET_GPR_U32(ctx, 31, 0x13B3A0u);
    ctx->pc = 0x13B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B398u;
    // 0x13b39c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x13B398u, 0x13B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3A0u;
label_13b3a0:
    // 0x13b3a0: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x13b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x13b3a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B3A4u;
    {
        const bool branch_taken_0x13b3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3A4u;
        // 0x13b3a8: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3a4) {
            ctx->pc = 0x13B3E8u;
            return;
        }
    }
    ctx->pc = 0x13B3ACu;
    // 0x13b3ac: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x13b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b3b0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13b3b4: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x13b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b3b8: 0x24846850  addiu       $a0, $a0, 0x6850
    ctx->pc = 0x13b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26704));
    // 0x13b3bc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x13b3c0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x13b3c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13b3c4: 0x9209017a  lbu         $t1, 0x17A($s0)
    ctx->pc = 0x13b3c4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 378)));
    // 0x13b3c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13b3c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13b3cc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x13b3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x13b3d0: 0x92070178  lbu         $a3, 0x178($s0)
    ctx->pc = 0x13b3d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13b3d4: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13B3D4u;
    SET_GPR_U32(ctx, 31, 0x13B3DCu);
    ctx->pc = 0x13B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B3D4u;
    // 0x13b3d8: 0x92080179  lbu         $t0, 0x179($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 377)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13B3D4u, 0x13B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3DCu;
label_13b3dc:
    // 0x13b3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B3DCu;
    {
        const bool branch_taken_0x13b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b3dc) {
            ctx->pc = 0x13B3F0u;
            return;
        }
    }
    ctx->pc = 0x13B3E4u;
    // 0x13b3e4: 0x0  nop
    ctx->pc = 0x13b3e4u;
    // NOP
    ctx->pc = 0x13b3e8u;
}
