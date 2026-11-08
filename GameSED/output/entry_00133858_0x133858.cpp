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

// Function: entry_00133858
// Address: 0x133858 - 0x133880
void entry_00133858_0x133858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133858_0x133858");
#endif

    ctx->pc = 0x133858u;

    // 0x133858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x133858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13385c: 0x45030211  bc1tl       . + 4 + (0x211 << 2)
    ctx->pc = 0x13385Cu;
    {
        const bool branch_taken_0x13385c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13385c) {
            ctx->pc = 0x133860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13385Cu;
            // 0x133860: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133864u;
    // 0x133864: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x133864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133868: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x133868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13386c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13386cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x133870u;
    {
        const bool branch_taken_0x133870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133870u;
        // 0x133874: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133870) {
            ctx->pc = 0x133880u;
            return;
        }
    }
    ctx->pc = 0x133878u;
    // 0x133878: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x133878u;
    {
        const bool branch_taken_0x133878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133878u;
        // 0x13387c: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133878) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133880u;
}
