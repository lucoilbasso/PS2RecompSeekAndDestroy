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

// Function: BSCDEntGetDataParameter__FP15BsSCDEntControlPii
// Address: 0x1a9610 - 0x1a9714
void BSCDEntGetDataParameter__FP15BsSCDEntControlPii_0x1a9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetDataParameter__FP15BsSCDEntControlPii_0x1a9610");
#endif

    switch (ctx->pc) {
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9674u: goto label_1a9674;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96d8u: goto label_1a96d8;
        default: break;
    }

    ctx->pc = 0x1a9610u;

    // 0x1a9610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9618: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a961c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9620: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a962c: 0x4c0001c  bltz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A962Cu;
    {
        const bool branch_taken_0x1a962c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A962Cu;
        // 0x1a9630: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a962c) {
            ctx->pc = 0x1A96A0u;
            goto label_1a96a0;
        }
    }
    ctx->pc = 0x1A9634u;
    // 0x1a9634: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a9638: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a963c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a9640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9644: 0x1045002c  beq         $v0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A9644u;
    {
        const bool branch_taken_0x1a9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9644u;
        // 0x1a9648: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9644) {
            ctx->pc = 0x1A96F8u;
            goto label_1a96f8;
        }
    }
    ctx->pc = 0x1A964Cu;
    // 0x1a964c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9650: 0x10450029  beq         $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A9650u;
    {
        const bool branch_taken_0x1a9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9650u;
        // 0x1a9654: 0x2651001c  addiu       $s1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9650) {
            ctx->pc = 0x1A96F8u;
            goto label_1a96f8;
        }
    }
    ctx->pc = 0x1A9658u;
    // 0x1a9658: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1a9658u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1a965c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9660:
    // 0x1a9660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9664: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9668: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a966c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A966Cu;
    SET_GPR_U32(ctx, 31, 0x1A9674u);
    ctx->pc = 0x1A9670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A966Cu;
    // 0x1a9670: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A966Cu, 0x1A9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9674u;
label_1a9674:
    // 0x1a9674: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9678: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a967c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a967cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9684: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A9684u;
    {
        const bool branch_taken_0x1a9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9684u;
        // 0x1a9688: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9684) {
            ctx->pc = 0x1A96F8u;
            goto label_1a96f8;
        }
    }
    ctx->pc = 0x1A968Cu;
    // 0x1a968c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9690: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A9690u;
    {
        const bool branch_taken_0x1a9690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a9690) {
            ctx->pc = 0x1A9694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9690u;
            // 0x1a9694: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9660;
        }
    }
    ctx->pc = 0x1A9698u;
    // 0x1a9698: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9698u;
    {
        const bool branch_taken_0x1a9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9698u;
        // 0x1a969c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9698) {
            ctx->pc = 0x1A96FCu;
            goto label_1a96fc;
        }
    }
    ctx->pc = 0x1A96A0u;
label_1a96a0:
    // 0x1a96a0: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a96a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a96ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a96acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a96b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a96b4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A96B4u;
    SET_GPR_U32(ctx, 31, 0x1A96BCu);
    ctx->pc = 0x1A96B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96B4u;
    // 0x1a96b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A96B4u, 0x1A96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96BCu;
label_1a96bc:
    // 0x1a96bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a96c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a96cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A96CCu;
    {
        const bool branch_taken_0x1a96cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96CCu;
        // 0x1a96d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96cc) {
            ctx->pc = 0x1A96F4u;
            goto label_1a96f4;
        }
    }
    ctx->pc = 0x1A96D4u;
    // 0x1a96d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a96d8:
    // 0x1a96d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a96dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a96dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a96e0: 0x0  nop
    ctx->pc = 0x1a96e0u;
    // NOP
    // 0x1a96e4: 0x0  nop
    ctx->pc = 0x1a96e4u;
    // NOP
    // 0x1a96e8: 0x0  nop
    ctx->pc = 0x1a96e8u;
    // NOP
    // 0x1a96ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A96ECu;
    {
        const bool branch_taken_0x1a96ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96ECu;
        // 0x1a96f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96ec) {
            ctx->pc = 0x1A96D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a96d8;
        }
    }
    ctx->pc = 0x1A96F4u;
label_1a96f4:
    // 0x1a96f4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1a96f8:
    // 0x1a96f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a96f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a96fc:
    // 0x1a96fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a96fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a970c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A970Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A970Cu;
        // 0x1a9710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A970Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9714u;
}
