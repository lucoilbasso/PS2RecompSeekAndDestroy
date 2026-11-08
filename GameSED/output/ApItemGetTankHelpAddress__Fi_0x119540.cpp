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

// Function: ApItemGetTankHelpAddress__Fi
// Address: 0x119540 - 0x11957c
void ApItemGetTankHelpAddress__Fi_0x119540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemGetTankHelpAddress__Fi_0x119540");
#endif

    switch (ctx->pc) {
        case 0x119560u: goto label_119560;
        default: break;
    }

    ctx->pc = 0x119540u;

    // 0x119540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11954c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11954cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119550: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x119550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x119554: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x119554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x119558: 0xc041882  jal         func_106208
    ctx->pc = 0x119558u;
    SET_GPR_U32(ctx, 31, 0x119560u);
    ctx->pc = 0x11955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119558u;
    // 0x11955c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119558u, 0x119560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119560u;
label_119560:
    // 0x119560: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x119560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x119564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119568: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11956c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x119570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119574: 0x8041882  j           func_106208
    ctx->pc = 0x119574u;
    ctx->pc = 0x119578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119574u;
    // 0x119578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    ApSCDEntInqMessageLibTocParam32__Fii_0x106208(rdram, ctx, runtime); return;
    ctx->pc = 0x11957Cu;
}
