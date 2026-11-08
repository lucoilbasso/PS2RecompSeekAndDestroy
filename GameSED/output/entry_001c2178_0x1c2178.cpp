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

// Function: entry_001c2178
// Address: 0x1c2178 - 0x1c21a4
void entry_001c2178_0x1c2178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2178_0x1c2178");
#endif

    switch (ctx->pc) {
        case 0x1c2184u: goto label_1c2184;
        default: break;
    }

    ctx->pc = 0x1c2178u;

    // 0x1c2178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c217c: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C217Cu;
    SET_GPR_U32(ctx, 31, 0x1C2184u);
    ctx->pc = 0x1C2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C217Cu;
    // 0x1c2180: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C217Cu, 0x1C2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2184u;
label_1c2184:
    // 0x1c2184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2188: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2188u;
    {
        const bool branch_taken_0x1c2188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2188u;
        // 0x1c218c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2188) {
            ctx->pc = 0x1C2170u;
            return;
        }
    }
    ctx->pc = 0x1C2190u;
    // 0x1c2190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c219c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C219Cu;
        // 0x1c21a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21A4u;
}
