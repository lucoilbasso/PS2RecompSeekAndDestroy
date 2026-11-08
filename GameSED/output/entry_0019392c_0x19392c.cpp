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

// Function: entry_0019392c
// Address: 0x19392c - 0x193950
void entry_0019392c_0x19392c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019392c_0x19392c");
#endif

    switch (ctx->pc) {
        case 0x193934u: goto label_193934;
        default: break;
    }

    ctx->pc = 0x19392cu;

    // 0x19392c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x19392Cu;
    SET_GPR_U32(ctx, 31, 0x193934u);
    ctx->pc = 0x193930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19392Cu;
    // 0x193930: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x19392Cu, 0x193934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193934u;
label_193934:
    // 0x193934: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x193934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19393c: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x19393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x193940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193948: 0x3e00008  jr          $ra
    ctx->pc = 0x193948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193948u;
        // 0x19394c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193950u;
}
