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

// Function: ApItemGetTankAddress__Fi
// Address: 0x119500 - 0x11953c
void ApItemGetTankAddress__Fi_0x119500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemGetTankAddress__Fi_0x119500");
#endif

    switch (ctx->pc) {
        case 0x119520u: goto label_119520;
        default: break;
    }

    ctx->pc = 0x119500u;

    // 0x119500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11950c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11950cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119510: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119514: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x119514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x119518: 0xc041882  jal         func_106208
    ctx->pc = 0x119518u;
    SET_GPR_U32(ctx, 31, 0x119520u);
    ctx->pc = 0x11951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119518u;
    // 0x11951c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x119518u, 0x119520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119520u;
label_119520:
    // 0x119520: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x119520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119524: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x119524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119528: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x119528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11952c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x119530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119534: 0x8041882  j           func_106208
    ctx->pc = 0x119534u;
    ctx->pc = 0x119538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119534u;
    // 0x119538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    ApSCDEntInqMessageLibTocParam32__Fii_0x106208(rdram, ctx, runtime); return;
    ctx->pc = 0x11953Cu;
}
