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

// Function: entry_0017813c
// Address: 0x17813c - 0x178198
void entry_0017813c_0x17813c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017813c_0x17813c");
#endif

    switch (ctx->pc) {
        case 0x17816cu: goto label_17816c;
        case 0x178180u: goto label_178180;
        default: break;
    }

    ctx->pc = 0x17813cu;

    // 0x17813c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178140: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x178148: 0x8c520024  lw          $s2, 0x24($v0)
    ctx->pc = 0x178148u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17814c: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x178150: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x178150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x178154: 0xae431040  sw          $v1, 0x1040($s2)
    ctx->pc = 0x178154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 3));
    // 0x178158: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x178158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17815c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17815Cu;
    {
        const bool branch_taken_0x17815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17815Cu;
        // 0x178160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17815c) {
            ctx->pc = 0x178198u;
            return;
        }
    }
    ctx->pc = 0x178164u;
    // 0x178164: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178164u;
    SET_GPR_U32(ctx, 31, 0x17816Cu);
    ctx->pc = 0x178168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178164u;
    // 0x178168: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178164u, 0x17816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17816Cu;
label_17816c:
    // 0x17816c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178170: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x178170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x178174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178178: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178178u;
    SET_GPR_U32(ctx, 31, 0x178180u);
    ctx->pc = 0x17817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178178u;
    // 0x17817c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178178u, 0x178180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178180u;
label_178180:
    // 0x178180: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178184: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178188: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x178188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x17818c: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x17818cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x178190: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x178190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178194: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x178194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    ctx->pc = 0x178198u;
}
