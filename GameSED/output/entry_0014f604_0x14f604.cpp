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

// Function: entry_0014f604
// Address: 0x14f604 - 0x14f63c
void entry_0014f604_0x14f604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f604_0x14f604");
#endif

    ctx->pc = 0x14f604u;

    // 0x14f604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f608: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x14f608u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14f60c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x14f60cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14f610: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x14f610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14f614: 0xc4950364  lwc1        $f21, 0x364($a0)
    ctx->pc = 0x14f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14f618: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x14f618u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f61c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x14F61Cu;
    {
        const bool branch_taken_0x14f61c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F61Cu;
        // 0x14f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f61c) {
            ctx->pc = 0x14F6CCu;
            return;
        }
    }
    ctx->pc = 0x14F624u;
    // 0x14f624: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x14f624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f628: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14F628u;
    {
        const bool branch_taken_0x14f628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F628u;
        // 0x14f62c: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f628) {
            ctx->pc = 0x14F63Cu;
            return;
        }
    }
    ctx->pc = 0x14F630u;
    // 0x14f630: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x14f630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x14f634: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14f634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14f638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x14f63cu;
}
