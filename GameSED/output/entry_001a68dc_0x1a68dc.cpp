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

// Function: entry_001a68dc
// Address: 0x1a68dc - 0x1a690c
void entry_001a68dc_0x1a68dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a68dc_0x1a68dc");
#endif

    switch (ctx->pc) {
        case 0x1a6908u: goto label_1a6908;
        default: break;
    }

    ctx->pc = 0x1a68dcu;

    // 0x1a68dc: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a68e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a68e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a68e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a68e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a68ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a68f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a68f4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a68f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a68f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A68F8u;
    {
        const bool branch_taken_0x1a68f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68F8u;
        // 0x1a68fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68f8) {
            ctx->pc = 0x1A690Cu;
            return;
        }
    }
    ctx->pc = 0x1A6900u;
    // 0x1a6900: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6900u;
    SET_GPR_U32(ctx, 31, 0x1A6908u);
    ctx->pc = 0x1A6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6900u;
    // 0x1a6904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6900u, 0x1A6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6908u;
label_1a6908:
    // 0x1a6908: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a690cu;
}
