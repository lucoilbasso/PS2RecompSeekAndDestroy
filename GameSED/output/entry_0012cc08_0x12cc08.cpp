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

// Function: entry_0012cc08
// Address: 0x12cc08 - 0x12cc38
void entry_0012cc08_0x12cc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc08_0x12cc08");
#endif

    ctx->pc = 0x12cc08u;

    // 0x12cc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12cc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cc0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12cc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cc10: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
    ctx->pc = 0x12CC10u;
    {
        const bool branch_taken_0x12cc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cc10) {
            ctx->pc = 0x12CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC10u;
            // 0x12cc14: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD44u;
            return;
        }
    }
    ctx->pc = 0x12CC18u;
    // 0x12cc18: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12cc1c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12cc20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CC20u;
    {
        const bool branch_taken_0x12cc20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC20u;
        // 0x12cc24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc20) {
            ctx->pc = 0x12CC38u;
            return;
        }
    }
    ctx->pc = 0x12CC28u;
    // 0x12cc28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12cc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cc2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12cc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12cc30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CC30u;
    {
        const bool branch_taken_0x12cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cc30) {
            ctx->pc = 0x12CC4Cu;
            return;
        }
    }
    ctx->pc = 0x12CC38u;
}
