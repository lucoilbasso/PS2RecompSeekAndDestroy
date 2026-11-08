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

// Function: entry_001383fc
// Address: 0x1383fc - 0x13843c
void entry_001383fc_0x1383fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001383fc_0x1383fc");
#endif

    ctx->pc = 0x1383fcu;

    // 0x1383fc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x1383fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x138400: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x138400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138404: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x138404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138408: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x138408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13840c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13840cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138410: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x138410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x138414: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x138414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138418: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x138418u;
    {
        const bool branch_taken_0x138418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138418) {
            ctx->pc = 0x13841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138418u;
            // 0x13841c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            return;
        }
    }
    ctx->pc = 0x138420u;
    // 0x138420: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x138420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x138424: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x138424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138428u;
    {
        const bool branch_taken_0x138428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138428u;
        // 0x13842c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138428) {
            ctx->pc = 0x13843Cu;
            return;
        }
    }
    ctx->pc = 0x138430u;
    // 0x138430: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x138430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x138434: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x138434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x138438: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x13843cu;
}
