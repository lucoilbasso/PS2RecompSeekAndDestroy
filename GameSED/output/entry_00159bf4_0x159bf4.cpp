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

// Function: entry_00159bf4
// Address: 0x159bf4 - 0x159c54
void entry_00159bf4_0x159bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159bf4_0x159bf4");
#endif

    ctx->pc = 0x159bf4u;

    // 0x159bf4: 0xc4e00474  lwc1        $f0, 0x474($a3)
    ctx->pc = 0x159bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159bf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159bfc: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x159BFCu;
    {
        const bool branch_taken_0x159bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BFCu;
        // 0x159c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bfc) {
            ctx->pc = 0x159D8Cu;
            return;
        }
    }
    ctx->pc = 0x159C04u;
    // 0x159c04: 0x24e80120  addiu       $t0, $a3, 0x120
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x159c08: 0xc4e20134  lwc1        $f2, 0x134($a3)
    ctx->pc = 0x159c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159c0c: 0x46010104  c1          0x10104
    ctx->pc = 0x159c0cu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x159c10: 0xc7808310  lwc1        $f0, -0x7CF0($gp)
    ctx->pc = 0x159c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159c14: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x159c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159c18: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x159C18u;
    {
        const bool branch_taken_0x159c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159c18) {
            ctx->pc = 0x159C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C18u;
            // 0x159c1c: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C54u;
            return;
        }
    }
    ctx->pc = 0x159C20u;
    // 0x159c20: 0x24e60400  addiu       $a2, $a3, 0x400
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x159c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159c30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x159c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159c34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159c38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x159c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x159c3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x159c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159c40: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159c40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159c44: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159c44u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159c48: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159c48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159c4c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159c50: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x159c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    ctx->pc = 0x159c54u;
}
