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

// Function: entry_0010feb4
// Address: 0x10feb4 - 0x10fee8
void entry_0010feb4_0x10feb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010feb4_0x10feb4");
#endif

    switch (ctx->pc) {
        case 0x10fec4u: goto label_10fec4;
        case 0x10feccu: goto label_10fecc;
        default: break;
    }

    ctx->pc = 0x10feb4u;

    // 0x10feb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10feb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10febc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10FEBCu;
    SET_GPR_U32(ctx, 31, 0x10FEC4u);
    ctx->pc = 0x10FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEBCu;
    // 0x10fec0: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10FEBCu, 0x10FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEC4u;
label_10fec4:
    // 0x10fec4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10FEC4u;
    SET_GPR_U32(ctx, 31, 0x10FECCu);
    ctx->pc = 0x10FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEC4u;
    // 0x10fec8: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10FEC4u, 0x10FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FECCu;
label_10fecc:
    // 0x10fecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10fed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fed4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10fed8: 0x2442e6e0  addiu       $v0, $v0, -0x1920
    ctx->pc = 0x10fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x10fedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fee0: 0xc043fc4  jal         func_10FF10
    ctx->pc = 0x10FEE0u;
    SET_GPR_U32(ctx, 31, 0x10FEE8u);
    ctx->pc = 0x10FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEE0u;
    // 0x10fee4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF10u, 0x10FEE0u, 0x10FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEE8u;
}
