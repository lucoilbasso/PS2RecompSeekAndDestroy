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

// Function: entry_001238fc
// Address: 0x1238fc - 0x12394c
void entry_001238fc_0x1238fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001238fc_0x1238fc");
#endif

    switch (ctx->pc) {
        case 0x123940u: goto label_123940;
        default: break;
    }

    ctx->pc = 0x1238fcu;

    // 0x1238fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1238fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123904: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x123904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123908: 0x0  nop
    ctx->pc = 0x123908u;
    // NOP
    // 0x12390c: 0x0  nop
    ctx->pc = 0x12390cu;
    // NOP
    // 0x123910: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x123910u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x123914: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x123914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x123918: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x123918u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12391c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12391cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123920: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x123920u;
    {
        const bool branch_taken_0x123920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123920u;
        // 0x123924: 0xe62100dc  swc1        $f1, 0xDC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123920) {
            ctx->pc = 0x12394Cu;
            return;
        }
    }
    ctx->pc = 0x123928u;
    // 0x123928: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x12392c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123930: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x123934: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x123934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x123938: 0xc047898  jal         func_11E260
    ctx->pc = 0x123938u;
    SET_GPR_U32(ctx, 31, 0x123940u);
    ctx->pc = 0x12393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123938u;
    // 0x12393c: 0xae2500d4  sw          $a1, 0xD4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E260u, 0x123938u, 0x123940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123940u;
label_123940:
    // 0x123940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123944: 0xe62000dc  swc1        $f0, 0xDC($s1)
    ctx->pc = 0x123944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x123948: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x123948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x12394cu;
}
