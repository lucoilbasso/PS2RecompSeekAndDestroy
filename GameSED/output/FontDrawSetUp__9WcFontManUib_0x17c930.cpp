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

// Function: FontDrawSetUp__9WcFontManUib
// Address: 0x17c930 - 0x17c984
void FontDrawSetUp__9WcFontManUib_0x17c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDrawSetUp__9WcFontManUib_0x17c930");
#endif

    switch (ctx->pc) {
        case 0x17c960u: goto label_17c960;
        case 0x17c96cu: goto label_17c96c;
        default: break;
    }

    ctx->pc = 0x17c930u;

    // 0x17c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c93c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c944: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c948: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17c948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c94c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c950: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x17c950u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17c954: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x17c958: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C958u;
    SET_GPR_U32(ctx, 31, 0x17C960u);
    ctx->pc = 0x17C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C958u;
    // 0x17c95c: 0x8e040830  lw          $a0, 0x830($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C958u, 0x17C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C960u;
label_17c960:
    // 0x17c960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c964: 0xc060fc6  jal         func_183F18
    ctx->pc = 0x17C964u;
    SET_GPR_U32(ctx, 31, 0x17C96Cu);
    ctx->pc = 0x17C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C964u;
    // 0x17c968: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F18u, 0x17C964u, 0x17C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C96Cu;
label_17c96c:
    // 0x17c96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c978: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C97Cu;
        // 0x17c980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C984u;
}
