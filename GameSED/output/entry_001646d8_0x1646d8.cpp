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

// Function: entry_001646d8
// Address: 0x1646d8 - 0x164704
void entry_001646d8_0x1646d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646d8_0x1646d8");
#endif

    ctx->pc = 0x1646d8u;

    // 0x1646d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1646d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1646dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1646e0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1646E0u;
    {
        const bool branch_taken_0x1646e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1646e0) {
            ctx->pc = 0x1646E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1646E0u;
            // 0x1646e4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16471Cu;
            return;
        }
    }
    ctx->pc = 0x1646E8u;
    // 0x1646e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1646e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1646ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1646f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1646F0u;
    {
        const bool branch_taken_0x1646f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1646f0) {
            ctx->pc = 0x164704u;
            return;
        }
    }
    ctx->pc = 0x1646F8u;
    // 0x1646f8: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1646f8u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x1646fc: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x1646fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x164700: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x164700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x164704u;
}
