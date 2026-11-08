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

// Function: WSpu2ManCreate__Fv
// Address: 0x17a550 - 0x17a5a4
void WSpu2ManCreate__Fv_0x17a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpu2ManCreate__Fv_0x17a550");
#endif

    switch (ctx->pc) {
        case 0x17a564u: goto label_17a564;
        case 0x17a56cu: goto label_17a56c;
        case 0x17a584u: goto label_17a584;
        case 0x17a590u: goto label_17a590;
        default: break;
    }

    ctx->pc = 0x17a550u;

    // 0x17a550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a55c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17A55Cu;
    SET_GPR_U32(ctx, 31, 0x17A564u);
    ctx->pc = 0x17A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A55Cu;
    // 0x17a560: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17A55Cu, 0x17A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A564u;
label_17a564:
    // 0x17a564: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17A564u;
    SET_GPR_U32(ctx, 31, 0x17A56Cu);
    ctx->pc = 0x17A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A564u;
    // 0x17a568: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17A564u, 0x17A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A56Cu;
label_17a56c:
    // 0x17a56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a570: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17a574: 0x2442fa60  addiu       $v0, $v0, -0x5A0
    ctx->pc = 0x17a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965856));
    // 0x17a578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a57c: 0xc05e96a  jal         func_17A5A8
    ctx->pc = 0x17A57Cu;
    SET_GPR_U32(ctx, 31, 0x17A584u);
    ctx->pc = 0x17A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A57Cu;
    // 0x17a580: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5A8u, 0x17A57Cu, 0x17A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A584u;
label_17a584:
    // 0x17a584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a588: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x17A588u;
    SET_GPR_U32(ctx, 31, 0x17A590u);
    ctx->pc = 0x17A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A588u;
    // 0x17a58c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x17A588u, 0x17A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A590u;
label_17a590:
    // 0x17a590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a59c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A59Cu;
        // 0x17a5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A5A4u;
}
