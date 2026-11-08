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

// Function: entry_00101500
// Address: 0x101500 - 0x101550
void entry_00101500_0x101500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101500_0x101500");
#endif

    switch (ctx->pc) {
        case 0x10152cu: goto label_10152c;
        case 0x101544u: goto label_101544;
        default: break;
    }

    ctx->pc = 0x101500u;

    // 0x101500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101504: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x101504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x101508: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10150c: 0x24050205  addiu       $a1, $zero, 0x205
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    // 0x101510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x101510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101514: 0x8c430174  lw          $v1, 0x174($v0)
    ctx->pc = 0x101514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x101518: 0x10650017  beq         $v1, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x101518u;
    {
        const bool branch_taken_0x101518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101518u;
        // 0x10151c: 0x8c920170  lw          $s2, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101518) {
            ctx->pc = 0x101578u;
            return;
        }
    }
    ctx->pc = 0x101520u;
    // 0x101520: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x101524: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x101524u;
    SET_GPR_U32(ctx, 31, 0x10152Cu);
    ctx->pc = 0x101528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101524u;
    // 0x101528: 0x24841a58  addiu       $a0, $a0, 0x1A58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x101524u, 0x10152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10152Cu;
label_10152c:
    // 0x10152c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101530: 0x24a51a78  addiu       $a1, $a1, 0x1A78
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6776));
    // 0x101534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101538: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10153c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10153Cu;
    SET_GPR_U32(ctx, 31, 0x101544u);
    ctx->pc = 0x101540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10153Cu;
    // 0x101540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10153Cu, 0x101544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101544u;
label_101544:
    // 0x101544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101544u;
    {
        const bool branch_taken_0x101544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101544) {
            ctx->pc = 0x101578u;
            return;
        }
    }
    ctx->pc = 0x10154Cu;
    // 0x10154c: 0x0  nop
    ctx->pc = 0x10154cu;
    // NOP
    ctx->pc = 0x101550u;
}
