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

// Function: entry_0016fc70
// Address: 0x16fc70 - 0x16fcc8
void entry_0016fc70_0x16fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fc70_0x16fc70");
#endif

    switch (ctx->pc) {
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fcb8u: goto label_16fcb8;
        default: break;
    }

    ctx->pc = 0x16fc70u;

    // 0x16fc70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fc74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16fc78: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x16FC78u;
    SET_GPR_U32(ctx, 31, 0x16FC80u);
    ctx->pc = 0x16FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC78u;
    // 0x16fc7c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x16FC78u, 0x16FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC80u;
label_16fc80:
    // 0x16fc80: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16fc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc8c: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x16FC8Cu;
    SET_GPR_U32(ctx, 31, 0x16FC94u);
    ctx->pc = 0x16FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC8Cu;
    // 0x16fc90: 0x2610d3e8  addiu       $s0, $s0, -0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x16FC8Cu, 0x16FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC94u;
label_16fc94:
    // 0x16fc94: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16fc98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16fc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc9c: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16FC9Cu;
    SET_GPR_U32(ctx, 31, 0x16FCA4u);
    ctx->pc = 0x16FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC9Cu;
    // 0x16fca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16FC9Cu, 0x16FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCA4u;
label_16fca4:
    // 0x16fca4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x16fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x16fca8: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16fcac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcb0: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16FCB0u;
    SET_GPR_U32(ctx, 31, 0x16FCB8u);
    ctx->pc = 0x16FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCB0u;
    // 0x16fcb4: 0x24c67600  addiu       $a2, $a2, 0x7600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16FCB0u, 0x16FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCB8u;
label_16fcb8:
    // 0x16fcb8: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    // 0x16fcbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcc0: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x16FCC0u;
    SET_GPR_U32(ctx, 31, 0x16FCC8u);
    ctx->pc = 0x16FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCC0u;
    // 0x16fcc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x16FCC0u, 0x16FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCC8u;
}
