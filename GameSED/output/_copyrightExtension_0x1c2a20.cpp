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

// Function: _copyrightExtension
// Address: 0x1c2a20 - 0x1c2ab0
void _copyrightExtension_0x1c2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyrightExtension_0x1c2a20");
#endif

    switch (ctx->pc) {
        case 0x1c2a38u: goto label_1c2a38;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a50u: goto label_1c2a50;
        case 0x1c2a5cu: goto label_1c2a5c;
        case 0x1c2a68u: goto label_1c2a68;
        case 0x1c2a74u: goto label_1c2a74;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a8cu: goto label_1c2a8c;
        case 0x1c2a98u: goto label_1c2a98;
        default: break;
    }

    ctx->pc = 0x1c2a20u;

    // 0x1c2a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2a30: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A30u;
    SET_GPR_U32(ctx, 31, 0x1C2A38u);
    ctx->pc = 0x1C2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A30u;
    // 0x1c2a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A30u, 0x1C2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A38u;
label_1c2a38:
    // 0x1c2a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a3c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A44u);
    ctx->pc = 0x1C2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A3Cu;
    // 0x1c2a40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A3Cu, 0x1C2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A44u;
label_1c2a44:
    // 0x1c2a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a48: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A48u;
    SET_GPR_U32(ctx, 31, 0x1C2A50u);
    ctx->pc = 0x1C2A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A48u;
    // 0x1c2a4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A48u, 0x1C2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A50u;
label_1c2a50:
    // 0x1c2a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a54: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A54u;
    SET_GPR_U32(ctx, 31, 0x1C2A5Cu);
    ctx->pc = 0x1C2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A54u;
    // 0x1c2a58: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A54u, 0x1C2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A5Cu;
label_1c2a5c:
    // 0x1c2a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a60: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A60u;
    SET_GPR_U32(ctx, 31, 0x1C2A68u);
    ctx->pc = 0x1C2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A60u;
    // 0x1c2a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A60u, 0x1C2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A68u;
label_1c2a68:
    // 0x1c2a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a6c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A74u);
    ctx->pc = 0x1C2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A6Cu;
    // 0x1c2a70: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A6Cu, 0x1C2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A74u;
label_1c2a74:
    // 0x1c2a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a78: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A78u;
    SET_GPR_U32(ctx, 31, 0x1C2A80u);
    ctx->pc = 0x1C2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A78u;
    // 0x1c2a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A78u, 0x1C2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A80u;
label_1c2a80:
    // 0x1c2a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a84: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A84u;
    SET_GPR_U32(ctx, 31, 0x1C2A8Cu);
    ctx->pc = 0x1C2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A84u;
    // 0x1c2a88: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A84u, 0x1C2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A8Cu;
label_1c2a8c:
    // 0x1c2a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a90: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2A90u;
    SET_GPR_U32(ctx, 31, 0x1C2A98u);
    ctx->pc = 0x1C2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A90u;
    // 0x1c2a94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2A90u, 0x1C2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A98u;
label_1c2a98:
    // 0x1c2a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2aa4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c2aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c2aa8: 0x80707f6  j           func_1C1FD8
    ctx->pc = 0x1C2AA8u;
    ctx->pc = 0x1C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA8u;
    // 0x1c2aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    _nextBit_0x1c1fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2AB0u;
}
