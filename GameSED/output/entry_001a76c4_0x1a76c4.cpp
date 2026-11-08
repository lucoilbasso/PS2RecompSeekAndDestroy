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

// Function: entry_001a76c4
// Address: 0x1a76c4 - 0x1a76fc
void entry_001a76c4_0x1a76c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a76c4_0x1a76c4");
#endif

    switch (ctx->pc) {
        case 0x1a76f4u: goto label_1a76f4;
        default: break;
    }

    ctx->pc = 0x1a76c4u;

    // 0x1a76c4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a76c8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a76cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a76d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a76d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a76d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a76d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a76e0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a76e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a76e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76E4u;
    {
        const bool branch_taken_0x1a76e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76E4u;
        // 0x1a76e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76e4) {
            ctx->pc = 0x1A76FCu;
            return;
        }
    }
    ctx->pc = 0x1A76ECu;
    // 0x1a76ec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A76ECu;
    SET_GPR_U32(ctx, 31, 0x1A76F4u);
    ctx->pc = 0x1A76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76ECu;
    // 0x1a76f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A76ECu, 0x1A76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76F4u;
label_1a76f4:
    // 0x1a76f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76f8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a76fcu;
}
