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

// Function: entry_00140050
// Address: 0x140050 - 0x140080
void entry_00140050_0x140050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140050_0x140050");
#endif

    ctx->pc = 0x140050u;

    // 0x140050: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x140050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140054: 0xc6010204  lwc1        $f1, 0x204($s0)
    ctx->pc = 0x140054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140058: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x140058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14005c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x14005Cu;
    {
        const bool branch_taken_0x14005c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14005Cu;
        // 0x140060: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14005c) {
            ctx->pc = 0x14008Cu;
            return;
        }
    }
    ctx->pc = 0x140064u;
    // 0x140064: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x140068: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14006c: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x14006cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x140070: 0x0  nop
    ctx->pc = 0x140070u;
    // NOP
    // 0x140074: 0x0  nop
    ctx->pc = 0x140074u;
    // NOP
    // 0x140078: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x140078u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14007c: 0xe600015c  swc1        $f0, 0x15C($s0)
    ctx->pc = 0x14007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->pc = 0x140080u;
}
