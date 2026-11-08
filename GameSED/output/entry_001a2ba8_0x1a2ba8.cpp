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

// Function: entry_001a2ba8
// Address: 0x1a2ba8 - 0x1a2bc8
void entry_001a2ba8_0x1a2ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ba8_0x1a2ba8");
#endif

    ctx->pc = 0x1a2ba8u;

    // 0x1a2ba8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2bac: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2BACu;
    {
        const bool branch_taken_0x1a2bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bac) {
            ctx->pc = 0x1A2BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BACu;
            // 0x1a2bb0: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BD0u;
            return;
        }
    }
    ctx->pc = 0x1A2BB4u;
    // 0x1a2bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a2bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a2bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a2bbc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1a2bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2bc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A2BC0u;
    {
        const bool branch_taken_0x1a2bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bc0) {
            ctx->pc = 0x1A2BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BC0u;
            // 0x1a2bc4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BC8u;
            return;
        }
    }
    ctx->pc = 0x1A2BC8u;
}
