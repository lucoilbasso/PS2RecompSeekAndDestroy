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

// Function: entry_001beb08
// Address: 0x1beb08 - 0x1beb44
void entry_001beb08_0x1beb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beb08_0x1beb08");
#endif

    switch (ctx->pc) {
        case 0x1beb14u: goto label_1beb14;
        case 0x1beb24u: goto label_1beb24;
        case 0x1beb30u: goto label_1beb30;
        default: break;
    }

    ctx->pc = 0x1beb08u;

    // 0x1beb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb0c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BEB0Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB14u);
    ctx->pc = 0x1BEB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB0Cu;
    // 0x1beb10: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BEB0Cu, 0x1BEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB14u;
label_1beb14:
    // 0x1beb14: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1beb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x1beb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb1c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB24u);
    ctx->pc = 0x1BEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB1Cu;
    // 0x1beb20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BEB1Cu, 0x1BEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB24u;
label_1beb24:
    // 0x1beb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb28: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BEB28u;
    SET_GPR_U32(ctx, 31, 0x1BEB30u);
    ctx->pc = 0x1BEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB28u;
    // 0x1beb2c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BEB28u, 0x1BEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB30u;
label_1beb30:
    // 0x1beb30: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1beb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x1beb34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1beb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB3Cu;
        // 0x1beb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB44u;
}
