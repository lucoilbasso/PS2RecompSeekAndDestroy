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

// Function: entry_0011c52c
// Address: 0x11c52c - 0x11c570
void entry_0011c52c_0x11c52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c52c_0x11c52c");
#endif

    switch (ctx->pc) {
        case 0x11c538u: goto label_11c538;
        case 0x11c54cu: goto label_11c54c;
        case 0x11c56cu: goto label_11c56c;
        default: break;
    }

    ctx->pc = 0x11c52cu;

    // 0x11c52c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11c530: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C530u;
    SET_GPR_U32(ctx, 31, 0x11C538u);
    ctx->pc = 0x11C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C530u;
    // 0x11c534: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C530u, 0x11C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C538u;
label_11c538:
    // 0x11c538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11c544: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C544u;
    SET_GPR_U32(ctx, 31, 0x11C54Cu);
    ctx->pc = 0x11C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C544u;
    // 0x11c548: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C544u, 0x11C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C54Cu;
label_11c54c:
    // 0x11c54c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11c550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c554: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11c558: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c55c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C55Cu;
    {
        const bool branch_taken_0x11c55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C55Cu;
        // 0x11c560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c55c) {
            ctx->pc = 0x11C570u;
            return;
        }
    }
    ctx->pc = 0x11C564u;
    // 0x11c564: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C564u;
    SET_GPR_U32(ctx, 31, 0x11C56Cu);
    ctx->pc = 0x11C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C564u;
    // 0x11c568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C564u, 0x11C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C56Cu;
label_11c56c:
    // 0x11c56c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11c570u;
}
