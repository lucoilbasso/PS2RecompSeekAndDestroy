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

// Function: entry_0011ac20
// Address: 0x11ac20 - 0x11ac68
void entry_0011ac20_0x11ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac20_0x11ac20");
#endif

    switch (ctx->pc) {
        case 0x11ac34u: goto label_11ac34;
        case 0x11ac3cu: goto label_11ac3c;
        case 0x11ac5cu: goto label_11ac5c;
        default: break;
    }

    ctx->pc = 0x11ac20u;

    // 0x11ac20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ac24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ac28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11ac2c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11AC2Cu;
    SET_GPR_U32(ctx, 31, 0x11AC34u);
    ctx->pc = 0x11AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC2Cu;
    // 0x11ac30: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11AC2Cu, 0x11AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC34u;
label_11ac34:
    // 0x11ac34: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11AC34u;
    SET_GPR_U32(ctx, 31, 0x11AC3Cu);
    ctx->pc = 0x11AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC34u;
    // 0x11ac38: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11AC34u, 0x11AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC3Cu;
label_11ac3c:
    // 0x11ac3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ac40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac44: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11ac48: 0x2442e7f8  addiu       $v0, $v0, -0x1808
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961144));
    // 0x11ac4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11ac4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11ac54: 0xc046b22  jal         func_11AC88
    ctx->pc = 0x11AC54u;
    SET_GPR_U32(ctx, 31, 0x11AC5Cu);
    ctx->pc = 0x11AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC54u;
    // 0x11ac58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AC88u, 0x11AC54u, 0x11AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC5Cu;
label_11ac5c:
    // 0x11ac5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac60: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11AC60u;
    SET_GPR_U32(ctx, 31, 0x11AC68u);
    ctx->pc = 0x11AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC60u;
    // 0x11ac64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11AC60u, 0x11AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC68u;
}
