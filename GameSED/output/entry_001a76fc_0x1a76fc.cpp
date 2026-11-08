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

// Function: entry_001a76fc
// Address: 0x1a76fc - 0x1a7730
void entry_001a76fc_0x1a76fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a76fc_0x1a76fc");
#endif

    switch (ctx->pc) {
        case 0x1a7728u: goto label_1a7728;
        default: break;
    }

    ctx->pc = 0x1a76fcu;

    // 0x1a76fc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7700: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7708: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a770c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7710: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7714: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a7714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7718: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7718u;
    {
        const bool branch_taken_0x1a7718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7718u;
        // 0x1a771c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7718) {
            ctx->pc = 0x1A7730u;
            return;
        }
    }
    ctx->pc = 0x1A7720u;
    // 0x1a7720: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7720u;
    SET_GPR_U32(ctx, 31, 0x1A7728u);
    ctx->pc = 0x1A7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7720u;
    // 0x1a7724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7720u, 0x1A7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7728u;
label_1a7728:
    // 0x1a7728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7728u;
    {
        const bool branch_taken_0x1a7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7728u;
        // 0x1a772c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7728) {
            ctx->pc = 0x1A7734u;
            return;
        }
    }
    ctx->pc = 0x1A7730u;
}
