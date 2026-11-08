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

// Function: entry_0018a828
// Address: 0x18a828 - 0x18a848
void entry_0018a828_0x18a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a828_0x18a828");
#endif

    switch (ctx->pc) {
        case 0x18a838u: goto label_18a838;
        default: break;
    }

    ctx->pc = 0x18a828u;

    // 0x18a828: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A828u;
    {
        const bool branch_taken_0x18a828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a828) {
            ctx->pc = 0x18A82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A828u;
            // 0x18a82c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A848u;
            return;
        }
    }
    ctx->pc = 0x18A830u;
    // 0x18a830: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x18A830u;
    SET_GPR_U32(ctx, 31, 0x18A838u);
    ctx->pc = 0x18A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A830u;
    // 0x18a834: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A830u, 0x18A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A838u;
label_18a838:
    // 0x18a838: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18a83c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18A83Cu;
    {
        const bool branch_taken_0x18a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A83Cu;
        // 0x18a840: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a83c) {
            ctx->pc = 0x18A888u;
            return;
        }
    }
    ctx->pc = 0x18A844u;
    // 0x18a844: 0x0  nop
    ctx->pc = 0x18a844u;
    // NOP
    ctx->pc = 0x18a848u;
}
