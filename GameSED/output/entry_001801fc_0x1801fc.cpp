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

// Function: entry_001801fc
// Address: 0x1801fc - 0x180230
void entry_001801fc_0x1801fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001801fc_0x1801fc");
#endif

    ctx->pc = 0x1801fcu;

    // 0x1801fc: 0x1540000c  bnez        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1801FCu;
    {
        const bool branch_taken_0x1801fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1801fc) {
            ctx->pc = 0x180230u;
            return;
        }
    }
    ctx->pc = 0x180204u;
    // 0x180204: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x180204u;
    {
        const bool branch_taken_0x180204 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x180204) {
            ctx->pc = 0x180230u;
            return;
        }
    }
    ctx->pc = 0x18020Cu;
    // 0x18020c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x18020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180210: 0xc7808560  lwc1        $f0, -0x7AA0($gp)
    ctx->pc = 0x180210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x180214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180218: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x180218u;
    {
        const bool branch_taken_0x180218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180218) {
            ctx->pc = 0x180230u;
            return;
        }
    }
    ctx->pc = 0x180220u;
    // 0x180220: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x180220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180224: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x180224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180228: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180228u;
    {
        const bool branch_taken_0x180228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180228u;
        // 0x18022c: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180228) {
            ctx->pc = 0x180254u;
            return;
        }
    }
    ctx->pc = 0x180230u;
}
