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

// Function: entry_00121dd4
// Address: 0x121dd4 - 0x121e24
void entry_00121dd4_0x121dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121dd4_0x121dd4");
#endif

    switch (ctx->pc) {
        case 0x121e18u: goto label_121e18;
        default: break;
    }

    ctx->pc = 0x121dd4u;

    // 0x121dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ddc: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x121ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121de0: 0x0  nop
    ctx->pc = 0x121de0u;
    // NOP
    // 0x121de4: 0x0  nop
    ctx->pc = 0x121de4u;
    // NOP
    // 0x121de8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x121de8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x121dec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x121decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121df0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x121df0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x121df4: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x121df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121df8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x121DF8u;
    {
        const bool branch_taken_0x121df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DF8u;
        // 0x121dfc: 0xe60100fc  swc1        $f1, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121df8) {
            ctx->pc = 0x121E24u;
            return;
        }
    }
    ctx->pc = 0x121E00u;
    // 0x121e00: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x121e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x121e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e0c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121e10: 0xc047898  jal         func_11E260
    ctx->pc = 0x121E10u;
    SET_GPR_U32(ctx, 31, 0x121E18u);
    ctx->pc = 0x121E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E10u;
    // 0x121e14: 0xae0500f4  sw          $a1, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x121E10u, 0x121E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E18u;
label_121e18:
    // 0x121e18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121e1c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x121e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x121e20: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x121e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->pc = 0x121e24u;
}
