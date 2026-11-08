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

// Function: entry_00107230
// Address: 0x107230 - 0x107264
void entry_00107230_0x107230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107230_0x107230");
#endif

    switch (ctx->pc) {
        case 0x107244u: goto label_107244;
        case 0x10725cu: goto label_10725c;
        default: break;
    }

    ctx->pc = 0x107230u;

    // 0x107230: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x107230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107234: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x107234u;
    {
        const bool branch_taken_0x107234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107234u;
        // 0x107238: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107234) {
            ctx->pc = 0x107264u;
            return;
        }
    }
    ctx->pc = 0x10723Cu;
    // 0x10723c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10723Cu;
    SET_GPR_U32(ctx, 31, 0x107244u);
    ctx->pc = 0x107240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10723Cu;
    // 0x107240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10723Cu, 0x107244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107244u;
label_107244:
    // 0x107244: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x107248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10724c: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x107250: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x107254: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107254u;
    SET_GPR_U32(ctx, 31, 0x10725Cu);
    ctx->pc = 0x107258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107254u;
    // 0x107258: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107254u, 0x10725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10725Cu;
label_10725c:
    // 0x10725c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107260: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x107260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x107264u;
}
