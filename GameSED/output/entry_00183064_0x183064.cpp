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

// Function: entry_00183064
// Address: 0x183064 - 0x183078
void entry_00183064_0x183064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183064_0x183064");
#endif

    ctx->pc = 0x183064u;

    // 0x183064: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x183064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183068: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x183068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x18306c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18306cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183070: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x183070u;
    {
        const bool branch_taken_0x183070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183070) {
            ctx->pc = 0x183074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183070u;
            // 0x183074: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183078u;
            return;
        }
    }
    ctx->pc = 0x183078u;
}
