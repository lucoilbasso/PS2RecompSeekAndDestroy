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

// Function: entry_00181e20
// Address: 0x181e20 - 0x181e58
void entry_00181e20_0x181e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e20_0x181e20");
#endif

    ctx->pc = 0x181e20u;

    // 0x181e20: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x181E20u;
    {
        const bool branch_taken_0x181e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E20u;
        // 0x181e24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e20) {
            ctx->pc = 0x181E58u;
            return;
        }
    }
    ctx->pc = 0x181E28u;
    // 0x181e28: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x181e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e2c: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x181e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e30: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E30u;
        // 0x181e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E58u;
            return;
        }
    }
    ctx->pc = 0x181E38u;
    // 0x181e38: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x181e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x181E3Cu;
    {
        const bool branch_taken_0x181e3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E3Cu;
        // 0x181e40: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e3c) {
            ctx->pc = 0x181E5Cu;
            return;
        }
    }
    ctx->pc = 0x181E44u;
    // 0x181e44: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x181e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181e48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x181e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181e4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x181E4Cu;
    {
        const bool branch_taken_0x181e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x181E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E4Cu;
        // 0x181e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e4c) {
            ctx->pc = 0x181E58u;
            return;
        }
    }
    ctx->pc = 0x181E54u;
    // 0x181e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x181e58u;
}
