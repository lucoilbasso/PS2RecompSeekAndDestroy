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

// Function: entry_0013ad64
// Address: 0x13ad64 - 0x13ada8
void entry_0013ad64_0x13ad64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ad64_0x13ad64");
#endif

    switch (ctx->pc) {
        case 0x13ad8cu: goto label_13ad8c;
        default: break;
    }

    ctx->pc = 0x13ad64u;

    // 0x13ad64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ad68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ad68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ad70: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13ad74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13ad78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ad7c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13ad80: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ad84: 0xc061a46  jal         func_186918
    ctx->pc = 0x13AD84u;
    SET_GPR_U32(ctx, 31, 0x13AD8Cu);
    ctx->pc = 0x13AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AD84u;
    // 0x13ad88: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13AD84u, 0x13AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD8Cu;
label_13ad8c:
    // 0x13ad8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13ad8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad90: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13ad94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AD94u;
    {
        const bool branch_taken_0x13ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD94u;
        // 0x13ad98: 0x2444a5c8  addiu       $a0, $v0, -0x5A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad94) {
            ctx->pc = 0x13ADA8u;
            return;
        }
    }
    ctx->pc = 0x13AD9Cu;
    // 0x13ad9c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ada0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13ADA0u;
    {
        const bool branch_taken_0x13ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13ada0) {
            ctx->pc = 0x13ADACu;
            return;
        }
    }
    ctx->pc = 0x13ADA8u;
}
