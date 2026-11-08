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

// Function: entry_00153ff4
// Address: 0x153ff4 - 0x154038
void entry_00153ff4_0x153ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ff4_0x153ff4");
#endif

    ctx->pc = 0x153ff4u;

    // 0x153ff4: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x153ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x153ff8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x153ffc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x154000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154004: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x154004u;
    {
        const bool branch_taken_0x154004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154004) {
            ctx->pc = 0x154008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154004u;
            // 0x154008: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            return;
        }
    }
    ctx->pc = 0x15400Cu;
    // 0x15400c: 0x51200031  beql        $t1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x15400Cu;
    {
        const bool branch_taken_0x15400c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x15400c) {
            ctx->pc = 0x154010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15400Cu;
            // 0x154010: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            return;
        }
    }
    ctx->pc = 0x154014u;
    // 0x154014: 0xc6220860  lwc1        $f2, 0x860($s1)
    ctx->pc = 0x154014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154018: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15401c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15401cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154020: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x154020u;
    {
        const bool branch_taken_0x154020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154020) {
            ctx->pc = 0x154038u;
            return;
        }
    }
    ctx->pc = 0x154028u;
    // 0x154028: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15402c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15402cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154030: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x154030u;
    {
        const bool branch_taken_0x154030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154030) {
            ctx->pc = 0x154034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154030u;
            // 0x154034: 0xc6210860  lwc1        $f1, 0x860($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15405Cu;
            return;
        }
    }
    ctx->pc = 0x154038u;
}
