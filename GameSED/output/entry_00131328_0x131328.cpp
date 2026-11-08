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

// Function: entry_00131328
// Address: 0x131328 - 0x131378
void entry_00131328_0x131328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131328_0x131328");
#endif

    ctx->pc = 0x131328u;

    // 0x131328: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x131328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x13132c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x13132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x131330: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x131330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x131334: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x131338: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13133c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x131340: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x131344: 0x14e6000c  bne         $a3, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x131344u;
    {
        const bool branch_taken_0x131344 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x131348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131344u;
        // 0x131348: 0x8cb202f8  lw          $s2, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131344) {
            ctx->pc = 0x131378u;
            return;
        }
    }
    ctx->pc = 0x13134Cu;
    // 0x13134c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131350: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x131354: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x131354u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131358: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x131358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x13135c: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x13135cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x131360: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x131360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131364: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x131364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x131368: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13136c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x13136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x131370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x131370u;
    {
        const bool branch_taken_0x131370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131370u;
        // 0x131374: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131370) {
            ctx->pc = 0x1313B0u;
            return;
        }
    }
    ctx->pc = 0x131378u;
}
