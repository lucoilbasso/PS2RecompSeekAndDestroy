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

// Function: entry_00193af8
// Address: 0x193af8 - 0x193b14
void entry_00193af8_0x193af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193af8_0x193af8");
#endif

    switch (ctx->pc) {
        case 0x193b00u: goto label_193b00;
        default: break;
    }

    ctx->pc = 0x193af8u;

    // 0x193af8: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x193AF8u;
    SET_GPR_U32(ctx, 31, 0x193B00u);
    ctx->pc = 0x193AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AF8u;
    // 0x193afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x193AF8u, 0x193B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B00u;
label_193b00:
    // 0x193b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x193B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B0Cu;
        // 0x193b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193B14u;
}
