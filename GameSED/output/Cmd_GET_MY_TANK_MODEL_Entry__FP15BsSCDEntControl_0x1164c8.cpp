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

// Function: Cmd_GET_MY_TANK_MODEL_Entry__FP15BsSCDEntControl
// Address: 0x1164c8 - 0x116580
void Cmd_GET_MY_TANK_MODEL_Entry__FP15BsSCDEntControl_0x1164c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_MY_TANK_MODEL_Entry__FP15BsSCDEntControl_0x1164c8");
#endif

    switch (ctx->pc) {
        case 0x1164fcu: goto label_1164fc;
        case 0x116530u: goto label_116530;
        case 0x116544u: goto label_116544;
        default: break;
    }

    ctx->pc = 0x1164c8u;

    // 0x1164c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1164c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1164cc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1164ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1164d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1164d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1164d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1164d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1164d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1164dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1164dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1164e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1164e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1164e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1164e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1164e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1164e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1164ec: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1164ECu;
    {
        const bool branch_taken_0x1164ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1164F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164ECu;
        // 0x1164f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164ec) {
            ctx->pc = 0x116500u;
            goto label_116500;
        }
    }
    ctx->pc = 0x1164F4u;
    // 0x1164f4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1164F4u;
    SET_GPR_U32(ctx, 31, 0x1164FCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1164F4u, 0x1164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164FCu;
label_1164fc:
    // 0x1164fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1164fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116500:
    // 0x116500: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116504: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x116508: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x116508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11650c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116514: 0x3a310002  xori        $s1, $s1, 0x2
    ctx->pc = 0x116514u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
    // 0x116518: 0x2e310001  sltiu       $s1, $s1, 0x1
    ctx->pc = 0x116518u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11651c: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x11651cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x116520: 0x2652d520  addiu       $s2, $s2, -0x2AE0
    ctx->pc = 0x116520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956320));
    // 0x116524: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x116524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116528: 0xc041882  jal         func_106208
    ctx->pc = 0x116528u;
    SET_GPR_U32(ctx, 31, 0x116530u);
    ctx->pc = 0x11652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116528u;
    // 0x11652c: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116528u, 0x116530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116530u;
label_116530:
    // 0x116530: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116534: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116534u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116538: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11653c: 0xc041882  jal         func_106208
    ctx->pc = 0x11653Cu;
    SET_GPR_U32(ctx, 31, 0x116544u);
    ctx->pc = 0x116540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11653Cu;
    // 0x116540: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11653Cu, 0x116544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116544u;
label_116544:
    // 0x116544: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x116548: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11654c: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x116550: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116550u;
    {
        const bool branch_taken_0x116550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116550u;
        // 0x116554: 0xac640400  sw          $a0, 0x400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116550) {
            ctx->pc = 0x116568u;
            goto label_116568;
        }
    }
    ctx->pc = 0x116558u;
    // 0x116558: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11655c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x11655cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x116560: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x116560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116564: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x116564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 2));
label_116568:
    // 0x116568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11656c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11656cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116574: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x116574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116578: 0x3e00008  jr          $ra
    ctx->pc = 0x116578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116578u;
        // 0x11657c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116580u;
}
