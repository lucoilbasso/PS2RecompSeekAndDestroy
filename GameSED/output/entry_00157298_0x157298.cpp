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

// Function: entry_00157298
// Address: 0x157298 - 0x1572c8
void entry_00157298_0x157298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157298_0x157298");
#endif

    ctx->pc = 0x157298u;

    // 0x157298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15729c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1572a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x1572a4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1572a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1572a8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1572a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1572ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1572acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572b0: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1572B0u;
    {
        const bool branch_taken_0x1572b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1572B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572B0u;
        // 0x1572b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572b0) {
            ctx->pc = 0x1572C8u;
            return;
        }
    }
    ctx->pc = 0x1572B8u;
    // 0x1572b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1572bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1572c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1572C0u;
    SET_GPR_U32(ctx, 31, 0x1572C8u);
    ctx->pc = 0x1572C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572C0u;
    // 0x1572c4: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1572C0u, 0x1572C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572C8u;
}
