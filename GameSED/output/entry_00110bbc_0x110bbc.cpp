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

// Function: entry_00110bbc
// Address: 0x110bbc - 0x110be4
void entry_00110bbc_0x110bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110bbc_0x110bbc");
#endif

    switch (ctx->pc) {
        case 0x110bd4u: goto label_110bd4;
        default: break;
    }

    ctx->pc = 0x110bbcu;

    // 0x110bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110bc4: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110BC4u;
    {
        const bool branch_taken_0x110bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x110bc4) {
            ctx->pc = 0x110BE4u;
            return;
        }
    }
    ctx->pc = 0x110BCCu;
    // 0x110bcc: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x110BCCu;
    SET_GPR_U32(ctx, 31, 0x110BD4u);
    ctx->pc = 0x110BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BCCu;
    // 0x110bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x110BCCu, 0x110BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BD4u;
label_110bd4:
    // 0x110bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bdc: 0xc06760e  jal         func_19D838
    ctx->pc = 0x110BDCu;
    SET_GPR_U32(ctx, 31, 0x110BE4u);
    ctx->pc = 0x110BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BDCu;
    // 0x110be0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x110BDCu, 0x110BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BE4u;
}
