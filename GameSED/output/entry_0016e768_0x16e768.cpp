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

// Function: entry_0016e768
// Address: 0x16e768 - 0x16e790
void entry_0016e768_0x16e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e768_0x16e768");
#endif

    switch (ctx->pc) {
        case 0x16e784u: goto label_16e784;
        default: break;
    }

    ctx->pc = 0x16e768u;

    // 0x16e768: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x16e768u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x16e76c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16e76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x16e770: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16e770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e774: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E774u;
    {
        const bool branch_taken_0x16e774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e774) {
            ctx->pc = 0x16E790u;
            return;
        }
    }
    ctx->pc = 0x16E77Cu;
    // 0x16e77c: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16E77Cu;
    SET_GPR_U32(ctx, 31, 0x16E784u);
    ctx->pc = 0x16E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E77Cu;
    // 0x16e780: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16E77Cu, 0x16E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E784u;
label_16e784:
    // 0x16e784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e788: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16e788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e78c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x16e790u;
}
