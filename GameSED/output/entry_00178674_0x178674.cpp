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

// Function: entry_00178674
// Address: 0x178674 - 0x1786b0
void entry_00178674_0x178674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178674_0x178674");
#endif

    switch (ctx->pc) {
        case 0x178684u: goto label_178684;
        case 0x1786a4u: goto label_1786a4;
        default: break;
    }

    ctx->pc = 0x178674u;

    // 0x178674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17867c: 0xc05e1b6  jal         func_1786D8
    ctx->pc = 0x17867Cu;
    SET_GPR_U32(ctx, 31, 0x178684u);
    ctx->pc = 0x178680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17867Cu;
    // 0x178680: 0x24b01020  addiu       $s0, $a1, 0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1786D8u, 0x17867Cu, 0x178684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178684u;
label_178684:
    // 0x178684: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17868c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178694: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x178694u;
    {
        const bool branch_taken_0x178694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x178698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178694u;
        // 0x178698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178694) {
            ctx->pc = 0x1786B0u;
            return;
        }
    }
    ctx->pc = 0x17869Cu;
    // 0x17869c: 0xc05e1ce  jal         func_178738
    ctx->pc = 0x17869Cu;
    SET_GPR_U32(ctx, 31, 0x1786A4u);
    ctx->pc = 0x178738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178738u, 0x17869Cu, 0x1786A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786A4u;
label_1786a4:
    // 0x1786a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1786A4u;
    {
        const bool branch_taken_0x1786a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1786a4) {
            ctx->pc = 0x1786B8u;
            return;
        }
    }
    ctx->pc = 0x1786ACu;
    // 0x1786ac: 0x0  nop
    ctx->pc = 0x1786acu;
    // NOP
    ctx->pc = 0x1786b0u;
}
