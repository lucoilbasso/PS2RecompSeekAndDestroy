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

// Function: entry_00181f38
// Address: 0x181f38 - 0x181f60
void entry_00181f38_0x181f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f38_0x181f38");
#endif

    ctx->pc = 0x181f38u;

    // 0x181f38: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x181f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x181f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181f40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x181f44: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x181f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x181F48u;
    {
        const bool branch_taken_0x181f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F48u;
        // 0x181f4c: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f48) {
            ctx->pc = 0x181F60u;
            return;
        }
    }
    ctx->pc = 0x181F50u;
    // 0x181f50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x181f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181f54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181f58: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x181F58u;
    {
        const bool branch_taken_0x181f58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181f58) {
            ctx->pc = 0x181F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F58u;
            // 0x181f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FE8u;
            return;
        }
    }
    ctx->pc = 0x181F60u;
}
