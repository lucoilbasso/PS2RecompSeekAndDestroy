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

// Function: entry_00161af8
// Address: 0x161af8 - 0x161b14
void entry_00161af8_0x161af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161af8_0x161af8");
#endif

    ctx->pc = 0x161af8u;

    // 0x161af8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x161af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161afc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x161AFCu;
    {
        const bool branch_taken_0x161afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161afc) {
            ctx->pc = 0x161B14u;
            return;
        }
    }
    ctx->pc = 0x161B04u;
    // 0x161b04: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x161b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x161b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b0c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x161B0Cu;
    {
        const bool branch_taken_0x161b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b0c) {
            ctx->pc = 0x161B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161B0Cu;
            // 0x161b10: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161B74u;
            return;
        }
    }
    ctx->pc = 0x161B14u;
}
