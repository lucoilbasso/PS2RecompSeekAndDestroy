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

// Function: entry_00107550
// Address: 0x107550 - 0x1075a0
void entry_00107550_0x107550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107550_0x107550");
#endif

    switch (ctx->pc) {
        case 0x107574u: goto label_107574;
        case 0x10757cu: goto label_10757c;
        case 0x107598u: goto label_107598;
        default: break;
    }

    ctx->pc = 0x107550u;

    // 0x107550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x107554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107558: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x107558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10755c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x107560: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107564: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x107564u;
    {
        const bool branch_taken_0x107564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x107564) {
            ctx->pc = 0x107568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107564u;
            // 0x107568: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1075A0u;
            return;
        }
    }
    ctx->pc = 0x10756Cu;
    // 0x10756c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10756Cu;
    SET_GPR_U32(ctx, 31, 0x107574u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10756Cu, 0x107574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107574u;
label_107574:
    // 0x107574: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107574u;
    SET_GPR_U32(ctx, 31, 0x10757Cu);
    ctx->pc = 0x107578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107574u;
    // 0x107578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107574u, 0x10757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10757Cu;
label_10757c:
    // 0x10757c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x107580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107584: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x107584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x107588: 0x24a5f650  addiu       $a1, $a1, -0x9B0
    ctx->pc = 0x107588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964816));
    // 0x10758c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107590: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x107590u;
    SET_GPR_U32(ctx, 31, 0x107598u);
    ctx->pc = 0x107594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107590u;
    // 0x107594: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x107590u, 0x107598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107598u;
label_107598:
    // 0x107598: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x107598u;
    {
        const bool branch_taken_0x107598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107598u;
        // 0x10759c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107598) {
            ctx->pc = 0x10768Cu;
            return;
        }
    }
    ctx->pc = 0x1075A0u;
}
