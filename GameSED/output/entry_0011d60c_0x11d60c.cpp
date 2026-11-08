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

// Function: entry_0011d60c
// Address: 0x11d60c - 0x11d640
void entry_0011d60c_0x11d60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d60c_0x11d60c");
#endif

    switch (ctx->pc) {
        case 0x11d61cu: goto label_11d61c;
        case 0x11d624u: goto label_11d624;
        default: break;
    }

    ctx->pc = 0x11d60cu;

    // 0x11d60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d614: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11D614u;
    SET_GPR_U32(ctx, 31, 0x11D61Cu);
    ctx->pc = 0x11D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D614u;
    // 0x11d618: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11D614u, 0x11D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D61Cu;
label_11d61c:
    // 0x11d61c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11D61Cu;
    SET_GPR_U32(ctx, 31, 0x11D624u);
    ctx->pc = 0x11D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D61Cu;
    // 0x11d620: 0x3404c070  ori         $a0, $zero, 0xC070 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49264);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11D61Cu, 0x11D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D624u;
label_11d624:
    // 0x11d624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d628: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11d62c: 0x2442e940  addiu       $v0, $v0, -0x16C0
    ctx->pc = 0x11d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
    // 0x11d630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d634: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11d634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11d638: 0xc04759a  jal         func_11D668
    ctx->pc = 0x11D638u;
    SET_GPR_U32(ctx, 31, 0x11D640u);
    ctx->pc = 0x11D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D638u;
    // 0x11d63c: 0xaf919128  sw          $s1, -0x6ED8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D668u, 0x11D638u, 0x11D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D640u;
}
