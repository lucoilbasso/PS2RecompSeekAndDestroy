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

// Function: entry_001604d8
// Address: 0x1604d8 - 0x160528
void entry_001604d8_0x1604d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001604d8_0x1604d8");
#endif

    switch (ctx->pc) {
        case 0x1604e0u: goto label_1604e0;
        default: break;
    }

    ctx->pc = 0x1604d8u;

    // 0x1604d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1604D8u;
    SET_GPR_U32(ctx, 31, 0x1604E0u);
    ctx->pc = 0x1604DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1604D8u;
    // 0x1604dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1604D8u, 0x1604E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1604e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1604e8: 0x10820119  beq         $a0, $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x1604E8u;
    {
        const bool branch_taken_0x1604e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604E8u;
        // 0x1604ec: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604e8) {
            ctx->pc = 0x160950u;
            return;
        }
    }
    ctx->pc = 0x1604F0u;
    // 0x1604f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1604F0u;
    {
        const bool branch_taken_0x1604f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f0) {
            ctx->pc = 0x160540u;
            return;
        }
    }
    ctx->pc = 0x1604F8u;
    // 0x1604f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1604fc: 0x1082004e  beq         $a0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1604FCu;
    {
        const bool branch_taken_0x1604fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604fc) {
            ctx->pc = 0x160638u;
            return;
        }
    }
    ctx->pc = 0x160504u;
    // 0x160504: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x160504u;
    {
        const bool branch_taken_0x160504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160504) {
            ctx->pc = 0x160508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160504u;
            // 0x160508: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160528u;
            return;
        }
    }
    ctx->pc = 0x16050Cu;
    // 0x16050c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x16050Cu;
    {
        const bool branch_taken_0x16050c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16050Cu;
        // 0x160510: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16050c) {
            ctx->pc = 0x1605A8u;
            return;
        }
    }
    ctx->pc = 0x160514u;
    // 0x160514: 0x50920036  beql        $a0, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x160514u;
    {
        const bool branch_taken_0x160514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x160514) {
            ctx->pc = 0x160518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160514u;
            // 0x160518: 0x24103630  addiu       $s0, $zero, 0x3630 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13872));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1605F0u;
            return;
        }
    }
    ctx->pc = 0x16051Cu;
    // 0x16051c: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x16051Cu;
    {
        const bool branch_taken_0x16051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16051c) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x160524u;
    // 0x160524: 0x0  nop
    ctx->pc = 0x160524u;
    // NOP
    ctx->pc = 0x160528u;
}
