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

// Function: entry_001a7184
// Address: 0x1a7184 - 0x1a71c0
void entry_001a7184_0x1a7184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7184_0x1a7184");
#endif

    switch (ctx->pc) {
        case 0x1a71b4u: goto label_1a71b4;
        default: break;
    }

    ctx->pc = 0x1a7184u;

    // 0x1a7184: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A7184u;
    {
        const bool branch_taken_0x1a7184 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7184u;
        // 0x1a7188: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7184) {
            ctx->pc = 0x1A7214u;
            return;
        }
    }
    ctx->pc = 0x1A718Cu;
    // 0x1a718c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7198: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a719c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a71a0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a71a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a71a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A71A4u;
    {
        const bool branch_taken_0x1a71a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71A4u;
        // 0x1a71a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71a4) {
            ctx->pc = 0x1A71C0u;
            return;
        }
    }
    ctx->pc = 0x1A71ACu;
    // 0x1a71ac: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A71ACu;
    SET_GPR_U32(ctx, 31, 0x1A71B4u);
    ctx->pc = 0x1A71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71ACu;
    // 0x1a71b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A71ACu, 0x1A71B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71B4u;
label_1a71b4:
    // 0x1a71b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71B4u;
    {
        const bool branch_taken_0x1a71b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71B4u;
        // 0x1a71b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71b4) {
            ctx->pc = 0x1A71C4u;
            return;
        }
    }
    ctx->pc = 0x1A71BCu;
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
    ctx->pc = 0x1a71c0u;
}
