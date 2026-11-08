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

// Function: entry_001065f0
// Address: 0x1065f0 - 0x106618
void entry_001065f0_0x1065f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001065f0_0x1065f0");
#endif

    switch (ctx->pc) {
        case 0x106604u: goto label_106604;
        default: break;
    }

    ctx->pc = 0x1065f0u;

    // 0x1065f0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1065f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1065f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065f8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1065f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1065fc: 0xc060e24  jal         func_183890
    ctx->pc = 0x1065FCu;
    SET_GPR_U32(ctx, 31, 0x106604u);
    ctx->pc = 0x106600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065FCu;
    // 0x106600: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x1065FCu, 0x106604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106604u;
label_106604:
    // 0x106604: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x106608: 0x24639778  addiu       $v1, $v1, -0x6888
    ctx->pc = 0x106608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940536));
    // 0x10660c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106610: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x106610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106618u;
}
