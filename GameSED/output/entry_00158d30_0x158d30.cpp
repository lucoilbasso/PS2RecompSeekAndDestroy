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

// Function: entry_00158d30
// Address: 0x158d30 - 0x158d5c
void entry_00158d30_0x158d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158d30_0x158d30");
#endif

    ctx->pc = 0x158d30u;

    // 0x158d30: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x158d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d34: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x158d34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x158d38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158d3c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x158D3Cu;
    {
        const bool branch_taken_0x158d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158d3c) {
            ctx->pc = 0x158D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D3Cu;
            // 0x158d40: 0xc5000404  lwc1        $f0, 0x404($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158D5Cu;
            return;
        }
    }
    ctx->pc = 0x158D44u;
    // 0x158d44: 0x546000dc  bnel        $v1, $zero, . + 4 + (0xDC << 2)
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d44) {
            ctx->pc = 0x158D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158D44u;
            // 0x158d48: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158D4Cu;
    // 0x158d4c: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158d50: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x158d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x158d54: 0xad02047c  sw          $v0, 0x47C($t0)
    ctx->pc = 0x158d54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1148), GPR_U32(ctx, 2));
    // 0x158d58: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x158d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x158d5cu;
}
