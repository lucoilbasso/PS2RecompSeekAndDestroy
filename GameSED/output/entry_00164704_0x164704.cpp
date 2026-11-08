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

// Function: entry_00164704
// Address: 0x164704 - 0x16471c
void entry_00164704_0x164704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164704_0x164704");
#endif

    ctx->pc = 0x164704u;

    // 0x164704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164708: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x164708u;
    {
        const bool branch_taken_0x164708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164708) {
            ctx->pc = 0x16470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164708u;
            // 0x16470c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16471Cu;
            return;
        }
    }
    ctx->pc = 0x164710u;
    // 0x164710: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x164710u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x164714: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x164714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x164718: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x16471cu;
}
