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

// Function: entry_001702ec
// Address: 0x1702ec - 0x170338
void entry_001702ec_0x1702ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001702ec_0x1702ec");
#endif

    switch (ctx->pc) {
        case 0x1702f4u: goto label_1702f4;
        case 0x170300u: goto label_170300;
        case 0x170324u: goto label_170324;
        default: break;
    }

    ctx->pc = 0x1702ecu;

    // 0x1702ec: 0xc05c120  jal         func_170480
    ctx->pc = 0x1702ECu;
    SET_GPR_U32(ctx, 31, 0x1702F4u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1702ECu, 0x1702F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702F4u;
label_1702f4:
    // 0x1702f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702f8: 0xc05c35c  jal         func_170D70
    ctx->pc = 0x1702F8u;
    SET_GPR_U32(ctx, 31, 0x170300u);
    ctx->pc = 0x1702FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702F8u;
    // 0x1702fc: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170D70u, 0x1702F8u, 0x170300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170300u;
label_170300:
    // 0x170300: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170300u;
    {
        const bool branch_taken_0x170300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x170304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170300u;
        // 0x170304: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170300) {
            ctx->pc = 0x170338u;
            return;
        }
    }
    ctx->pc = 0x170308u;
    // 0x170308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x170308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17030c: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x17030cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x170310: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x170314: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x170314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x170318: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17031c: 0xc06f26a  jal         func_1BC9A8
    ctx->pc = 0x17031Cu;
    SET_GPR_U32(ctx, 31, 0x170324u);
    ctx->pc = 0x170320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17031Cu;
    // 0x170320: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC9A8u, 0x17031Cu, 0x170324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170324u;
label_170324:
    // 0x170324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17032c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170330: 0xc05c376  jal         func_170DD8
    ctx->pc = 0x170330u;
    SET_GPR_U32(ctx, 31, 0x170338u);
    ctx->pc = 0x170334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170330u;
    // 0x170334: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170DD8u, 0x170330u, 0x170338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170338u;
}
