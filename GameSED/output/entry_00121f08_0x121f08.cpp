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

// Function: entry_00121f08
// Address: 0x121f08 - 0x121f48
void entry_00121f08_0x121f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f08_0x121f08");
#endif

    ctx->pc = 0x121f08u;

    // 0x121f08: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x121f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x121f0c: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x121F0Cu;
    {
        const bool branch_taken_0x121f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f0c) {
            ctx->pc = 0x121F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F0Cu;
            // 0x121f10: 0xc601016c  lwc1        $f1, 0x16C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1220D0u;
            return;
        }
    }
    ctx->pc = 0x121F14u;
    // 0x121f14: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x121f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x121f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x121f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121f20: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x121F20u;
    {
        const bool branch_taken_0x121f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F20u;
        // 0x121f24: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f20) {
            ctx->pc = 0x122144u;
            return;
        }
    }
    ctx->pc = 0x121F28u;
    // 0x121f28: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x121f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x121f2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x121f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x121f30: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121F30u;
    {
        const bool branch_taken_0x121f30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x121F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F30u;
        // 0x121f34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f30) {
            ctx->pc = 0x121F48u;
            return;
        }
    }
    ctx->pc = 0x121F38u;
    // 0x121f38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121f3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121f40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x121F40u;
    {
        const bool branch_taken_0x121f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f40) {
            ctx->pc = 0x121F5Cu;
            return;
        }
    }
    ctx->pc = 0x121F48u;
}
