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

// Function: entry_001811fc
// Address: 0x1811fc - 0x181220
void entry_001811fc_0x1811fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001811fc_0x1811fc");
#endif

    ctx->pc = 0x1811fcu;

    // 0x1811fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1811fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181200: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181204: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x181204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181208u;
    {
        const bool branch_taken_0x181208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181208u;
        // 0x18120c: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181208) {
            ctx->pc = 0x181220u;
            return;
        }
    }
    ctx->pc = 0x181210u;
    // 0x181210: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x181210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181218: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x181218u;
    {
        const bool branch_taken_0x181218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181218) {
            ctx->pc = 0x18121Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181218u;
            // 0x18121c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x181220u;
}
