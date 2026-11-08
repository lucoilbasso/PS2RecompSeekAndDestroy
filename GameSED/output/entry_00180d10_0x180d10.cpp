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

// Function: entry_00180d10
// Address: 0x180d10 - 0x180d28
void entry_00180d10_0x180d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d10_0x180d10");
#endif

    ctx->pc = 0x180d10u;

    // 0x180d10: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x180d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d14: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x180d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d18: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x180d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x180d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D20u;
    {
        const bool branch_taken_0x180d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d20) {
            ctx->pc = 0x180D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D20u;
            // 0x180d24: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D28u;
            return;
        }
    }
    ctx->pc = 0x180D28u;
}
