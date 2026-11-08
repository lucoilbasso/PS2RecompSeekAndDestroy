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

// Function: entry_00182dac
// Address: 0x182dac - 0x182dbc
void entry_00182dac_0x182dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182dac_0x182dac");
#endif

    ctx->pc = 0x182dacu;

    // 0x182dac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x182dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182db0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x182db0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182db4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x182DB4u;
    {
        const bool branch_taken_0x182db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DB4u;
        // 0x182db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182db4) {
            ctx->pc = 0x182DD0u;
            return;
        }
    }
    ctx->pc = 0x182DBCu;
}
