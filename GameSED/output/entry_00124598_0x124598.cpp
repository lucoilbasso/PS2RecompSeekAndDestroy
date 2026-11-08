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

// Function: entry_00124598
// Address: 0x124598 - 0x1245e8
void entry_00124598_0x124598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124598_0x124598");
#endif

    ctx->pc = 0x124598u;

    // 0x124598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12459c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1245a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1245a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1245a8: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x1245a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x1245ac: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1245acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1245b0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1245b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1245b4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1245b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1245b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1245b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1245bc: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x1245C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245BCu;
            // 0x1245c0: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x124684u;
            return;
        }
    }
    ctx->pc = 0x1245C4u;
    // 0x1245c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1245c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1245c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1245cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1245CCu;
    {
        const bool branch_taken_0x1245cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245CCu;
        // 0x1245d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245cc) {
            ctx->pc = 0x1245E8u;
            return;
        }
    }
    ctx->pc = 0x1245D4u;
    // 0x1245d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1245d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1245d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1245d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1245dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1245DCu;
    {
        const bool branch_taken_0x1245dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1245dc) {
            ctx->pc = 0x1245FCu;
            return;
        }
    }
    ctx->pc = 0x1245E4u;
    // 0x1245e4: 0x0  nop
    ctx->pc = 0x1245e4u;
    // NOP
    ctx->pc = 0x1245e8u;
}
