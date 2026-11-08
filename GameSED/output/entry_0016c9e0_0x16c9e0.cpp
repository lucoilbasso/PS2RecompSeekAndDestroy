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

// Function: entry_0016c9e0
// Address: 0x16c9e0 - 0x16ca08
void entry_0016c9e0_0x16c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c9e0_0x16c9e0");
#endif

    switch (ctx->pc) {
        case 0x16c9fcu: goto label_16c9fc;
        default: break;
    }

    ctx->pc = 0x16c9e0u;

    // 0x16c9e0: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x16c9e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x16c9e4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16c9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x16c9e8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16c9e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c9ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16C9ECu;
    {
        const bool branch_taken_0x16c9ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c9ec) {
            ctx->pc = 0x16CA08u;
            return;
        }
    }
    ctx->pc = 0x16C9F4u;
    // 0x16c9f4: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16C9F4u;
    SET_GPR_U32(ctx, 31, 0x16C9FCu);
    ctx->pc = 0x16C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9F4u;
    // 0x16c9f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16C9F4u, 0x16C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9FCu;
label_16c9fc:
    // 0x16c9fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca00: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x16ca08u;
}
