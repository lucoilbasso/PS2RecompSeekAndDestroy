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

// Function: entry_00157440
// Address: 0x157440 - 0x15747c
void entry_00157440_0x157440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157440_0x157440");
#endif

    ctx->pc = 0x157440u;

    // 0x157440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x157444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15744c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x157450: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x157454: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x157458: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15745c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x15745cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157464: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157464u;
    {
        const bool branch_taken_0x157464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157464u;
        // 0x157468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157464) {
            ctx->pc = 0x15747Cu;
            return;
        }
    }
    ctx->pc = 0x15746Cu;
    // 0x15746c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x157470: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x157474: 0xc068186  jal         func_1A0618
    ctx->pc = 0x157474u;
    SET_GPR_U32(ctx, 31, 0x15747Cu);
    ctx->pc = 0x157478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157474u;
    // 0x157478: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157474u, 0x15747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15747Cu;
}
