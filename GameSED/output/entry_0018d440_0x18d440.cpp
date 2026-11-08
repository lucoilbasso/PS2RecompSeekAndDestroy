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

// Function: entry_0018d440
// Address: 0x18d440 - 0x18d46c
void entry_0018d440_0x18d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d440_0x18d440");
#endif

    switch (ctx->pc) {
        case 0x18d468u: goto label_18d468;
        default: break;
    }

    ctx->pc = 0x18d440u;

    // 0x18d440: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x18d444: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18d448: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x18d44c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18d450: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D450u;
    {
        const bool branch_taken_0x18d450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d450) {
            ctx->pc = 0x18D454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D450u;
            // 0x18d454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D46Cu;
            return;
        }
    }
    ctx->pc = 0x18D458u;
    // 0x18d458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d45c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d460: 0xc063b70  jal         func_18EDC0
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D460u;
    // 0x18d464: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D460u, 0x18D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18d46cu;
}
