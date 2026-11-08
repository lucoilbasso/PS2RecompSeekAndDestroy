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

// Function: HandleEvent__7ApcUnitP5BcObji
// Address: 0x14c888 - 0x14c970
void HandleEvent__7ApcUnitP5BcObji_0x14c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__7ApcUnitP5BcObji_0x14c888");
#endif

    switch (ctx->pc) {
        case 0x14c8acu: goto label_14c8ac;
        case 0x14c958u: goto label_14c958;
        default: break;
    }

    ctx->pc = 0x14c888u;

    // 0x14c888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c898: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14c898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c89c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c8a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c8a4: 0xc0667a4  jal         func_199E90
    ctx->pc = 0x14C8A4u;
    SET_GPR_U32(ctx, 31, 0x14C8ACu);
    ctx->pc = 0x14C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8A4u;
    // 0x14c8a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199E90u, 0x14C8A4u, 0x14C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8ACu;
label_14c8ac:
    // 0x14c8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8b0: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C8B0u;
    {
        const bool branch_taken_0x14c8b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8b0) {
            ctx->pc = 0x14C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8B0u;
            // 0x14c8b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C8D4u;
            goto label_14c8d4;
        }
    }
    ctx->pc = 0x14C8B8u;
    // 0x14c8b8: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x14c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x14c8bc: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C8BCu;
    {
        const bool branch_taken_0x14c8bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c8bc) {
            ctx->pc = 0x14C8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8BCu;
            // 0x14c8c0: 0xae0001c4  sw          $zero, 0x1C4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C8C4u;
            goto label_14c8c4;
        }
    }
    ctx->pc = 0x14C8C4u;
label_14c8c4:
    // 0x14c8c4: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x14c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x14c8c8: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C8C8u;
    {
        const bool branch_taken_0x14c8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c8c8) {
            ctx->pc = 0x14C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8C8u;
            // 0x14c8cc: 0xae0001c8  sw          $zero, 0x1C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C8D0u;
            goto label_14c8d0;
        }
    }
    ctx->pc = 0x14C8D0u;
label_14c8d0:
    // 0x14c8d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14c8d4:
    // 0x14c8d4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x14c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14c8d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14c8dc: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C8DCu;
    {
        const bool branch_taken_0x14c8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c8dc) {
            ctx->pc = 0x14C8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8DCu;
            // 0x14c8e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            goto label_14c95c;
        }
    }
    ctx->pc = 0x14C8E4u;
    // 0x14c8e4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x14c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x14c8e8: 0x5642001c  bnel        $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14C8E8u;
    {
        const bool branch_taken_0x14c8e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8e8) {
            ctx->pc = 0x14C8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8E8u;
            // 0x14c8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            goto label_14c95c;
        }
    }
    ctx->pc = 0x14C8F0u;
    // 0x14c8f0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14c8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c8f4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14c8f8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C8F8u;
    {
        const bool branch_taken_0x14c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8f8) {
            ctx->pc = 0x14C8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8F8u;
            // 0x14c8fc: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            goto label_14c938;
        }
    }
    ctx->pc = 0x14C900u;
    // 0x14c900: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14c904: 0x24046003  addiu       $a0, $zero, 0x6003
    ctx->pc = 0x14c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24579));
    // 0x14c908: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400B4u));
    // 0x14c90c: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C90Cu;
    {
        const bool branch_taken_0x14c90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c90c) {
            ctx->pc = 0x14C910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C90Cu;
            // 0x14c910: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            goto label_14c938;
        }
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0x8e020854  lw          $v0, 0x854($s0)
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2132)));
    // 0x14c918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C918u;
    {
        const bool branch_taken_0x14c918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C918u;
        // 0x14c91c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c918) {
            ctx->pc = 0x14C928u;
            goto label_14c928;
        }
    }
    ctx->pc = 0x14C920u;
    // 0x14c920: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C920u;
    {
        const bool branch_taken_0x14c920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c920) {
            ctx->pc = 0x14C924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C920u;
            // 0x14c924: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            goto label_14c938;
        }
    }
    ctx->pc = 0x14C928u;
label_14c928:
    // 0x14c928: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c92c: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x14c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x14c930: 0xae020858  sw          $v0, 0x858($s0)
    ctx->pc = 0x14c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 2));
    // 0x14c934: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_14c938:
    // 0x14c938: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C938u;
    {
        const bool branch_taken_0x14c938 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14c938) {
            ctx->pc = 0x14C93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C938u;
            // 0x14c93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            goto label_14c95c;
        }
    }
    ctx->pc = 0x14C940u;
    // 0x14c940: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x14c944: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C944u;
    {
        const bool branch_taken_0x14c944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C944u;
        // 0x14c948: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c944) {
            ctx->pc = 0x14C958u;
            goto label_14c958;
        }
    }
    ctx->pc = 0x14C94Cu;
    // 0x14c94c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c950: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14C950u;
    SET_GPR_U32(ctx, 31, 0x14C958u);
    ctx->pc = 0x14C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C950u;
    // 0x14c954: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14C950u, 0x14C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C958u;
label_14c958:
    // 0x14c958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c95c:
    // 0x14c95c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c964: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c968: 0x3e00008  jr          $ra
    ctx->pc = 0x14C968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C968u;
        // 0x14c96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C970u;
}
