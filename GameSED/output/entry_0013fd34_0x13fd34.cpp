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

// Function: entry_0013fd34
// Address: 0x13fd34 - 0x13fd70
void entry_0013fd34_0x13fd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fd34_0x13fd34");
#endif

    switch (ctx->pc) {
        case 0x13fd48u: goto label_13fd48;
        default: break;
    }

    ctx->pc = 0x13fd34u;

    // 0x13fd34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fd38: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fd3c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fd40: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FD40u;
    SET_GPR_U32(ctx, 31, 0x13FD48u);
    ctx->pc = 0x13FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD40u;
    // 0x13fd44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FD40u, 0x13FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD48u;
label_13fd48:
    // 0x13fd48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd4c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FD4Cu;
    {
        const bool branch_taken_0x13fd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD4Cu;
        // 0x13fd50: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd4c) {
            ctx->pc = 0x13FD70u;
            return;
        }
    }
    ctx->pc = 0x13FD54u;
    // 0x13fd54: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fd58: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fd5c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FD5Cu;
    {
        const bool branch_taken_0x13fd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fd5c) {
            ctx->pc = 0x13FD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD5Cu;
            // 0x13fd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD74u;
            return;
        }
    }
    ctx->pc = 0x13FD64u;
    // 0x13fd64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FD64u;
    {
        const bool branch_taken_0x13fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD64u;
        // 0x13fd68: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd64) {
            ctx->pc = 0x13FD74u;
            return;
        }
    }
    ctx->pc = 0x13FD6Cu;
    // 0x13fd6c: 0x0  nop
    ctx->pc = 0x13fd6cu;
    // NOP
    ctx->pc = 0x13fd70u;
}
