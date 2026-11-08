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

// Function: entry_0014b238
// Address: 0x14b238 - 0x14b26c
void entry_0014b238_0x14b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b238_0x14b238");
#endif

    switch (ctx->pc) {
        case 0x14b248u: goto label_14b248;
        case 0x14b254u: goto label_14b254;
        default: break;
    }

    ctx->pc = 0x14b238u;

    // 0x14b238: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14b23c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b240: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x14B240u;
    SET_GPR_U32(ctx, 31, 0x14B248u);
    ctx->pc = 0x14B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B240u;
    // 0x14b244: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x14B240u, 0x14B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B248u;
label_14b248:
    // 0x14b248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b24c: 0xc056854  jal         func_15A150
    ctx->pc = 0x14B24Cu;
    SET_GPR_U32(ctx, 31, 0x14B254u);
    ctx->pc = 0x14B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B24Cu;
    // 0x14b250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x14B24Cu, 0x14B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B254u;
label_14b254:
    // 0x14b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b25c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b25cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b260: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b264: 0x3e00008  jr          $ra
    ctx->pc = 0x14B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B264u;
        // 0x14b268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B26Cu;
}
