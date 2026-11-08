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

// Function: entry_0016f804
// Address: 0x16f804 - 0x16f880
void entry_0016f804_0x16f804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f804_0x16f804");
#endif

    switch (ctx->pc) {
        case 0x16f80cu: goto label_16f80c;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f840u: goto label_16f840;
        case 0x16f854u: goto label_16f854;
        case 0x16f85cu: goto label_16f85c;
        default: break;
    }

    ctx->pc = 0x16f804u;

    // 0x16f804: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x16F804u;
    SET_GPR_U32(ctx, 31, 0x16F80Cu);
    ctx->pc = 0x16F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F804u;
    // 0x16f808: 0x8f849154  lw          $a0, -0x6EAC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x16F804u, 0x16F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F80Cu;
label_16f80c:
    // 0x16f80c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f814: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x16F814u;
    SET_GPR_U32(ctx, 31, 0x16F81Cu);
    ctx->pc = 0x16F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F814u;
    // 0x16f818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x16F814u, 0x16F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f820: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f824: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F824u;
    SET_GPR_U32(ctx, 31, 0x16F82Cu);
    ctx->pc = 0x16F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F824u;
    // 0x16f828: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F824u, 0x16F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F82Cu;
label_16f82c:
    // 0x16f82c: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f830: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16f834: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x16f834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f838: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F838u;
    SET_GPR_U32(ctx, 31, 0x16F840u);
    ctx->pc = 0x16F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F838u;
    // 0x16f83c: 0x24467600  addiu       $a2, $v0, 0x7600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F838u, 0x16F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F840u;
label_16f840:
    // 0x16f840: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16f840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16f844: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x16f848: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f84c: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16F84Cu;
    SET_GPR_U32(ctx, 31, 0x16F854u);
    ctx->pc = 0x16F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F84Cu;
    // 0x16f850: 0x24463600  addiu       $a2, $v0, 0x3600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16F84Cu, 0x16F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F854u;
label_16f854:
    // 0x16f854: 0xc06b4d2  jal         func_1AD348
    ctx->pc = 0x16F854u;
    SET_GPR_U32(ctx, 31, 0x16F85Cu);
    ctx->pc = 0x16F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F854u;
    // 0x16f858: 0x8f849154  lw          $a0, -0x6EAC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD348u, 0x16F854u, 0x16F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F85Cu;
label_16f85c:
    // 0x16f85c: 0x32a24000  andi        $v0, $s5, 0x4000
    ctx->pc = 0x16f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16384);
    // 0x16f860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F860u;
    {
        const bool branch_taken_0x16f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F860u;
        // 0x16f864: 0x8f828b5c  lw          $v0, -0x74A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f860) {
            ctx->pc = 0x16F880u;
            return;
        }
    }
    ctx->pc = 0x16F868u;
    // 0x16f868: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x16f868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f86c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F86Cu;
    {
        const bool branch_taken_0x16f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F86Cu;
        // 0x16f870: 0x32a21000  andi        $v0, $s5, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f86c) {
            ctx->pc = 0x16F884u;
            return;
        }
    }
    ctx->pc = 0x16F874u;
    // 0x16f874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F874u;
    {
        const bool branch_taken_0x16f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F874u;
        // 0x16f878: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f874) {
            ctx->pc = 0x16F890u;
            return;
        }
    }
    ctx->pc = 0x16F87Cu;
    // 0x16f87c: 0x0  nop
    ctx->pc = 0x16f87cu;
    // NOP
    ctx->pc = 0x16f880u;
}
