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

// Function: entry_001a5d20
// Address: 0x1a5d20 - 0x1a5d88
void entry_001a5d20_0x1a5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5d20_0x1a5d20");
#endif

    switch (ctx->pc) {
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d84u: goto label_1a5d84;
        default: break;
    }

    ctx->pc = 0x1a5d20u;

    // 0x1a5d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D34u;
    SET_GPR_U32(ctx, 31, 0x1A5D3Cu);
    ctx->pc = 0x1A5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D34u;
    // 0x1a5d38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D34u, 0x1A5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D3Cu;
label_1a5d3c:
    // 0x1a5d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d50: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D50u;
    SET_GPR_U32(ctx, 31, 0x1A5D58u);
    ctx->pc = 0x1A5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D50u;
    // 0x1a5d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D50u, 0x1A5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D58u;
label_1a5d58:
    // 0x1a5d58: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a5d5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5d64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5d68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5d70: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a5d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a5d74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5D74u;
    {
        const bool branch_taken_0x1a5d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D74u;
        // 0x1a5d78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d74) {
            ctx->pc = 0x1A5D88u;
            return;
        }
    }
    ctx->pc = 0x1A5D7Cu;
    // 0x1a5d7c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D7Cu;
    // 0x1a5d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5D7Cu, 0x1A5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a5d88u;
}
