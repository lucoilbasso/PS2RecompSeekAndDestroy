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

// Function: entry_00121910
// Address: 0x121910 - 0x121948
void entry_00121910_0x121910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121910_0x121910");
#endif

    switch (ctx->pc) {
        case 0x121920u: goto label_121920;
        default: break;
    }

    ctx->pc = 0x121910u;

    // 0x121910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121914: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121918: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 31, 0x121920u);
    ctx->pc = 0x12191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121918u;
    // 0x12191c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x121918u, 0x121920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x121920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121924: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x121924u;
    {
        const bool branch_taken_0x121924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121924u;
        // 0x121928: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121924) {
            ctx->pc = 0x121948u;
            return;
        }
    }
    ctx->pc = 0x12192Cu;
    // 0x12192c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121930: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x121934: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x121934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12193c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x12193cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x121940: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x121940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x121944: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x121944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x121948u;
}
