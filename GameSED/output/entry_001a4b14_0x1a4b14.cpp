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

// Function: entry_001a4b14
// Address: 0x1a4b14 - 0x1a4b28
void entry_001a4b14_0x1a4b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b14_0x1a4b14");
#endif

    ctx->pc = 0x1a4b14u;

    // 0x1a4b14: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4b1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4B1Cu;
    {
        const bool branch_taken_0x1a4b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B1Cu;
        // 0x1a4b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b1c) {
            ctx->pc = 0x1A4B28u;
            return;
        }
    }
    ctx->pc = 0x1A4B24u;
    // 0x1a4b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4b28u;
}
