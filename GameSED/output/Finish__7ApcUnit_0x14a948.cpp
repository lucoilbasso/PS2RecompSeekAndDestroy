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

// Function: Finish__7ApcUnit
// Address: 0x14a948 - 0x14aaf0
void Finish__7ApcUnit_0x14a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7ApcUnit_0x14a948");
#endif

    switch (ctx->pc) {
        case 0x14a948u: goto label_14a948;
        case 0x14a94cu: goto label_14a94c;
        case 0x14a950u: goto label_14a950;
        case 0x14a954u: goto label_14a954;
        case 0x14a958u: goto label_14a958;
        case 0x14a95cu: goto label_14a95c;
        case 0x14a960u: goto label_14a960;
        case 0x14a964u: goto label_14a964;
        case 0x14a968u: goto label_14a968;
        case 0x14a96cu: goto label_14a96c;
        case 0x14a970u: goto label_14a970;
        case 0x14a974u: goto label_14a974;
        case 0x14a978u: goto label_14a978;
        case 0x14a97cu: goto label_14a97c;
        case 0x14a980u: goto label_14a980;
        case 0x14a984u: goto label_14a984;
        case 0x14a988u: goto label_14a988;
        case 0x14a98cu: goto label_14a98c;
        case 0x14a990u: goto label_14a990;
        case 0x14a994u: goto label_14a994;
        case 0x14a998u: goto label_14a998;
        case 0x14a99cu: goto label_14a99c;
        case 0x14a9a0u: goto label_14a9a0;
        case 0x14a9a4u: goto label_14a9a4;
        case 0x14a9a8u: goto label_14a9a8;
        case 0x14a9acu: goto label_14a9ac;
        case 0x14a9b0u: goto label_14a9b0;
        case 0x14a9b4u: goto label_14a9b4;
        case 0x14a9b8u: goto label_14a9b8;
        case 0x14a9bcu: goto label_14a9bc;
        case 0x14a9c0u: goto label_14a9c0;
        case 0x14a9c4u: goto label_14a9c4;
        case 0x14a9c8u: goto label_14a9c8;
        case 0x14a9ccu: goto label_14a9cc;
        case 0x14a9d0u: goto label_14a9d0;
        case 0x14a9d4u: goto label_14a9d4;
        case 0x14a9d8u: goto label_14a9d8;
        case 0x14a9dcu: goto label_14a9dc;
        case 0x14a9e0u: goto label_14a9e0;
        case 0x14a9e4u: goto label_14a9e4;
        case 0x14a9e8u: goto label_14a9e8;
        case 0x14a9ecu: goto label_14a9ec;
        case 0x14a9f0u: goto label_14a9f0;
        case 0x14a9f4u: goto label_14a9f4;
        case 0x14a9f8u: goto label_14a9f8;
        case 0x14a9fcu: goto label_14a9fc;
        case 0x14aa00u: goto label_14aa00;
        case 0x14aa04u: goto label_14aa04;
        case 0x14aa08u: goto label_14aa08;
        case 0x14aa0cu: goto label_14aa0c;
        case 0x14aa10u: goto label_14aa10;
        case 0x14aa14u: goto label_14aa14;
        case 0x14aa18u: goto label_14aa18;
        case 0x14aa1cu: goto label_14aa1c;
        case 0x14aa20u: goto label_14aa20;
        case 0x14aa24u: goto label_14aa24;
        case 0x14aa28u: goto label_14aa28;
        case 0x14aa2cu: goto label_14aa2c;
        case 0x14aa30u: goto label_14aa30;
        case 0x14aa34u: goto label_14aa34;
        case 0x14aa38u: goto label_14aa38;
        case 0x14aa3cu: goto label_14aa3c;
        case 0x14aa40u: goto label_14aa40;
        case 0x14aa44u: goto label_14aa44;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa4cu: goto label_14aa4c;
        case 0x14aa50u: goto label_14aa50;
        case 0x14aa54u: goto label_14aa54;
        case 0x14aa58u: goto label_14aa58;
        case 0x14aa5cu: goto label_14aa5c;
        case 0x14aa60u: goto label_14aa60;
        case 0x14aa64u: goto label_14aa64;
        case 0x14aa68u: goto label_14aa68;
        case 0x14aa6cu: goto label_14aa6c;
        case 0x14aa70u: goto label_14aa70;
        case 0x14aa74u: goto label_14aa74;
        case 0x14aa78u: goto label_14aa78;
        case 0x14aa7cu: goto label_14aa7c;
        case 0x14aa80u: goto label_14aa80;
        case 0x14aa84u: goto label_14aa84;
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa8cu: goto label_14aa8c;
        case 0x14aa90u: goto label_14aa90;
        case 0x14aa94u: goto label_14aa94;
        case 0x14aa98u: goto label_14aa98;
        case 0x14aa9cu: goto label_14aa9c;
        case 0x14aaa0u: goto label_14aaa0;
        case 0x14aaa4u: goto label_14aaa4;
        case 0x14aaa8u: goto label_14aaa8;
        case 0x14aaacu: goto label_14aaac;
        case 0x14aab0u: goto label_14aab0;
        case 0x14aab4u: goto label_14aab4;
        case 0x14aab8u: goto label_14aab8;
        case 0x14aabcu: goto label_14aabc;
        case 0x14aac0u: goto label_14aac0;
        case 0x14aac4u: goto label_14aac4;
        case 0x14aac8u: goto label_14aac8;
        case 0x14aaccu: goto label_14aacc;
        case 0x14aad0u: goto label_14aad0;
        case 0x14aad4u: goto label_14aad4;
        case 0x14aad8u: goto label_14aad8;
        case 0x14aadcu: goto label_14aadc;
        case 0x14aae0u: goto label_14aae0;
        case 0x14aae4u: goto label_14aae4;
        case 0x14aae8u: goto label_14aae8;
        case 0x14aaecu: goto label_14aaec;
        default: break;
    }

    ctx->pc = 0x14a948u;

label_14a948:
    // 0x14a948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14a94c:
    // 0x14a94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14a950:
    // 0x14a950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14a954:
    // 0x14a954: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14a954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14a958:
    // 0x14a958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14a95c:
    // 0x14a95c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14a960:
    // 0x14a960: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_14a964:
    // 0x14a964: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_14a968:
    if (ctx->pc == 0x14A968u) {
        ctx->pc = 0x14A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A964u;
        // 0x14a968: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A96Cu;
        goto label_14a96c;
    }
    ctx->pc = 0x14A964u;
    {
        const bool branch_taken_0x14a964 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A964u;
        // 0x14a968: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a964) {
            ctx->pc = 0x14A98Cu;
            goto label_14a98c;
        }
    }
    ctx->pc = 0x14A96Cu;
label_14a96c:
    // 0x14a96c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14a970:
    // 0x14a970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a974:
    // 0x14a974: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14a978:
    // 0x14a978: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a97c:
    // 0x14a97c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a980:
    // 0x14a980: 0x60f809  jalr        $v1
label_14a984:
    if (ctx->pc == 0x14A984u) {
        ctx->pc = 0x14A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A980u;
        // 0x14a984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A988u;
        goto label_14a988;
    }
    ctx->pc = 0x14A980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A988u);
        ctx->pc = 0x14A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A980u;
        // 0x14a984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A980u, 0x14A988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A988u;
label_14a988:
    // 0x14a988: 0xae4001c4  sw          $zero, 0x1C4($s2)
    ctx->pc = 0x14a988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
label_14a98c:
    // 0x14a98c: 0x8e4601c8  lw          $a2, 0x1C8($s2)
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_14a990:
    // 0x14a990: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_14a994:
    if (ctx->pc == 0x14A994u) {
        ctx->pc = 0x14A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A990u;
        // 0x14a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A998u;
        goto label_14a998;
    }
    ctx->pc = 0x14A990u;
    {
        const bool branch_taken_0x14a990 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A990u;
        // 0x14a994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a990) {
            ctx->pc = 0x14A9B4u;
            goto label_14a9b4;
        }
    }
    ctx->pc = 0x14A998u;
label_14a998:
    // 0x14a998: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14a99c:
    // 0x14a99c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14a9a0:
    // 0x14a9a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a9a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a9a4:
    // 0x14a9a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a9a8:
    // 0x14a9a8: 0x60f809  jalr        $v1
label_14a9ac:
    if (ctx->pc == 0x14A9ACu) {
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A8u;
        // 0x14a9ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9B0u;
        goto label_14a9b0;
    }
    ctx->pc = 0x14A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A9B0u);
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A8u;
        // 0x14a9ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9A8u, 0x14A9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A9B0u;
label_14a9b0:
    // 0x14a9b0: 0xae4001c8  sw          $zero, 0x1C8($s2)
    ctx->pc = 0x14a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 0));
label_14a9b4:
    // 0x14a9b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_14a9b8:
    // 0x14a9b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_14a9bc:
    // 0x14a9bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_14a9c0:
    if (ctx->pc == 0x14A9C0u) {
        ctx->pc = 0x14A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9BCu;
        // 0x14a9c0: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9C4u;
        goto label_14a9c4;
    }
    ctx->pc = 0x14A9BCu;
    {
        const bool branch_taken_0x14a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a9bc) {
            ctx->pc = 0x14A9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9BCu;
            // 0x14a9c0: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A9ECu;
            goto label_14a9ec;
        }
    }
    ctx->pc = 0x14A9C4u;
label_14a9c4:
    // 0x14a9c4: 0x8e450178  lw          $a1, 0x178($s2)
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
label_14a9c8:
    // 0x14a9c8: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
label_14a9cc:
    if (ctx->pc == 0x14A9CCu) {
        ctx->pc = 0x14A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9C8u;
        // 0x14a9cc: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9D0u;
        goto label_14a9d0;
    }
    ctx->pc = 0x14A9C8u;
    {
        const bool branch_taken_0x14a9c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14a9c8) {
            ctx->pc = 0x14A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9C8u;
            // 0x14a9cc: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A9ECu;
            goto label_14a9ec;
        }
    }
    ctx->pc = 0x14A9D0u;
label_14a9d0:
    // 0x14a9d0: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_14a9d4:
    // 0x14a9d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_14a9d8:
    if (ctx->pc == 0x14A9D8u) {
        ctx->pc = 0x14A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D4u;
        // 0x14a9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9DCu;
        goto label_14a9dc;
    }
    ctx->pc = 0x14A9D4u;
    {
        const bool branch_taken_0x14a9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D4u;
        // 0x14a9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9d4) {
            ctx->pc = 0x14A9E8u;
            goto label_14a9e8;
        }
    }
    ctx->pc = 0x14A9DCu;
label_14a9dc:
    // 0x14a9dc: 0x8e4801b4  lw          $t0, 0x1B4($s2)
    ctx->pc = 0x14a9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_14a9e0:
    // 0x14a9e0: 0xc041228  jal         func_1048A0
label_14a9e4:
    if (ctx->pc == 0x14A9E4u) {
        ctx->pc = 0x14A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E0u;
        // 0x14a9e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9E8u;
        goto label_14a9e8;
    }
    ctx->pc = 0x14A9E0u;
    SET_GPR_U32(ctx, 31, 0x14A9E8u);
    ctx->pc = 0x14A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9E0u;
    // 0x14a9e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14A9E0u, 0x14A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9E8u;
label_14a9e8:
    // 0x14a9e8: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_14a9ec:
    // 0x14a9ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_14a9f0:
    if (ctx->pc == 0x14A9F0u) {
        ctx->pc = 0x14A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9ECu;
        // 0x14a9f0: 0x8e2601b0  lw          $a2, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9F4u;
        goto label_14a9f4;
    }
    ctx->pc = 0x14A9ECu;
    {
        const bool branch_taken_0x14a9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a9ec) {
            ctx->pc = 0x14A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9ECu;
            // 0x14a9f0: 0x8e2601b0  lw          $a2, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA00u;
            goto label_14aa00;
        }
    }
    ctx->pc = 0x14A9F4u;
label_14a9f4:
    // 0x14a9f4: 0xc0559fc  jal         func_1567F0
label_14a9f8:
    if (ctx->pc == 0x14A9F8u) {
        ctx->pc = 0x14A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F4u;
        // 0x14a9f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9FCu;
        goto label_14a9fc;
    }
    ctx->pc = 0x14A9F4u;
    SET_GPR_U32(ctx, 31, 0x14A9FCu);
    ctx->pc = 0x14A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9F4u;
    // 0x14a9f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1567F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567F0u, 0x14A9F4u, 0x14A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9FCu;
label_14a9fc:
    // 0x14a9fc: 0x8e2601b0  lw          $a2, 0x1B0($s1)
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_14aa00:
    // 0x14aa00: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_14aa04:
    if (ctx->pc == 0x14AA04u) {
        ctx->pc = 0x14AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA00u;
        // 0x14aa04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA08u;
        goto label_14aa08;
    }
    ctx->pc = 0x14AA00u;
    {
        const bool branch_taken_0x14aa00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA00u;
        // 0x14aa04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa00) {
            ctx->pc = 0x14AA20u;
            goto label_14aa20;
        }
    }
    ctx->pc = 0x14AA08u;
label_14aa08:
    // 0x14aa08: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14aa0c:
    // 0x14aa0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14aa10:
    // 0x14aa10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14aa14:
    // 0x14aa14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14aa18:
    // 0x14aa18: 0x60f809  jalr        $v1
label_14aa1c:
    if (ctx->pc == 0x14AA1Cu) {
        ctx->pc = 0x14AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA18u;
        // 0x14aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA20u;
        goto label_14aa20;
    }
    ctx->pc = 0x14AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14AA20u);
        ctx->pc = 0x14AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA18u;
        // 0x14aa1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA18u, 0x14AA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14AA20u;
label_14aa20:
    // 0x14aa20: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_14aa24:
    // 0x14aa24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_14aa28:
    if (ctx->pc == 0x14AA28u) {
        ctx->pc = 0x14AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA24u;
        // 0x14aa28: 0x8e2401b8  lw          $a0, 0x1B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA2Cu;
        goto label_14aa2c;
    }
    ctx->pc = 0x14AA24u;
    {
        const bool branch_taken_0x14aa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa24) {
            ctx->pc = 0x14AA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA24u;
            // 0x14aa28: 0x8e2401b8  lw          $a0, 0x1B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA38u;
            goto label_14aa38;
        }
    }
    ctx->pc = 0x14AA2Cu;
label_14aa2c:
    // 0x14aa2c: 0xc067f04  jal         func_19FC10
label_14aa30:
    if (ctx->pc == 0x14AA30u) {
        ctx->pc = 0x14AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA2Cu;
        // 0x14aa30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA34u;
        goto label_14aa34;
    }
    ctx->pc = 0x14AA2Cu;
    SET_GPR_U32(ctx, 31, 0x14AA34u);
    ctx->pc = 0x14AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA2Cu;
    // 0x14aa30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AA2Cu, 0x14AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA34u;
label_14aa34:
    // 0x14aa34: 0x8e2401b8  lw          $a0, 0x1B8($s1)
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_14aa38:
    // 0x14aa38: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_14aa3c:
    if (ctx->pc == 0x14AA3Cu) {
        ctx->pc = 0x14AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA38u;
        // 0x14aa3c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA40u;
        goto label_14aa40;
    }
    ctx->pc = 0x14AA38u;
    {
        const bool branch_taken_0x14aa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa38) {
            ctx->pc = 0x14AA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA38u;
            // 0x14aa3c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14AA40u;
label_14aa40:
    // 0x14aa40: 0xc067f04  jal         func_19FC10
label_14aa44:
    if (ctx->pc == 0x14AA44u) {
        ctx->pc = 0x14AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA40u;
        // 0x14aa44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA48u;
        goto label_14aa48;
    }
    ctx->pc = 0x14AA40u;
    SET_GPR_U32(ctx, 31, 0x14AA48u);
    ctx->pc = 0x14AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA40u;
    // 0x14aa44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AA40u, 0x14AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA48u;
label_14aa48:
    // 0x14aa48: 0x10000004  b           . + 4 + (0x4 << 2)
label_14aa4c:
    if (ctx->pc == 0x14AA4Cu) {
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA50u;
        goto label_14aa50;
    }
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x8e2201bc  lw          $v0, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0xc0532c8  jal         func_14CB20
label_14aa54:
    if (ctx->pc == 0x14AA54u) {
        ctx->pc = 0x14AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA50u;
        // 0x14aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA58u;
        goto label_14aa58;
    }
    ctx->pc = 0x14AA50u;
    SET_GPR_U32(ctx, 31, 0x14AA58u);
    ctx->pc = 0x14AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA50u;
    // 0x14aa54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB20u, 0x14AA50u, 0x14AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA58u;
label_14aa58:
    // 0x14aa58: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x14aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_14aa5c:
    // 0x14aa5c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
label_14aa60:
    if (ctx->pc == 0x14AA60u) {
        ctx->pc = 0x14AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA5Cu;
        // 0x14aa60: 0x8e2501bc  lw          $a1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA64u;
        goto label_14aa64;
    }
    ctx->pc = 0x14AA5Cu;
    {
        const bool branch_taken_0x14aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aa5c) {
            ctx->pc = 0x14AA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA5Cu;
            // 0x14aa60: 0x8e2501bc  lw          $a1, 0x1BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa50;
        }
    }
    ctx->pc = 0x14AA64u;
label_14aa64:
    // 0x14aa64: 0x8e2201c0  lw          $v0, 0x1C0($s1)
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_14aa68:
    // 0x14aa68: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_14aa6c:
    if (ctx->pc == 0x14AA6Cu) {
        ctx->pc = 0x14AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA68u;
        // 0x14aa6c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA70u;
        goto label_14aa70;
    }
    ctx->pc = 0x14AA68u;
    {
        const bool branch_taken_0x14aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa68) {
            ctx->pc = 0x14AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA68u;
            // 0x14aa6c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AAB4u;
            goto label_14aab4;
        }
    }
    ctx->pc = 0x14AA70u;
label_14aa70:
    // 0x14aa70: 0x922201ab  lbu         $v0, 0x1AB($s1)
    ctx->pc = 0x14aa70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 427)));
label_14aa74:
    // 0x14aa74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_14aa78:
    if (ctx->pc == 0x14AA78u) {
        ctx->pc = 0x14AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA74u;
        // 0x14aa78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA7Cu;
        goto label_14aa7c;
    }
    ctx->pc = 0x14AA74u;
    {
        const bool branch_taken_0x14aa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA74u;
        // 0x14aa78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa74) {
            ctx->pc = 0x14AAA4u;
            goto label_14aaa4;
        }
    }
    ctx->pc = 0x14AA7Cu;
label_14aa7c:
    // 0x14aa7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14aa80:
    // 0x14aa80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14aa84:
    // 0x14aa84: 0xc0532f2  jal         func_14CBC8
label_14aa88:
    if (ctx->pc == 0x14AA88u) {
        ctx->pc = 0x14AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA84u;
        // 0x14aa88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA8Cu;
        goto label_14aa8c;
    }
    ctx->pc = 0x14AA84u;
    SET_GPR_U32(ctx, 31, 0x14AA8Cu);
    ctx->pc = 0x14AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA84u;
    // 0x14aa88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14AA84u, 0x14AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA8Cu;
label_14aa8c:
    // 0x14aa8c: 0xc056832  jal         func_15A0C8
label_14aa90:
    if (ctx->pc == 0x14AA90u) {
        ctx->pc = 0x14AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA8Cu;
        // 0x14aa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA94u;
        goto label_14aa94;
    }
    ctx->pc = 0x14AA8Cu;
    SET_GPR_U32(ctx, 31, 0x14AA94u);
    ctx->pc = 0x14AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA8Cu;
    // 0x14aa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x14AA8Cu, 0x14AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA94u;
label_14aa94:
    // 0x14aa94: 0x922201ab  lbu         $v0, 0x1AB($s1)
    ctx->pc = 0x14aa94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 427)));
label_14aa98:
    // 0x14aa98: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14aa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14aa9c:
    // 0x14aa9c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_14aaa0:
    if (ctx->pc == 0x14AAA0u) {
        ctx->pc = 0x14AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA9Cu;
        // 0x14aaa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAA4u;
        goto label_14aaa4;
    }
    ctx->pc = 0x14AA9Cu;
    {
        const bool branch_taken_0x14aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aa9c) {
            ctx->pc = 0x14AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA9Cu;
            // 0x14aaa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa80;
        }
    }
    ctx->pc = 0x14AAA4u;
label_14aaa4:
    // 0x14aaa4: 0x8e2401c0  lw          $a0, 0x1C0($s1)
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_14aaa8:
    // 0x14aaa8: 0xc067f04  jal         func_19FC10
label_14aaac:
    if (ctx->pc == 0x14AAACu) {
        ctx->pc = 0x14AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAA8u;
        // 0x14aaac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAB0u;
        goto label_14aab0;
    }
    ctx->pc = 0x14AAA8u;
    SET_GPR_U32(ctx, 31, 0x14AAB0u);
    ctx->pc = 0x14AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAA8u;
    // 0x14aaac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14AAA8u, 0x14AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAB0u;
label_14aab0:
    // 0x14aab0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_14aab4:
    // 0x14aab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14aab8:
    // 0x14aab8: 0xc0685b8  jal         func_1A16E0
label_14aabc:
    if (ctx->pc == 0x14AABCu) {
        ctx->pc = 0x14AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAB8u;
        // 0x14aabc: 0x24843580  addiu       $a0, $a0, 0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAC0u;
        goto label_14aac0;
    }
    ctx->pc = 0x14AAB8u;
    SET_GPR_U32(ctx, 31, 0x14AAC0u);
    ctx->pc = 0x14AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAB8u;
    // 0x14aabc: 0x24843580  addiu       $a0, $a0, 0x3580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x14AAB8u, 0x14AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAC0u;
label_14aac0:
    // 0x14aac0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x14aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_14aac4:
    // 0x14aac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14aac8:
    // 0x14aac8: 0xc0685b8  jal         func_1A16E0
label_14aacc:
    if (ctx->pc == 0x14AACCu) {
        ctx->pc = 0x14AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAC8u;
        // 0x14aacc: 0x24843598  addiu       $a0, $a0, 0x3598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAD0u;
        goto label_14aad0;
    }
    ctx->pc = 0x14AAC8u;
    SET_GPR_U32(ctx, 31, 0x14AAD0u);
    ctx->pc = 0x14AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAC8u;
    // 0x14aacc: 0x24843598  addiu       $a0, $a0, 0x3598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x14AAC8u, 0x14AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAD0u;
label_14aad0:
    // 0x14aad0: 0xc066982  jal         func_19A608
label_14aad4:
    if (ctx->pc == 0x14AAD4u) {
        ctx->pc = 0x14AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAD0u;
        // 0x14aad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAD8u;
        goto label_14aad8;
    }
    ctx->pc = 0x14AAD0u;
    SET_GPR_U32(ctx, 31, 0x14AAD8u);
    ctx->pc = 0x14AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAD0u;
    // 0x14aad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A608u, 0x14AAD0u, 0x14AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAD8u;
label_14aad8:
    // 0x14aad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14aad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14aadc:
    // 0x14aadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14aadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14aae0:
    // 0x14aae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14aae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14aae4:
    // 0x14aae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14aae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14aae8:
    // 0x14aae8: 0x3e00008  jr          $ra
label_14aaec:
    if (ctx->pc == 0x14AAECu) {
        ctx->pc = 0x14AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAE8u;
        // 0x14aaec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAF0u;
        goto label_fallthrough_0x14aae8;
    }
    ctx->pc = 0x14AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAE8u;
        // 0x14aaec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14aae8:
    ctx->pc = 0x14AAF0u;
}
