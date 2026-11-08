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

// Function: entry_0018b530
// Address: 0x18b530 - 0x18b560
void entry_0018b530_0x18b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b530_0x18b530");
#endif

    switch (ctx->pc) {
        case 0x18b54cu: goto label_18b54c;
        default: break;
    }

    ctx->pc = 0x18b530u;

    // 0x18b530: 0x4a0001f  bltz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x18B530u;
    {
        const bool branch_taken_0x18b530 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B530u;
        // 0x18b534: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b530) {
            ctx->pc = 0x18B5B0u;
            return;
        }
    }
    ctx->pc = 0x18B538u;
    // 0x18b538: 0x8e710208  lw          $s1, 0x208($s3)
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
    // 0x18b53c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b540: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x18b540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b544: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18B544u;
    SET_GPR_U32(ctx, 31, 0x18B54Cu);
    ctx->pc = 0x18B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B544u;
    // 0x18b548: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18B544u, 0x18B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B54Cu;
label_18b54c:
    // 0x18b54c: 0x5e000010  bgtzl       $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B54Cu;
            // 0x18b550: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B590u;
            return;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B554u;
    {
        const bool branch_taken_0x18b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B554u;
        // 0x18b558: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b554) {
            ctx->pc = 0x18B56Cu;
            return;
        }
    }
    ctx->pc = 0x18B55Cu;
    // 0x18b55c: 0x0  nop
    ctx->pc = 0x18b55cu;
    // NOP
    ctx->pc = 0x18b560u;
}
