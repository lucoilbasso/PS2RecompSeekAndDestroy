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

// Function: entry_00182afc
// Address: 0x182afc - 0x182b14
void entry_00182afc_0x182afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182afc_0x182afc");
#endif

    ctx->pc = 0x182afcu;

    // 0x182afc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B30u;
            return;
        }
    }
    ctx->pc = 0x182B04u;
    // 0x182b04: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x182b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182b0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182B0Cu;
    {
        const bool branch_taken_0x182b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b0c) {
            ctx->pc = 0x182B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182B0Cu;
            // 0x182b10: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182B14u;
            return;
        }
    }
    ctx->pc = 0x182B14u;
}
