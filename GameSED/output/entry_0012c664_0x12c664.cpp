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

// Function: entry_0012c664
// Address: 0x12c664 - 0x12c6a8
void entry_0012c664_0x12c664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c664_0x12c664");
#endif

    switch (ctx->pc) {
        case 0x12c674u: goto label_12c674;
        case 0x12c690u: goto label_12c690;
        default: break;
    }

    ctx->pc = 0x12c664u;

    // 0x12c664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c66c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C66Cu;
    SET_GPR_U32(ctx, 31, 0x12C674u);
    ctx->pc = 0x12C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C66Cu;
    // 0x12c670: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C66Cu, 0x12C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C674u;
label_12c674:
    // 0x12c674: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c67c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x12c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c680: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C680u;
        // 0x12c684: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C708u;
            return;
        }
    }
    ctx->pc = 0x12C688u;
    // 0x12c688: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C688u;
    SET_GPR_U32(ctx, 31, 0x12C690u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C688u, 0x12C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C690u;
label_12c690:
    // 0x12c690: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12c690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12c694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c698: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C698u;
    {
        const bool branch_taken_0x12c698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C698u;
        // 0x12c69c: 0x24845df0  addiu       $a0, $a0, 0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c698) {
            ctx->pc = 0x12C6A8u;
            return;
        }
    }
    ctx->pc = 0x12C6A0u;
    // 0x12c6a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C6A0u;
    {
        const bool branch_taken_0x12c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6A0u;
        // 0x12c6a4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6a0) {
            ctx->pc = 0x12C6C4u;
            return;
        }
    }
    ctx->pc = 0x12C6A8u;
}
