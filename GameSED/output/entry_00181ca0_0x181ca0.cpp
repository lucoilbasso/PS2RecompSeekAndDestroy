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

// Function: entry_00181ca0
// Address: 0x181ca0 - 0x181cb8
void entry_00181ca0_0x181ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181ca0_0x181ca0");
#endif

    ctx->pc = 0x181ca0u;

    // 0x181ca0: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x181ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ca4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x181ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181ca8: 0x46050081  sub.s       $f2, $f0, $f5
    ctx->pc = 0x181ca8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x181cac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x181cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181cb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x181CB0u;
    {
        const bool branch_taken_0x181cb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181cb0) {
            ctx->pc = 0x181CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181CB0u;
            // 0x181cb4: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x181CB8u;
            return;
        }
    }
    ctx->pc = 0x181CB8u;
}
