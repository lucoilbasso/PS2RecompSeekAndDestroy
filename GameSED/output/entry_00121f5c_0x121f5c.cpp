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

// Function: entry_00121f5c
// Address: 0x121f5c - 0x121fac
void entry_00121f5c_0x121f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f5c_0x121f5c");
#endif

    switch (ctx->pc) {
        case 0x121fa0u: goto label_121fa0;
        default: break;
    }

    ctx->pc = 0x121f5cu;

    // 0x121f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f64: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x121f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121f68: 0x0  nop
    ctx->pc = 0x121f68u;
    // NOP
    // 0x121f6c: 0x0  nop
    ctx->pc = 0x121f6cu;
    // NOP
    // 0x121f70: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121f70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121f74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121f7c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121f80: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x121F80u;
    {
        const bool branch_taken_0x121f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F80u;
        // 0x121f84: 0xe60100ec  swc1        $f1, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f80) {
            ctx->pc = 0x121FACu;
            return;
        }
    }
    ctx->pc = 0x121F88u;
    // 0x121f88: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121f8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f94: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x121f98: 0xc047898  jal         func_11E260
    ctx->pc = 0x121F98u;
    SET_GPR_U32(ctx, 31, 0x121FA0u);
    ctx->pc = 0x121F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F98u;
    // 0x121f9c: 0xae0500e4  sw          $a1, 0xE4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x121F98u, 0x121FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FA0u;
label_121fa0:
    // 0x121fa0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121fa4: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x121fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x121fa8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x121fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    ctx->pc = 0x121facu;
}
