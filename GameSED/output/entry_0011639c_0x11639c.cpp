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

// Function: entry_0011639c
// Address: 0x11639c - 0x1163bc
void entry_0011639c_0x11639c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011639c_0x11639c");
#endif

    ctx->pc = 0x11639cu;

    // 0x11639c: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x11639cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1163a0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1163A0u;
    {
        const bool branch_taken_0x1163a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163A0u;
        // 0x1163a4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163a0) {
            ctx->pc = 0x116300u;
            return;
        }
    }
    ctx->pc = 0x1163A8u;
    // 0x1163a8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1163ac: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x1163acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x1163b0: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x1163b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400B0u));
    // 0x1163b4: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1163B4u;
    {
        const bool branch_taken_0x1163b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1163b4) {
            ctx->pc = 0x1163B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1163B4u;
            // 0x1163b8: 0xac400400  sw          $zero, 0x400($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163BCu;
            return;
        }
    }
    ctx->pc = 0x1163BCu;
}
