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

// Function: entry_0012e120
// Address: 0x12e120 - 0x12e164
void entry_0012e120_0x12e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e120_0x12e120");
#endif

    switch (ctx->pc) {
        case 0x12e130u: goto label_12e130;
        case 0x12e140u: goto label_12e140;
        case 0x12e150u: goto label_12e150;
        default: break;
    }

    ctx->pc = 0x12e120u;

    // 0x12e120: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x12E120u;
    {
        const bool branch_taken_0x12e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E120u;
        // 0x12e124: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e120) {
            ctx->pc = 0x12E1C0u;
            return;
        }
    }
    ctx->pc = 0x12E128u;
    // 0x12e128: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E128u;
    SET_GPR_U32(ctx, 31, 0x12E130u);
    ctx->pc = 0x12E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E128u;
    // 0x12e12c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E128u, 0x12E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E130u;
label_12e130:
    // 0x12e130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e134: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12e138: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E138u;
    SET_GPR_U32(ctx, 31, 0x12E140u);
    ctx->pc = 0x12E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E138u;
    // 0x12e13c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E138u, 0x12E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E140u;
label_12e140:
    // 0x12e140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e144: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12e144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x12e148: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E148u;
    SET_GPR_U32(ctx, 31, 0x12E150u);
    ctx->pc = 0x12E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E148u;
    // 0x12e14c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E148u, 0x12E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E150u;
label_12e150:
    // 0x12e150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E154u;
    {
        const bool branch_taken_0x12e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E154u;
        // 0x12e158: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e154) {
            ctx->pc = 0x12E164u;
            return;
        }
    }
    ctx->pc = 0x12E15Cu;
    // 0x12e15c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12e160: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x12e160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x12e164u;
}
