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

// Function: entry_001215f8
// Address: 0x1215f8 - 0x121630
void entry_001215f8_0x1215f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215f8_0x1215f8");
#endif

    switch (ctx->pc) {
        case 0x121604u: goto label_121604;
        case 0x12161cu: goto label_12161c;
        default: break;
    }

    ctx->pc = 0x1215f8u;

    // 0x1215f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1215f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1215fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1215FCu;
    SET_GPR_U32(ctx, 31, 0x121604u);
    ctx->pc = 0x121600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215FCu;
    // 0x121600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1215FCu, 0x121604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121604u;
label_121604:
    // 0x121604: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12160c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12160Cu;
    {
        const bool branch_taken_0x12160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12160Cu;
        // 0x121610: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12160c) {
            ctx->pc = 0x12168Cu;
            return;
        }
    }
    ctx->pc = 0x121614u;
    // 0x121614: 0xc04844a  jal         func_121128
    ctx->pc = 0x121614u;
    SET_GPR_U32(ctx, 31, 0x12161Cu);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121614u, 0x12161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12161Cu;
label_12161c:
    // 0x12161c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x121620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121620u;
    {
        const bool branch_taken_0x121620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121620u;
        // 0x121624: 0x24845b70  addiu       $a0, $a0, 0x5B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121620) {
            ctx->pc = 0x121630u;
            return;
        }
    }
    ctx->pc = 0x121628u;
    // 0x121628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121628u;
    {
        const bool branch_taken_0x121628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121628u;
        // 0x12162c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121628) {
            ctx->pc = 0x12164Cu;
            return;
        }
    }
    ctx->pc = 0x121630u;
}
