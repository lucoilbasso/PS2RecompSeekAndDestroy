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

// Function: entry_00192968
// Address: 0x192968 - 0x192978
void entry_00192968_0x192968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192968_0x192968");
#endif

    ctx->pc = 0x192968u;

    // 0x192968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19296c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19296cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x192970u;
    {
        const bool branch_taken_0x192970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192970) {
            ctx->pc = 0x192974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192970u;
            // 0x192974: 0xe46c0014  swc1        $f12, 0x14($v1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x192978u;
            return;
        }
    }
    ctx->pc = 0x192978u;
}
