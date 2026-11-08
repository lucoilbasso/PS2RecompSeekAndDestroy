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

// Function: entry_0013ffe8
// Address: 0x13ffe8 - 0x140050
void entry_0013ffe8_0x13ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ffe8_0x13ffe8");
#endif

    ctx->pc = 0x13ffe8u;

    // 0x13ffe8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13ffe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffec: 0x12800073  beqz        $s4, . + 4 + (0x73 << 2)
    ctx->pc = 0x13FFECu;
    {
        const bool branch_taken_0x13ffec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFECu;
        // 0x13fff0: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ffec) {
            ctx->pc = 0x1401BCu;
            return;
        }
    }
    ctx->pc = 0x13FFF4u;
    // 0x13fff4: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x13fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x13fff8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x13fff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x13fffc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13FFFCu;
    {
        const bool branch_taken_0x13fffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FFFCu;
        // 0x140000: 0x8c73d188  lw          $s3, -0x2E78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fffc) {
            ctx->pc = 0x140050u;
            return;
        }
    }
    ctx->pc = 0x140004u;
    // 0x140004: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x140004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140008: 0xc781813c  lwc1        $f1, -0x7EC4($gp)
    ctx->pc = 0x140008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14000c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x14000cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140010: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x140010u;
    {
        const bool branch_taken_0x140010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140010u;
        // 0x140014: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140010) {
            ctx->pc = 0x14008Cu;
            return;
        }
    }
    ctx->pc = 0x140018u;
    // 0x140018: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
    // 0x14001c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14001cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140020: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x140020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x140024: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x140024u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x140028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14002c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14002cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140030: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x140030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x140034: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x140034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x140038: 0x0  nop
    ctx->pc = 0x140038u;
    // NOP
    // 0x14003c: 0x0  nop
    ctx->pc = 0x14003cu;
    // NOP
    // 0x140040: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x140040u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x140044: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x140044u;
    {
        const bool branch_taken_0x140044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140044u;
        // 0x140048: 0xe601015c  swc1        $f1, 0x15C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140044) {
            ctx->pc = 0x140080u;
            return;
        }
    }
    ctx->pc = 0x14004Cu;
    // 0x14004c: 0x0  nop
    ctx->pc = 0x14004cu;
    // NOP
    ctx->pc = 0x140050u;
}
