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

// Function: entry_001809d8
// Address: 0x1809d8 - 0x180a04
void entry_001809d8_0x1809d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001809d8_0x1809d8");
#endif

    ctx->pc = 0x1809d8u;

    // 0x1809d8: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x1809d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1809dc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1809dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1809e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1809e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809e4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1809E4u;
    {
        const bool branch_taken_0x1809e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1809E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809E4u;
        // 0x1809e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809e4) {
            ctx->pc = 0x180A04u;
            return;
        }
    }
    ctx->pc = 0x1809ECu;
    // 0x1809ec: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1809ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1809f0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1809f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1809f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1809f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1809f8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1809F8u;
    {
        const bool branch_taken_0x1809f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1809f8) {
            ctx->pc = 0x1809FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1809F8u;
            // 0x1809fc: 0xaf22000c  sw          $v0, 0xC($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A08u;
            return;
        }
    }
    ctx->pc = 0x180A00u;
    // 0x180a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180a04u;
}
