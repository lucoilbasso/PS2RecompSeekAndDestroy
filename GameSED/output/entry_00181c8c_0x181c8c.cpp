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

// Function: entry_00181c8c
// Address: 0x181c8c - 0x181ca0
void entry_00181c8c_0x181c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c8c_0x181c8c");
#endif

    ctx->pc = 0x181c8cu;

    // 0x181c8c: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x181c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181c90: 0x460500c0  add.s       $f3, $f0, $f5
    ctx->pc = 0x181c90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x181c94: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x181c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181c98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181C98u;
    {
        const bool branch_taken_0x181c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181c98) {
            ctx->pc = 0x181C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181C98u;
            // 0x181c9c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CA0u;
            return;
        }
    }
    ctx->pc = 0x181CA0u;
}
