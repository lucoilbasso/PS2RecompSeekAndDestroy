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

// Function: Cmd_SET_MY_TANK_Entry__FP15BsSCDEntControl
// Address: 0x1196e8 - 0x119798
void Cmd_SET_MY_TANK_Entry__FP15BsSCDEntControl_0x1196e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_MY_TANK_Entry__FP15BsSCDEntControl_0x1196e8");
#endif

    switch (ctx->pc) {
        case 0x119704u: goto label_119704;
        case 0x119728u: goto label_119728;
        case 0x11976cu: goto label_11976c;
        default: break;
    }

    ctx->pc = 0x1196e8u;

    // 0x1196e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1196e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1196ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1196ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1196f0: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1196f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1196f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1196f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1196f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1196fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1196FCu;
    SET_GPR_U32(ctx, 31, 0x119704u);
    ctx->pc = 0x119700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196FCu;
    // 0x119700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1196FCu, 0x119704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119704u;
label_119704:
    // 0x119704: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x119704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x119708: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11970c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11970cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119710: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x119714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119718: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119718u;
    {
        const bool branch_taken_0x119718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119718u;
        // 0x11971c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119718) {
            ctx->pc = 0x11972Cu;
            goto label_11972c;
        }
    }
    ctx->pc = 0x119720u;
    // 0x119720: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119720u;
    SET_GPR_U32(ctx, 31, 0x119728u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119720u, 0x119728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119728u;
label_119728:
    // 0x119728: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x119728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_11972c:
    // 0x11972c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119730: 0x24040934  addiu       $a0, $zero, 0x934
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x119734: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x119734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119738: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11973c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x11973cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119740: 0x2470c540  addiu       $s0, $v1, -0x3AC0
    ctx->pc = 0x119740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119744: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11974c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x119750: 0x8c430e30  lw          $v1, 0xE30($v0)
    ctx->pc = 0x119750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
    // 0x119754: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119754u;
    {
        const bool branch_taken_0x119754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119754u;
        // 0x119758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119754) {
            ctx->pc = 0x11976Cu;
            goto label_11976c;
        }
    }
    ctx->pc = 0x11975Cu;
    // 0x11975c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x119760: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x119760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x119764: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119764u;
    SET_GPR_U32(ctx, 31, 0x11976Cu);
    ctx->pc = 0x119768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119764u;
    // 0x119768: 0x24a5d1a8  addiu       $a1, $a1, -0x2E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119764u, 0x11976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11976Cu;
label_11976c:
    // 0x11976c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119770: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119774: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119778: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x119778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11977c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11977cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119784: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x119788: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11978c: 0xac440fe8  sw          $a0, 0xFE8($v0)
    ctx->pc = 0x11978cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4072), GPR_U32(ctx, 4));
    // 0x119790: 0x3e00008  jr          $ra
    ctx->pc = 0x119790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119798u;
}
