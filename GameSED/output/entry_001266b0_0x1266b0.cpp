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

// Function: entry_001266b0
// Address: 0x1266b0 - 0x12674c
void entry_001266b0_0x1266b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001266b0_0x1266b0");
#endif

    ctx->pc = 0x1266b0u;

    // 0x1266b0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1266b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1266b4: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x1266b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1266b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1266b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1266bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1266bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1266c0: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1266c4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1266c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1266c8: 0xc4640024  lwc1        $f4, 0x24($v1)
    ctx->pc = 0x1266c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1266cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1266ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1266d0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1266d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1266d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1266d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1266d8: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x1266d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1266dc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x1266dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1266e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1266e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1266e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1266e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1266e8: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1266e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1266ec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1266ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1266f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1266f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1266f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1266f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1266f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1266f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1266fc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1266fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x126700: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x126700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x126704: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x126704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126708: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x126708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12670c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12670cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x126710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x126710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x126714: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x126714u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x126718: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x126718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x12671c: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x12671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126720: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x126720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x126724: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x126724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126728: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x126728u;
    {
        const bool branch_taken_0x126728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126728u;
        // 0x12672c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126728) {
            ctx->pc = 0x12674Cu;
            return;
        }
    }
    ctx->pc = 0x126730u;
    // 0x126730: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x126730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126738: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x126738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12673c: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x12673cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x126740: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x126740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x126744: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x126744u;
    SET_GPR_U32(ctx, 31, 0x12674Cu);
    ctx->pc = 0x126748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126744u;
    // 0x126748: 0xe4600018  swc1        $f0, 0x18($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x126744u, 0x12674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12674Cu;
}
