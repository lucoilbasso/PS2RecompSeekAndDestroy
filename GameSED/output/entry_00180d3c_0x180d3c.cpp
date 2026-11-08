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

// Function: entry_00180d3c
// Address: 0x180d3c - 0x180d54
void entry_00180d3c_0x180d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d3c_0x180d3c");
#endif

    ctx->pc = 0x180d3cu;

    // 0x180d3c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x180D3Cu;
    {
        const bool branch_taken_0x180d3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D3Cu;
        // 0x180d40: 0xc5800004  lwc1        $f0, 0x4($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d3c) {
            ctx->pc = 0x180D60u;
            return;
        }
    }
    ctx->pc = 0x180D44u;
    // 0x180d44: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x180d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180d4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180D4Cu;
    {
        const bool branch_taken_0x180d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180d4c) {
            ctx->pc = 0x180D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D4Cu;
            // 0x180d50: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D54u;
            return;
        }
    }
    ctx->pc = 0x180D54u;
}
