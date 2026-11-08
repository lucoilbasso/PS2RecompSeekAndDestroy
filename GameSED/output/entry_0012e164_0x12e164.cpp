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

// Function: entry_0012e164
// Address: 0x12e164 - 0x12e1b0
void entry_0012e164_0x12e164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e164_0x12e164");
#endif

    switch (ctx->pc) {
        case 0x12e16cu: goto label_12e16c;
        case 0x12e17cu: goto label_12e17c;
        case 0x12e18cu: goto label_12e18c;
        case 0x12e19cu: goto label_12e19c;
        case 0x12e1acu: goto label_12e1ac;
        default: break;
    }

    ctx->pc = 0x12e164u;

    // 0x12e164: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E164u;
    SET_GPR_U32(ctx, 31, 0x12E16Cu);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E164u, 0x12E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E16Cu;
label_12e16c:
    // 0x12e16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e170: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12e170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12e174: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E174u;
    SET_GPR_U32(ctx, 31, 0x12E17Cu);
    ctx->pc = 0x12E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E174u;
    // 0x12e178: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E174u, 0x12E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E17Cu;
label_12e17c:
    // 0x12e17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12e180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12e184: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E184u;
    SET_GPR_U32(ctx, 31, 0x12E18Cu);
    ctx->pc = 0x12E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E184u;
    // 0x12e188: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E184u, 0x12E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E18Cu;
label_12e18c:
    // 0x12e18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e190: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12e190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12e194: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E194u;
    SET_GPR_U32(ctx, 31, 0x12E19Cu);
    ctx->pc = 0x12E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E194u;
    // 0x12e198: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E194u, 0x12E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E19Cu;
label_12e19c:
    // 0x12e19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12e1a4: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E1A4u;
    SET_GPR_U32(ctx, 31, 0x12E1ACu);
    ctx->pc = 0x12E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1A4u;
    // 0x12e1a8: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E1A4u, 0x12E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1ACu;
label_12e1ac:
    // 0x12e1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12e1b0u;
}
