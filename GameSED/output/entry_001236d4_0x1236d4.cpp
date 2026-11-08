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

// Function: entry_001236d4
// Address: 0x1236d4 - 0x123738
void entry_001236d4_0x1236d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001236d4_0x1236d4");
#endif

    switch (ctx->pc) {
        case 0x123718u: goto label_123718;
        default: break;
    }

    ctx->pc = 0x1236d4u;

    // 0x1236d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1236d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1236d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1236d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1236dc: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x1236dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1236e0: 0x0  nop
    ctx->pc = 0x1236e0u;
    // NOP
    // 0x1236e4: 0x0  nop
    ctx->pc = 0x1236e4u;
    // NOP
    // 0x1236e8: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1236e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x1236ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1236ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1236f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1236f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1236f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1236f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1236f8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1236F8u;
    {
        const bool branch_taken_0x1236f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1236FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236F8u;
        // 0x1236fc: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236f8) {
            ctx->pc = 0x123740u;
            return;
        }
    }
    ctx->pc = 0x123700u;
    // 0x123700: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x123704: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x123704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123708: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x123708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12370c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x123710: 0xc047898  jal         func_11E260
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 31, 0x123718u);
    ctx->pc = 0x123714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123710u;
    // 0x123714: 0xae2500e4  sw          $a1, 0xE4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x123710u, 0x123718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x123718u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12371c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12371Cu;
    {
        const bool branch_taken_0x12371c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12371Cu;
        // 0x123720: 0xe62000ec  swc1        $f0, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12371c) {
            ctx->pc = 0x123738u;
            return;
        }
    }
    ctx->pc = 0x123724u;
    // 0x123724: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x123724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x123728: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x123728u;
    {
        const bool branch_taken_0x123728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123728) {
            ctx->pc = 0x12372Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123728u;
            // 0x12372c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12373Cu;
            return;
        }
    }
    ctx->pc = 0x123730u;
    // 0x123730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123730u;
    {
        const bool branch_taken_0x123730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123730u;
        // 0x123734: 0xe63500ec  swc1        $f21, 0xEC($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123730) {
            ctx->pc = 0x12373Cu;
            return;
        }
    }
    ctx->pc = 0x123738u;
}
