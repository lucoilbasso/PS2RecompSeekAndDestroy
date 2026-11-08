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

// Function: entry_00194d80
// Address: 0x194d80 - 0x194df0
void entry_00194d80_0x194d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d80_0x194d80");
#endif

    switch (ctx->pc) {
        case 0x194db0u: goto label_194db0;
        case 0x194de0u: goto label_194de0;
        case 0x194de8u: goto label_194de8;
        default: break;
    }

    ctx->pc = 0x194d80u;

label_194d80:
    // 0x194d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194d84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x194d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194d88: 0x0  nop
    ctx->pc = 0x194d88u;
    // NOP
    // 0x194d8c: 0x0  nop
    ctx->pc = 0x194d8cu;
    // NOP
    // 0x194d90: 0x0  nop
    ctx->pc = 0x194d90u;
    // NOP
    // 0x194d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x194D94u;
    {
        const bool branch_taken_0x194d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d94) {
            ctx->pc = 0x194D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194d80;
        }
    }
    ctx->pc = 0x194D9Cu;
    // 0x194d9c: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x194d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x194da0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x194DA0u;
    {
        const bool branch_taken_0x194da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194da0) {
            ctx->pc = 0x194DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194DA0u;
            // 0x194da4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194DF0u;
            return;
        }
    }
    ctx->pc = 0x194DA8u;
    // 0x194da8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x194DA8u;
    SET_GPR_U32(ctx, 31, 0x194DB0u);
    ctx->pc = 0x194DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DA8u;
    // 0x194dac: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x194DA8u, 0x194DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DB0u;
label_194db0:
    // 0x194db0: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x194db4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x194db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194db8: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x194dbc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x194dc0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x194dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x194dc4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x194dc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x194dc8: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x194dcc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x194dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x194dd0: 0xaea50080  sw          $a1, 0x80($s5)
    ctx->pc = 0x194dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 5));
    // 0x194dd4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x194dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194dd8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194DD8u;
    SET_GPR_U32(ctx, 31, 0x194DE0u);
    ctx->pc = 0x194DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DD8u;
    // 0x194ddc: 0xaea5008c  sw          $a1, 0x8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194DD8u, 0x194DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DE0u;
label_194de0:
    // 0x194de0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194DE0u;
    SET_GPR_U32(ctx, 31, 0x194DE8u);
    ctx->pc = 0x194DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DE0u;
    // 0x194de4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194DE0u, 0x194DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DE8u;
label_194de8:
    // 0x194de8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194DE8u;
    {
        const bool branch_taken_0x194de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE8u;
        // 0x194dec: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de8) {
            ctx->pc = 0x194E14u;
            return;
        }
    }
    ctx->pc = 0x194DF0u;
}
