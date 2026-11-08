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

// Function: entry_001b3054
// Address: 0x1b3054 - 0x1b30ac
void entry_001b3054_0x1b3054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3054_0x1b3054");
#endif

    switch (ctx->pc) {
        case 0x1b305cu: goto label_1b305c;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a4u: goto label_1b30a4;
        default: break;
    }

    ctx->pc = 0x1b3054u;

    // 0x1b3054: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B3054u;
    SET_GPR_U32(ctx, 31, 0x1B305Cu);
    ctx->pc = 0x1B3058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3054u;
    // 0x1b3058: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B3054u, 0x1B305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B305Cu;
label_1b305c:
    // 0x1b305c: 0x27d0a6c0  addiu       $s0, $fp, -0x5940
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944448));
    // 0x1b3060: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b3060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b3064: 0x26879a80  addiu       $a3, $s4, -0x6580
    ctx->pc = 0x1b3064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941312));
    // 0x1b3068: 0x2444b180  addiu       $a0, $v0, -0x4E80
    ctx->pc = 0x1b3068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x1b306c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b306cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3070: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3078: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b307c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b307cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3080: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3084: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3084u;
    SET_GPR_U32(ctx, 31, 0x1B308Cu);
    ctx->pc = 0x1B3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3084u;
    // 0x1b3088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3084u, 0x1B308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B308Cu;
label_1b308c:
    // 0x1b308c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B308Cu;
    {
        const bool branch_taken_0x1b308c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B308Cu;
        // 0x1b3090: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b308c) {
            ctx->pc = 0x1B30ACu;
            return;
        }
    }
    ctx->pc = 0x1B3094u;
    // 0x1b3094: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3094u;
    SET_GPR_U32(ctx, 31, 0x1B309Cu);
    ctx->pc = 0x1B3098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3094u;
    // 0x1b3098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3094u, 0x1B309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B309Cu;
label_1b309c:
    // 0x1b309c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B309Cu;
    SET_GPR_U32(ctx, 31, 0x1B30A4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B309Cu, 0x1B30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30A4u;
label_1b30a4:
    // 0x1b30a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B30A4u;
    {
        const bool branch_taken_0x1b30a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30A4u;
        // 0x1b30a8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30a4) {
            ctx->pc = 0x1B30F8u;
            return;
        }
    }
    ctx->pc = 0x1B30ACu;
}
