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

// Function: entry_0014c494
// Address: 0x14c494 - 0x14c4cc
void entry_0014c494_0x14c494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c494_0x14c494");
#endif

    ctx->pc = 0x14c494u;

    // 0x14c494: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C494u;
    {
        const bool branch_taken_0x14c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c494) {
            ctx->pc = 0x14C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C494u;
            // 0x14c498: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4CCu;
            return;
        }
    }
    ctx->pc = 0x14C49Cu;
    // 0x14c49c: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14C49Cu;
    {
        const bool branch_taken_0x14c49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C49Cu;
        // 0x14c4a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c49c) {
            ctx->pc = 0x14C570u;
            return;
        }
    }
    ctx->pc = 0x14C4A4u;
    // 0x14c4a4: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x14c4a8: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x14C4A8u;
    {
        const bool branch_taken_0x14c4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4a8) {
            ctx->pc = 0x14C4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4A8u;
            // 0x14c4ac: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C574u;
            return;
        }
    }
    ctx->pc = 0x14C4B0u;
    // 0x14c4b0: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x14c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x14c4b4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x14c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c4b8: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14c4b8u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c4bc: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14c4bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14c4c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14c4c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14c4c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x14c4ccu;
}
