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

// Function: entry_0018d64c
// Address: 0x18d64c - 0x18d67c
void entry_0018d64c_0x18d64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d64c_0x18d64c");
#endif

    ctx->pc = 0x18d64cu;

    // 0x18d64c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d654: 0xa6f60000  sh          $s6, 0x0($s7)
    ctx->pc = 0x18d654u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x18d658: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18D658u;
    {
        const bool branch_taken_0x18d658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D658u;
        // 0x18d65c: 0x26b20002  addiu       $s2, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d658) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D660u;
    // 0x18d660: 0x8622023c  lh          $v0, 0x23C($s1)
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x18d664: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18D664u;
    {
        const bool branch_taken_0x18d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d664) {
            ctx->pc = 0x18D668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D664u;
            // 0x18d668: 0x96220244  lhu         $v0, 0x244($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D694u;
            return;
        }
    }
    ctx->pc = 0x18D66Cu;
    // 0x18d66c: 0x86220246  lh          $v0, 0x246($s1)
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x18d670: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x18d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d674: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18d678: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    ctx->pc = 0x18d67cu;
}
