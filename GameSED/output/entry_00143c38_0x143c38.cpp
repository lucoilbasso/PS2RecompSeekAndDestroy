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

// Function: entry_00143c38
// Address: 0x143c38 - 0x143c90
void entry_00143c38_0x143c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c38_0x143c38");
#endif

    switch (ctx->pc) {
        case 0x143c50u: goto label_143c50;
        case 0x143c58u: goto label_143c58;
        case 0x143c84u: goto label_143c84;
        default: break;
    }

    ctx->pc = 0x143c38u;

    // 0x143c38: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143c3c: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x143C3Cu;
    {
        const bool branch_taken_0x143c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c3c) {
            ctx->pc = 0x143C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143C3Cu;
            // 0x143c40: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143D04u;
            return;
        }
    }
    ctx->pc = 0x143C44u;
    // 0x143c44: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143c48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143C48u;
    SET_GPR_U32(ctx, 31, 0x143C50u);
    ctx->pc = 0x143C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C48u;
    // 0x143c4c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143C48u, 0x143C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C50u;
label_143c50:
    // 0x143c50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143C50u;
    SET_GPR_U32(ctx, 31, 0x143C58u);
    ctx->pc = 0x143C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C50u;
    // 0x143c54: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143C50u, 0x143C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C58u;
label_143c58:
    // 0x143c58: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x143c5c: 0x24646a20  addiu       $a0, $v1, 0x6A20
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27168));
    // 0x143c60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x143c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c68: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x143c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143c70: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x143c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c74: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x143C74u;
    {
        const bool branch_taken_0x143c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x143C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C74u;
        // 0x143c78: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c74) {
            ctx->pc = 0x143C90u;
            return;
        }
    }
    ctx->pc = 0x143C7Cu;
    // 0x143c7c: 0xc050d78  jal         func_1435E0
    ctx->pc = 0x143C7Cu;
    SET_GPR_U32(ctx, 31, 0x143C84u);
    ctx->pc = 0x143C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C7Cu;
    // 0x143c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1435E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435E0u, 0x143C7Cu, 0x143C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C84u;
label_143c84:
    // 0x143c84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x143C84u;
    {
        const bool branch_taken_0x143c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c84) {
            ctx->pc = 0x143CACu;
            return;
        }
    }
    ctx->pc = 0x143C8Cu;
    // 0x143c8c: 0x0  nop
    ctx->pc = 0x143c8cu;
    // NOP
    ctx->pc = 0x143c90u;
}
