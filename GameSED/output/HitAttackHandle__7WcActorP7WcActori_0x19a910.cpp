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

// Function: HitAttackHandle__7WcActorP7WcActori
// Address: 0x19a910 - 0x19a9b0
void HitAttackHandle__7WcActorP7WcActori_0x19a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitAttackHandle__7WcActorP7WcActori_0x19a910");
#endif

    switch (ctx->pc) {
        case 0x19a910u: goto label_19a910;
        case 0x19a914u: goto label_19a914;
        case 0x19a918u: goto label_19a918;
        case 0x19a91cu: goto label_19a91c;
        case 0x19a920u: goto label_19a920;
        case 0x19a924u: goto label_19a924;
        case 0x19a928u: goto label_19a928;
        case 0x19a92cu: goto label_19a92c;
        case 0x19a930u: goto label_19a930;
        case 0x19a934u: goto label_19a934;
        case 0x19a938u: goto label_19a938;
        case 0x19a93cu: goto label_19a93c;
        case 0x19a940u: goto label_19a940;
        case 0x19a944u: goto label_19a944;
        case 0x19a948u: goto label_19a948;
        case 0x19a94cu: goto label_19a94c;
        case 0x19a950u: goto label_19a950;
        case 0x19a954u: goto label_19a954;
        case 0x19a958u: goto label_19a958;
        case 0x19a95cu: goto label_19a95c;
        case 0x19a960u: goto label_19a960;
        case 0x19a964u: goto label_19a964;
        case 0x19a968u: goto label_19a968;
        case 0x19a96cu: goto label_19a96c;
        case 0x19a970u: goto label_19a970;
        case 0x19a974u: goto label_19a974;
        case 0x19a978u: goto label_19a978;
        case 0x19a97cu: goto label_19a97c;
        case 0x19a980u: goto label_19a980;
        case 0x19a984u: goto label_19a984;
        case 0x19a988u: goto label_19a988;
        case 0x19a98cu: goto label_19a98c;
        case 0x19a990u: goto label_19a990;
        case 0x19a994u: goto label_19a994;
        case 0x19a998u: goto label_19a998;
        case 0x19a99cu: goto label_19a99c;
        case 0x19a9a0u: goto label_19a9a0;
        case 0x19a9a4u: goto label_19a9a4;
        case 0x19a9a8u: goto label_19a9a8;
        case 0x19a9acu: goto label_19a9ac;
        default: break;
    }

    ctx->pc = 0x19a910u;

label_19a910:
    // 0x19a910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19a914:
    // 0x19a914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19a918:
    // 0x19a918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19a91c:
    // 0x19a91c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19a920:
    // 0x19a920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a924:
    // 0x19a924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19a928:
    // 0x19a928: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19a928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19a92c:
    // 0x19a92c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19a930:
    // 0x19a930: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x19a930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19a934:
    // 0x19a934: 0x1a000002  blez        $s0, . + 4 + (0x2 << 2)
label_19a938:
    if (ctx->pc == 0x19A938u) {
        ctx->pc = 0x19A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A934u;
        // 0x19a938: 0xae300134  sw          $s0, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A93Cu;
        goto label_19a93c;
    }
    ctx->pc = 0x19A934u;
    {
        const bool branch_taken_0x19a934 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x19A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A934u;
        // 0x19a938: 0xae300134  sw          $s0, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a934) {
            ctx->pc = 0x19A940u;
            goto label_19a940;
        }
    }
    ctx->pc = 0x19A93Cu;
label_19a93c:
    // 0x19a93c: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x19a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
label_19a940:
    // 0x19a940: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_19a944:
    if (ctx->pc == 0x19A944u) {
        ctx->pc = 0x19A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A940u;
        // 0x19a944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A948u;
        goto label_19a948;
    }
    ctx->pc = 0x19A940u;
    {
        const bool branch_taken_0x19a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a940) {
            ctx->pc = 0x19A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A940u;
            // 0x19a944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A99Cu;
            goto label_19a99c;
        }
    }
    ctx->pc = 0x19A948u;
label_19a948:
    // 0x19a948: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
label_19a94c:
    if (ctx->pc == 0x19A94Cu) {
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A950u;
        goto label_19a950;
    }
    ctx->pc = 0x19A948u;
    {
        const bool branch_taken_0x19a948 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a948) {
            ctx->pc = 0x19A970u;
            goto label_19a970;
        }
    }
    ctx->pc = 0x19A950u;
label_19a950:
    // 0x19a950: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19a954:
    // 0x19a954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a958:
    // 0x19a958: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x19a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_19a95c:
    // 0x19a95c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a960:
    // 0x19a960: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a964:
    // 0x19a964: 0x60f809  jalr        $v1
label_19a968:
    if (ctx->pc == 0x19A968u) {
        ctx->pc = 0x19A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A964u;
        // 0x19a968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A96Cu;
        goto label_19a96c;
    }
    ctx->pc = 0x19A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A96Cu);
        ctx->pc = 0x19A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A964u;
        // 0x19a968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A964u, 0x19A96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A96Cu;
label_19a96c:
    // 0x19a96c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a970:
    // 0x19a970: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
label_19a974:
    if (ctx->pc == 0x19A974u) {
        ctx->pc = 0x19A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A970u;
        // 0x19a974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A978u;
        goto label_19a978;
    }
    ctx->pc = 0x19A970u;
    {
        const bool branch_taken_0x19a970 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a970) {
            ctx->pc = 0x19A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A970u;
            // 0x19a974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A99Cu;
            goto label_19a99c;
        }
    }
    ctx->pc = 0x19A978u;
label_19a978:
    // 0x19a978: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_19a97c:
    // 0x19a97c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a980:
    // 0x19a980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a984:
    // 0x19a984: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_19a988:
    // 0x19a988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a98c:
    // 0x19a98c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a990:
    // 0x19a990: 0x60f809  jalr        $v1
label_19a994:
    if (ctx->pc == 0x19A994u) {
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A998u;
        goto label_19a998;
    }
    ctx->pc = 0x19A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A998u);
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A990u, 0x19A998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A998u;
label_19a998:
    // 0x19a998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a99c:
    // 0x19a99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19a9a0:
    // 0x19a9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a9a4:
    // 0x19a9a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19a9a8:
    // 0x19a9a8: 0x3e00008  jr          $ra
label_19a9ac:
    if (ctx->pc == 0x19A9ACu) {
        ctx->pc = 0x19A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A8u;
        // 0x19a9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9B0u;
        goto label_fallthrough_0x19a9a8;
    }
    ctx->pc = 0x19A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9A8u;
        // 0x19a9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a9a8:
    ctx->pc = 0x19A9B0u;
}
