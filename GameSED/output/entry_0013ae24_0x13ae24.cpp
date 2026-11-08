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

// Function: entry_0013ae24
// Address: 0x13ae24 - 0x13ae74
void entry_0013ae24_0x13ae24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae24_0x13ae24");
#endif

    switch (ctx->pc) {
        case 0x13ae3cu: goto label_13ae3c;
        case 0x13ae44u: goto label_13ae44;
        case 0x13ae68u: goto label_13ae68;
        default: break;
    }

    ctx->pc = 0x13ae24u;

    // 0x13ae24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ae28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13ae28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13ae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13ae30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13ae34: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13AE34u;
    SET_GPR_U32(ctx, 31, 0x13AE3Cu);
    ctx->pc = 0x13AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE34u;
    // 0x13ae38: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13AE34u, 0x13AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE3Cu;
label_13ae3c:
    // 0x13ae3c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13AE3Cu;
    SET_GPR_U32(ctx, 31, 0x13AE44u);
    ctx->pc = 0x13AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE3Cu;
    // 0x13ae40: 0x240440b0  addiu       $a0, $zero, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13AE3Cu, 0x13AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE44u;
label_13ae44:
    // 0x13ae44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ae44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13ae50: 0x2442ec50  addiu       $v0, $v0, -0x13B0
    ctx->pc = 0x13ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x13ae54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13ae54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae58: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13ae5c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13ae5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae60: 0xc04eba6  jal         func_13AE98
    ctx->pc = 0x13AE60u;
    SET_GPR_U32(ctx, 31, 0x13AE68u);
    ctx->pc = 0x13AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE60u;
    // 0x13ae64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE98u, 0x13AE60u, 0x13AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE68u;
label_13ae68:
    // 0x13ae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ae6c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13AE6Cu;
    SET_GPR_U32(ctx, 31, 0x13AE74u);
    ctx->pc = 0x13AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AE6Cu;
    // 0x13ae70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13AE6Cu, 0x13AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AE74u;
}
