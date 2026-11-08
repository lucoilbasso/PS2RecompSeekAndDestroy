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

// Function: entry_0010257c
// Address: 0x10257c - 0x1025c0
void entry_0010257c_0x10257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010257c_0x10257c");
#endif

    ctx->pc = 0x10257cu;

    // 0x10257c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102580: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x102580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102584: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102588: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10258c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102590: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x102590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102594: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x102598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10259c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x10259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1025a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1025A0u;
    {
        const bool branch_taken_0x1025a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025A0u;
        // 0x1025a4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025a0) {
            ctx->pc = 0x1025C0u;
            return;
        }
    }
    ctx->pc = 0x1025A8u;
    // 0x1025a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1025a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1025ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1025acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025b0: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x1025b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x1025b4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1025b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1025B8u;
    SET_GPR_U32(ctx, 31, 0x1025C0u);
    ctx->pc = 0x1025BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025B8u;
    // 0x1025bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1025B8u, 0x1025C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1025C0u;
}
