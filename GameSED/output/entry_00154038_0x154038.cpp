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

// Function: entry_00154038
// Address: 0x154038 - 0x15405c
void entry_00154038_0x154038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154038_0x154038");
#endif

    ctx->pc = 0x154038u;

    // 0x154038: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x154038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15403c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
    ctx->pc = 0x15403Cu;
    {
        const bool branch_taken_0x15403c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15403c) {
            ctx->pc = 0x154040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15403Cu;
            // 0x154040: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            return;
        }
    }
    ctx->pc = 0x154044u;
    // 0x154044: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x154048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15404c: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x15404Cu;
    {
        const bool branch_taken_0x15404c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15404c) {
            ctx->pc = 0x154050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15404Cu;
            // 0x154050: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            return;
        }
    }
    ctx->pc = 0x154054u;
    // 0x154054: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154058: 0xc6210860  lwc1        $f1, 0x860($s1)
    ctx->pc = 0x154058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x15405cu;
}
