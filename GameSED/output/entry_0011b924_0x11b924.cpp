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

// Function: entry_0011b924
// Address: 0x11b924 - 0x11b960
void entry_0011b924_0x11b924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b924_0x11b924");
#endif

    switch (ctx->pc) {
        case 0x11b958u: goto label_11b958;
        default: break;
    }

    ctx->pc = 0x11b924u;

    // 0x11b924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b92c: 0x26113410  addiu       $s1, $s0, 0x3410
    ctx->pc = 0x11b92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x11b930: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b934: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B934u;
    {
        const bool branch_taken_0x11b934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b934) {
            ctx->pc = 0x11B938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B934u;
            // 0x11b938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B980u;
            return;
        }
    }
    ctx->pc = 0x11B93Cu;
    // 0x11b93c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B93Cu;
    {
        const bool branch_taken_0x11b93c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x11B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B93Cu;
        // 0x11b940: 0x260433f0  addiu       $a0, $s0, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b93c) {
            ctx->pc = 0x11B960u;
            return;
        }
    }
    ctx->pc = 0x11B944u;
    // 0x11b944: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b94c: 0x24a54798  addiu       $a1, $a1, 0x4798
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18328));
    // 0x11b950: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B950u;
    SET_GPR_U32(ctx, 31, 0x11B958u);
    ctx->pc = 0x11B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B950u;
    // 0x11b954: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B950u, 0x11B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B958u;
label_11b958:
    // 0x11b958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b95c: 0x260433f0  addiu       $a0, $s0, 0x33F0
    ctx->pc = 0x11b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
    ctx->pc = 0x11b960u;
}
