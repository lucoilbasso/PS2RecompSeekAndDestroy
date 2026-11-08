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

// Function: entry_00178ba0
// Address: 0x178ba0 - 0x178bd8
void entry_00178ba0_0x178ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178ba0_0x178ba0");
#endif

    switch (ctx->pc) {
        case 0x178bb0u: goto label_178bb0;
        default: break;
    }

    ctx->pc = 0x178ba0u;

label_178ba0:
    // 0x178ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178ba4:
    // 0x178ba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_178ba8:
    // 0x178ba8: 0xc06ecd2  jal         func_1BB348
label_178bac:
    if (ctx->pc == 0x178BACu) {
        ctx->pc = 0x178BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BA8u;
        // 0x178bac: 0x8c500024  lw          $s0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BB0u;
        goto label_178bb0;
    }
    ctx->pc = 0x178BA8u;
    SET_GPR_U32(ctx, 31, 0x178BB0u);
    ctx->pc = 0x178BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178BA8u;
    // 0x178bac: 0x8c500024  lw          $s0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB348u, 0x178BA8u, 0x178BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178BB0u;
label_178bb0:
    // 0x178bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178bb4:
    // 0x178bb4: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_178bb8:
    // 0x178bb8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_178bbc:
    if (ctx->pc == 0x178BBCu) {
        ctx->pc = 0x178BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178BB8u;
        // 0x178bbc: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178BC0u;
        goto label_178bc0;
    }
    ctx->pc = 0x178BB8u;
    {
        const bool branch_taken_0x178bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bb8) {
            ctx->pc = 0x178BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178BB8u;
            // 0x178bbc: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178BFCu;
            return;
        }
    }
    ctx->pc = 0x178BC0u;
label_178bc0:
    // 0x178bc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x178bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_178bc4:
    // 0x178bc4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x178bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_178bc8:
    // 0x178bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_178bcc:
    // 0x178bcc: 0x8c637a10  lw          $v1, 0x7A10($v1)
    ctx->pc = 0x178bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31248)));
label_178bd0:
    // 0x178bd0: 0x600008  jr          $v1
label_178bd4:
    if (ctx->pc == 0x178BD4u) {
        ctx->pc = 0x178BD8u;
        goto label_fallthrough_0x178bd0;
    }
    ctx->pc = 0x178BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x178bd0:
    ctx->pc = 0x178BD8u;
}
