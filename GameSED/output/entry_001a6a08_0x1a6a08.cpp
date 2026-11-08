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

// Function: entry_001a6a08
// Address: 0x1a6a08 - 0x1a6a4c
void entry_001a6a08_0x1a6a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6a08_0x1a6a08");
#endif

    switch (ctx->pc) {
        case 0x1a6a48u: goto label_1a6a48;
        default: break;
    }

    ctx->pc = 0x1a6a08u;

    // 0x1a6a08: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6a0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a14: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6A14u;
    {
        const bool branch_taken_0x1a6a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a14) {
            ctx->pc = 0x1A6A4Cu;
            return;
        }
    }
    ctx->pc = 0x1A6A1Cu;
    // 0x1a6a1c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6a20: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6a24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6a28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6a2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6a30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6a34: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6a34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6a38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A38u;
    {
        const bool branch_taken_0x1a6a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A38u;
        // 0x1a6a3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a38) {
            ctx->pc = 0x1A6A4Cu;
            return;
        }
    }
    ctx->pc = 0x1A6A40u;
    // 0x1a6a40: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6A40u;
    SET_GPR_U32(ctx, 31, 0x1A6A48u);
    ctx->pc = 0x1A6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A40u;
    // 0x1a6a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6A40u, 0x1A6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A48u;
label_1a6a48:
    // 0x1a6a48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6a4cu;
}
