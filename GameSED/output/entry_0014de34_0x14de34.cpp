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

// Function: entry_0014de34
// Address: 0x14de34 - 0x14dea0
void entry_0014de34_0x14de34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014de34_0x14de34");
#endif

    ctx->pc = 0x14de34u;

    // 0x14de34: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x14DE34u;
    {
        const bool branch_taken_0x14de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE34u;
        // 0x14de38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de34) {
            ctx->pc = 0x14E3E4u;
            return;
        }
    }
    ctx->pc = 0x14DE3Cu;
    // 0x14de3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14de40: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x14de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x14de44: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x14de44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14de48: 0x54430167  bnel        $v0, $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x14DE48u;
    {
        const bool branch_taken_0x14de48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14de48) {
            ctx->pc = 0x14DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DE48u;
            // 0x14de4c: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E3E8u;
            return;
        }
    }
    ctx->pc = 0x14DE50u;
    // 0x14de50: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x14de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14de54: 0x26280260  addiu       $t0, $s1, 0x260
    ctx->pc = 0x14de54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x14de58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14de58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14de5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14de5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14de60: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x14de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
    // 0x14de64: 0xae240690  sw          $a0, 0x690($s1)
    ctx->pc = 0x14de64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 4));
    // 0x14de68: 0xc4801ac4  lwc1        $f0, 0x1AC4($a0)
    ctx->pc = 0x14de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14de6c: 0xe620027c  swc1        $f0, 0x27C($s1)
    ctx->pc = 0x14de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    // 0x14de70: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x14de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14de74: 0xc503000c  lwc1        $f3, 0xC($t0)
    ctx->pc = 0x14de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14de78: 0x0  nop
    ctx->pc = 0x14de78u;
    // NOP
    // 0x14de7c: 0x0  nop
    ctx->pc = 0x14de7cu;
    // NOP
    // 0x14de80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x14de80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x14de84: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x14de84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14de88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14DE88u;
    {
        const bool branch_taken_0x14de88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE88u;
        // 0x14de8c: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de88) {
            ctx->pc = 0x14DEA0u;
            return;
        }
    }
    ctx->pc = 0x14DE90u;
    // 0x14de90: 0xc78081d4  lwc1        $f0, -0x7E2C($gp)
    ctx->pc = 0x14de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14de94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DE94u;
    {
        const bool branch_taken_0x14de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE94u;
        // 0x14de98: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de94) {
            ctx->pc = 0x14DEB8u;
            return;
        }
    }
    ctx->pc = 0x14DE9Cu;
    // 0x14de9c: 0x0  nop
    ctx->pc = 0x14de9cu;
    // NOP
    ctx->pc = 0x14dea0u;
}
