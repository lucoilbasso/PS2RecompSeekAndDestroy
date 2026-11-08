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

// Function: entry_00179500
// Address: 0x179500 - 0x179560
void entry_00179500_0x179500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179500_0x179500");
#endif

    switch (ctx->pc) {
        case 0x179534u: goto label_179534;
        case 0x17955cu: goto label_17955c;
        default: break;
    }

    ctx->pc = 0x179500u;

    // 0x179500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179504: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x179504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179508: 0xae024040  sw          $v0, 0x4040($s0)
    ctx->pc = 0x179508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16448), GPR_U32(ctx, 2));
    // 0x17950c: 0x26044580  addiu       $a0, $s0, 0x4580
    ctx->pc = 0x17950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
    // 0x179510: 0xae004044  sw          $zero, 0x4044($s0)
    ctx->pc = 0x179510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16452), GPR_U32(ctx, 0));
    // 0x179514: 0xae004048  sw          $zero, 0x4048($s0)
    ctx->pc = 0x179514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16456), GPR_U32(ctx, 0));
    // 0x179518: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17951c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179520: 0xae024050  sw          $v0, 0x4050($s0)
    ctx->pc = 0x179520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16464), GPR_U32(ctx, 2));
    // 0x179524: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x179524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179528: 0xae00404c  sw          $zero, 0x404C($s0)
    ctx->pc = 0x179528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16460), GPR_U32(ctx, 0));
    // 0x17952c: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x17952Cu;
    SET_GPR_U32(ctx, 31, 0x179534u);
    ctx->pc = 0x179530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17952Cu;
    // 0x179530: 0xae064054  sw          $a2, 0x4054($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16468), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x17952Cu, 0x179534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179534u;
label_179534:
    // 0x179534: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x179534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x179538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17953c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179540: 0x24c68de8  addiu       $a2, $a2, -0x7218
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938088));
    // 0x179544: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x179544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x179548: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x179548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17954c: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x17954cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x179550: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x179550u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179554: 0xc068620  jal         func_1A1880
    ctx->pc = 0x179554u;
    SET_GPR_U32(ctx, 31, 0x17955Cu);
    ctx->pc = 0x179558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179554u;
    // 0x179558: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x179554u, 0x17955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17955Cu;
label_17955c:
    // 0x17955c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x179560u;
}
