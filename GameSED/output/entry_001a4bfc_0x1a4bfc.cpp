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

// Function: entry_001a4bfc
// Address: 0x1a4bfc - 0x1a4c10
void entry_001a4bfc_0x1a4bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4bfc_0x1a4bfc");
#endif

    ctx->pc = 0x1a4bfcu;

    // 0x1a4bfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4c00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4c04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4C04u;
    {
        const bool branch_taken_0x1a4c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C04u;
        // 0x1a4c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c04) {
            ctx->pc = 0x1A4C10u;
            return;
        }
    }
    ctx->pc = 0x1A4C0Cu;
    // 0x1a4c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4c10u;
}
