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

// Function: Cmd_FONT_DATA_PUT_Entry__FP15BsSCDEntControl
// Address: 0x106640 - 0x1066a8
void Cmd_FONT_DATA_PUT_Entry__FP15BsSCDEntControl_0x106640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FONT_DATA_PUT_Entry__FP15BsSCDEntControl_0x106640");
#endif

    switch (ctx->pc) {
        case 0x10665cu: goto label_10665c;
        case 0x106668u: goto label_106668;
        case 0x10667cu: goto label_10667c;
        case 0x106688u: goto label_106688;
        default: break;
    }

    ctx->pc = 0x106640u;

    // 0x106640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10664c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x106650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x106654: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106654u;
    SET_GPR_U32(ctx, 31, 0x10665Cu);
    ctx->pc = 0x106658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106654u;
    // 0x106658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106654u, 0x10665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10665Cu;
label_10665c:
    // 0x10665c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106660: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106660u;
    SET_GPR_U32(ctx, 31, 0x106668u);
    ctx->pc = 0x106664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106660u;
    // 0x106664: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106660u, 0x106668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106668u;
label_106668:
    // 0x106668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10666c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106674: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x106674u;
    SET_GPR_U32(ctx, 31, 0x10667Cu);
    ctx->pc = 0x106678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106674u;
    // 0x106678: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x106674u, 0x10667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10667Cu;
label_10667c:
    // 0x10667c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106680: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x106680u;
    SET_GPR_U32(ctx, 31, 0x106688u);
    ctx->pc = 0x106684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106680u;
    // 0x106684: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x106680u, 0x106688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106688u;
label_106688:
    // 0x106688: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x106688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10668c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10668cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106690: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x106690u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x106694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10669c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10669cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1066a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1066A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1066A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066A0u;
        // 0x1066a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066A8u;
}
