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

// Function: entry_0011eb6c
// Address: 0x11eb6c - 0x11eba4
void entry_0011eb6c_0x11eb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb6c_0x11eb6c");
#endif

    ctx->pc = 0x11eb6cu;

    // 0x11eb6c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x11eb6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb70: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x11EB70u;
    {
        const bool branch_taken_0x11eb70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB70u;
        // 0x11eb74: 0x24c20080  addiu       $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb70) {
            ctx->pc = 0x11EBA4u;
            return;
        }
    }
    ctx->pc = 0x11EB78u;
    // 0x11eb78: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x11eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb7c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x11eb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb80: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x11EB80u;
    {
        const bool branch_taken_0x11eb80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB80u;
        // 0x11eb84: 0x24c40090  addiu       $a0, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb80) {
            ctx->pc = 0x11EBA8u;
            return;
        }
    }
    ctx->pc = 0x11EB88u;
    // 0x11eb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11eb8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11eb8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB90u;
    {
        const bool branch_taken_0x11eb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB90u;
        // 0x11eb94: 0xe4c00058  swc1        $f0, 0x58($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb90) {
            ctx->pc = 0x11EBA8u;
            return;
        }
    }
    ctx->pc = 0x11EB98u;
    // 0x11eb98: 0xe4c2005c  swc1        $f2, 0x5C($a2)
    ctx->pc = 0x11eb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x11eb9c: 0xe4c20058  swc1        $f2, 0x58($a2)
    ctx->pc = 0x11eb9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x11eba0: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x11eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    ctx->pc = 0x11eba4u;
}
