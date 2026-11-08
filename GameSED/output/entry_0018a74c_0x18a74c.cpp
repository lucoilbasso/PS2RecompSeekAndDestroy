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

// Function: entry_0018a74c
// Address: 0x18a74c - 0x18a76c
void entry_0018a74c_0x18a74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a74c_0x18a74c");
#endif

    ctx->pc = 0x18a74cu;

    // 0x18a74c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18a750: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A750u;
    {
        const bool branch_taken_0x18a750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A750u;
        // 0x18a754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a750) {
            ctx->pc = 0x18A76Cu;
            return;
        }
    }
    ctx->pc = 0x18A758u;
    // 0x18a758: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x18a75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18a760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a764: 0xc062972  jal         func_18A5C8
    ctx->pc = 0x18A764u;
    SET_GPR_U32(ctx, 31, 0x18A76Cu);
    ctx->pc = 0x18A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A764u;
    // 0x18a768: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5C8u, 0x18A764u, 0x18A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A76Cu;
}
