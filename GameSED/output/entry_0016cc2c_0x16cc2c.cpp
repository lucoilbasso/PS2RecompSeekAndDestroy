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

// Function: entry_0016cc2c
// Address: 0x16cc2c - 0x16cc4c
void entry_0016cc2c_0x16cc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cc2c_0x16cc2c");
#endif

    ctx->pc = 0x16cc2cu;

    // 0x16cc2c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x16cc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cc30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16CC30u;
    {
        const bool branch_taken_0x16cc30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC30u;
        // 0x16cc34: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc30) {
            ctx->pc = 0x16CC4Cu;
            return;
        }
    }
    ctx->pc = 0x16CC38u;
    // 0x16cc38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16cc3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16cc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16cc40: 0x46000829  min.s       $f0, $f1, $f0
    ctx->pc = 0x16cc40u;
    ctx->f[0] = std::min(ctx->f[1], ctx->f[0]);
    // 0x16cc44: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16cc48: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x16cc4cu;
}
