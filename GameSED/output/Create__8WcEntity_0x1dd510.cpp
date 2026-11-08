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

// Function: Create__8WcEntity
// Address: 0x1dd510 - 0x1dd564
void Create__8WcEntity_0x1dd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8WcEntity_0x1dd510");
#endif

    switch (ctx->pc) {
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd544u: goto label_1dd544;
        case 0x1dd550u: goto label_1dd550;
        default: break;
    }

    ctx->pc = 0x1dd510u;

    // 0x1dd510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd51c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DD51Cu;
    SET_GPR_U32(ctx, 31, 0x1DD524u);
    ctx->pc = 0x1DD520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD51Cu;
    // 0x1dd520: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DD51Cu, 0x1DD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD524u;
label_1dd524:
    // 0x1dd524: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DD524u;
    SET_GPR_U32(ctx, 31, 0x1DD52Cu);
    ctx->pc = 0x1DD528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD524u;
    // 0x1dd528: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DD524u, 0x1DD52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD52Cu;
label_1dd52c:
    // 0x1dd52c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd530: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dd534: 0x2442fd70  addiu       $v0, $v0, -0x290
    ctx->pc = 0x1dd534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966640));
    // 0x1dd538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd53c: 0xc061258  jal         func_184960
    ctx->pc = 0x1DD53Cu;
    SET_GPR_U32(ctx, 31, 0x1DD544u);
    ctx->pc = 0x1DD540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD53Cu;
    // 0x1dd540: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DD53Cu, 0x1DD544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD544u;
label_1dd544:
    // 0x1dd544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd548: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DD548u;
    SET_GPR_U32(ctx, 31, 0x1DD550u);
    ctx->pc = 0x1DD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD548u;
    // 0x1dd54c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DD548u, 0x1DD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD550u;
label_1dd550:
    // 0x1dd550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd55c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD55Cu;
        // 0x1dd560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD564u;
}
