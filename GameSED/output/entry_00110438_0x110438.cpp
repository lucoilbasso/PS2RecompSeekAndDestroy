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

// Function: entry_00110438
// Address: 0x110438 - 0x1104a8
void entry_00110438_0x110438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110438_0x110438");
#endif

    switch (ctx->pc) {
        case 0x110458u: goto label_110458;
        case 0x11046cu: goto label_11046c;
        case 0x11048cu: goto label_11048c;
        case 0x1104a4u: goto label_1104a4;
        default: break;
    }

    ctx->pc = 0x110438u;

    // 0x110438: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x110438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11043c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110444: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x110448: 0x8c510044  lw          $s1, 0x44($v0)
    ctx->pc = 0x110448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11044c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110450: 0xc04110c  jal         func_104430
    ctx->pc = 0x110450u;
    SET_GPR_U32(ctx, 31, 0x110458u);
    ctx->pc = 0x110454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110450u;
    // 0x110454: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110450u, 0x110458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110458u;
label_110458:
    // 0x110458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11045c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110460: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110464: 0xc04110c  jal         func_104430
    ctx->pc = 0x110464u;
    SET_GPR_U32(ctx, 31, 0x11046Cu);
    ctx->pc = 0x110468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110464u;
    // 0x110468: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110464u, 0x11046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11046Cu;
label_11046c:
    // 0x11046c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11046cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110470: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x110470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x110474: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x110474u;
    {
        const bool branch_taken_0x110474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110474) {
            ctx->pc = 0x110478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110474u;
            // 0x110478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1104B8u;
            return;
        }
    }
    ctx->pc = 0x11047Cu;
    // 0x11047c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11047Cu;
    {
        const bool branch_taken_0x11047c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11047c) {
            ctx->pc = 0x110480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11047Cu;
            // 0x110480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1104A8u;
            return;
        }
    }
    ctx->pc = 0x110484u;
    // 0x110484: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x110484u;
    SET_GPR_U32(ctx, 31, 0x11048Cu);
    ctx->pc = 0x110488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110484u;
    // 0x110488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x110484u, 0x11048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11048Cu;
label_11048c:
    // 0x11048c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11048cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110494: 0x24a53cf0  addiu       $a1, $a1, 0x3CF0
    ctx->pc = 0x110494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15600));
    // 0x110498: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x11049c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x11049Cu;
    SET_GPR_U32(ctx, 31, 0x1104A4u);
    ctx->pc = 0x1104A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11049Cu;
    // 0x1104a0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x11049Cu, 0x1104A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104A4u;
label_1104a4:
    // 0x1104a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1104a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1104a8u;
}
