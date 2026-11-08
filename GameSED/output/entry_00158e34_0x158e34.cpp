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

// Function: entry_00158e34
// Address: 0x158e34 - 0x158e48
void entry_00158e34_0x158e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e34_0x158e34");
#endif

    ctx->pc = 0x158e34u;

    // 0x158e34: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x158e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x158e38: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x158e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158E40u;
    {
        const bool branch_taken_0x158e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e40) {
            ctx->pc = 0x158E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158E40u;
            // 0x158e44: 0x34a50040  ori         $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158E48u;
            return;
        }
    }
    ctx->pc = 0x158E48u;
}
