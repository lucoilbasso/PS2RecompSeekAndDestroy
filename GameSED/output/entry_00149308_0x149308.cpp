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

// Function: entry_00149308
// Address: 0x149308 - 0x14935c
void entry_00149308_0x149308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149308_0x149308");
#endif

    ctx->pc = 0x149308u;

    // 0x149308: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x149308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14930c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14930cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x149310: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x149314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149318: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14931c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14931cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x149320: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x149324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149328: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x14932c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14932cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149330: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x149330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149334: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149338: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14933c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14933Cu;
    {
        const bool branch_taken_0x14933c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14933c) {
            ctx->pc = 0x149340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14933Cu;
            // 0x149340: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14935Cu;
            return;
        }
    }
    ctx->pc = 0x149344u;
    // 0x149344: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x149344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x149348: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x149348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14934c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14934cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149350: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x149350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x149358: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x149358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x14935cu;
}
