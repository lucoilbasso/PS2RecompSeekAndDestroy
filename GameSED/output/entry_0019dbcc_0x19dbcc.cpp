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

// Function: entry_0019dbcc
// Address: 0x19dbcc - 0x19dc00
void entry_0019dbcc_0x19dbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbcc_0x19dbcc");
#endif

    ctx->pc = 0x19dbccu;

    // 0x19dbcc: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x19dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x19dbd0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dbd8: 0xc78285e4  lwc1        $f2, -0x7A1C($gp)
    ctx->pc = 0x19dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dbdc: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x19dbdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19dbe0: 0x460c1842  mul.s       $f1, $f3, $f12
    ctx->pc = 0x19dbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x19dbe4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x19dbe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbe8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19DBE8u;
    {
        const bool branch_taken_0x19dbe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBE8u;
        // 0x19dbec: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbe8) {
            ctx->pc = 0x19DC00u;
            return;
        }
    }
    ctx->pc = 0x19DBF0u;
    // 0x19dbf0: 0xc78085e8  lwc1        $f0, -0x7A18($gp)
    ctx->pc = 0x19dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19dbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19DBF8u;
    {
        const bool branch_taken_0x19dbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19dbf8) {
            ctx->pc = 0x19DBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19DBF8u;
            // 0x19dbfc: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19DC00u;
            return;
        }
    }
    ctx->pc = 0x19DC00u;
}
