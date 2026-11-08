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

// Function: entry_00153898
// Address: 0x153898 - 0x1538bc
void entry_00153898_0x153898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153898_0x153898");
#endif

    ctx->pc = 0x153898u;

    // 0x153898: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x153898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15389c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1538a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1538A0u;
    {
        const bool branch_taken_0x1538a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1538A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538A0u;
        // 0x1538a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538a0) {
            ctx->pc = 0x1538C0u;
            return;
        }
    }
    ctx->pc = 0x1538A8u;
    // 0x1538a8: 0x8e250694  lw          $a1, 0x694($s1)
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x1538ac: 0x26240698  addiu       $a0, $s1, 0x698
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1688));
    // 0x1538b0: 0xc78c82c8  lwc1        $f12, -0x7D38($gp)
    ctx->pc = 0x1538b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1538b4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x1538B4u;
    SET_GPR_U32(ctx, 31, 0x1538BCu);
    ctx->pc = 0x1538B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538B4u;
    // 0x1538b8: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x1538B4u, 0x1538BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538BCu;
}
