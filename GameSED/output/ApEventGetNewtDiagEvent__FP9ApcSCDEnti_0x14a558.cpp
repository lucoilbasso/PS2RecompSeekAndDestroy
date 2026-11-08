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

// Function: ApEventGetNewtDiagEvent__FP9ApcSCDEnti
// Address: 0x14a558 - 0x14a5c8
void ApEventGetNewtDiagEvent__FP9ApcSCDEnti_0x14a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventGetNewtDiagEvent__FP9ApcSCDEnti_0x14a558");
#endif

    switch (ctx->pc) {
        case 0x14a590u: goto label_14a590;
        default: break;
    }

    ctx->pc = 0x14a558u;

    // 0x14a558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a55c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14a560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a564: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x14a568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a568u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x14a56c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14a570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a574: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14a574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a578: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A578u;
    {
        const bool branch_taken_0x14a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A578u;
        // 0x14a57c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a578) {
            ctx->pc = 0x14A590u;
            goto label_14a590;
        }
    }
    ctx->pc = 0x14A580u;
    // 0x14a580: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14a584: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x14a588: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14A588u;
    SET_GPR_U32(ctx, 31, 0x14A590u);
    ctx->pc = 0x14A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A588u;
    // 0x14a58c: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14A588u, 0x14A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A590u;
label_14a590:
    // 0x14a590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a598: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a5a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14a5a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x14a5ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14a5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a5b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14a5b8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x14a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x14a5bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5C0u;
        // 0x14a5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A5C8u;
}
