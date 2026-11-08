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

// Function: entry_0012cc4c
// Address: 0x12cc4c - 0x12cc9c
void entry_0012cc4c_0x12cc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc4c_0x12cc4c");
#endif

    switch (ctx->pc) {
        case 0x12cc90u: goto label_12cc90;
        default: break;
    }

    ctx->pc = 0x12cc4cu;

    // 0x12cc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12cc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12cc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc54: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x12cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cc58: 0x0  nop
    ctx->pc = 0x12cc58u;
    // NOP
    // 0x12cc5c: 0x0  nop
    ctx->pc = 0x12cc5cu;
    // NOP
    // 0x12cc60: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12cc60u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x12cc64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12cc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12cc68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12cc68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cc6c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12cc6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cc70: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC70u;
        // 0x12cc74: 0xe60100d4  swc1        $f1, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12CC9Cu;
            return;
        }
    }
    ctx->pc = 0x12CC78u;
    // 0x12cc78: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x12cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12cc7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc84: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12cc88: 0xc047898  jal         func_11E260
    ctx->pc = 0x12CC88u;
    SET_GPR_U32(ctx, 31, 0x12CC90u);
    ctx->pc = 0x12CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC88u;
    // 0x12cc8c: 0xae0500cc  sw          $a1, 0xCC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x12CC88u, 0x12CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC90u;
label_12cc90:
    // 0x12cc90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc94: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x12cc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12cc98: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x12cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    ctx->pc = 0x12cc9cu;
}
