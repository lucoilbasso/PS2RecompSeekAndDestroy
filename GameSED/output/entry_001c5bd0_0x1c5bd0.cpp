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

// Function: entry_001c5bd0
// Address: 0x1c5bd0 - 0x1c5c0c
void entry_001c5bd0_0x1c5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5bd0_0x1c5bd0");
#endif

    switch (ctx->pc) {
        case 0x1c5bf8u: goto label_1c5bf8;
        default: break;
    }

    ctx->pc = 0x1c5bd0u;

    // 0x1c5bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bd4: 0x2450eef0  addiu       $s0, $v0, -0x1110
    ctx->pc = 0x1c5bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962928));
    // 0x1c5bd8: 0xac56eef0  sw          $s6, -0x1110($v0)
    ctx->pc = 0x1c5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962928), GPR_U32(ctx, 22));
    // 0x1c5bdc: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1c5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1c5be0: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1c5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c5be4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1c5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1c5be8: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1c5be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1c5bec: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1c5becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1c5bf0: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C5BF0u;
    SET_GPR_U32(ctx, 31, 0x1C5BF8u);
    ctx->pc = 0x1C5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BF0u;
    // 0x1c5bf4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C5BF0u, 0x1C5BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BF8u;
label_1c5bf8:
    // 0x1c5bf8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5BF8u;
    {
        const bool branch_taken_0x1c5bf8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF8u;
        // 0x1c5bfc: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bf8) {
            ctx->pc = 0x1C5C0Cu;
            return;
        }
    }
    ctx->pc = 0x1C5C00u;
    // 0x1c5c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c04: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1C5C04u;
    SET_GPR_U32(ctx, 31, 0x1C5C0Cu);
    ctx->pc = 0x1C5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C04u;
    // 0x1c5c08: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1C5C04u, 0x1C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C0Cu;
}
