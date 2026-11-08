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

// Function: ExtPanelGet1ObjPtr__9ApcObjRscP15BsSCDEntControlb
// Address: 0x104430 - 0x1044ac
void ExtPanelGet1ObjPtr__9ApcObjRscP15BsSCDEntControlb_0x104430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelGet1ObjPtr__9ApcObjRscP15BsSCDEntControlb_0x104430");
#endif

    switch (ctx->pc) {
        case 0x104454u: goto label_104454;
        case 0x104464u: goto label_104464;
        case 0x10448cu: goto label_10448c;
        default: break;
    }

    ctx->pc = 0x104430u;

    // 0x104430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10443c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104448: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10444c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10444Cu;
    SET_GPR_U32(ctx, 31, 0x104454u);
    ctx->pc = 0x104450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10444Cu;
    // 0x104450: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10444Cu, 0x104454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104454u;
label_104454:
    // 0x104454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x104454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10445c: 0xc040d4a  jal         func_103528
    ctx->pc = 0x10445Cu;
    SET_GPR_U32(ctx, 31, 0x104464u);
    ctx->pc = 0x104460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10445Cu;
    // 0x104460: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103528u, 0x10445Cu, 0x104464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104464u;
label_104464:
    // 0x104464: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x104464u;
    {
        const bool branch_taken_0x104464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x104468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104464u;
        // 0x104468: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104464) {
            ctx->pc = 0x10448Cu;
            goto label_10448c;
        }
    }
    ctx->pc = 0x10446Cu;
    // 0x10446c: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10446Cu;
    {
        const bool branch_taken_0x10446c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10446c) {
            ctx->pc = 0x104470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10446Cu;
            // 0x104470: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104490u;
            goto label_104490;
        }
    }
    ctx->pc = 0x104474u;
    // 0x104474: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10447c: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x10447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x104480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104484: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104484u;
    SET_GPR_U32(ctx, 31, 0x10448Cu);
    ctx->pc = 0x104488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104484u;
    // 0x104488: 0x24a51c10  addiu       $a1, $a1, 0x1C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104484u, 0x10448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10448Cu;
label_10448c:
    // 0x10448c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10448cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104490:
    // 0x104490: 0xaf929114  sw          $s2, -0x6EEC($gp)
    ctx->pc = 0x104490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 18));
    // 0x104494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10449c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10449cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1044a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1044a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1044a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1044A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1044A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044A4u;
        // 0x1044a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1044A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1044ACu;
}
