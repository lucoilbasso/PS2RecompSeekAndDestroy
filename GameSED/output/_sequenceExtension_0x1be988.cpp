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

// Function: _sequenceExtension
// Address: 0x1be988 - 0x1beab8
void _sequenceExtension_0x1be988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceExtension_0x1be988");
#endif

    switch (ctx->pc) {
        case 0x1be9bcu: goto label_1be9bc;
        case 0x1be9c8u: goto label_1be9c8;
        case 0x1bea04u: goto label_1bea04;
        case 0x1bea20u: goto label_1bea20;
        case 0x1bea4cu: goto label_1bea4c;
        default: break;
    }

    ctx->pc = 0x1be988u;

    // 0x1be988: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1be98c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1be98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1be990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be998: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1be998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1be99c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be9a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1be9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1be9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1be9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1be9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1be9ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1be9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1be9b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1be9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1be9b4: 0xc07023e  jal         func_1C08F8
    ctx->pc = 0x1BE9B4u;
    SET_GPR_U32(ctx, 31, 0x1BE9BCu);
    ctx->pc = 0x1BE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9B4u;
    // 0x1be9b8: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08F8u, 0x1BE9B4u, 0x1BE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9BCu;
label_1be9bc:
    // 0x1be9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9c0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BE9C0u;
    SET_GPR_U32(ctx, 31, 0x1BE9C8u);
    ctx->pc = 0x1BE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9C0u;
    // 0x1be9c4: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BE9C0u, 0x1BE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9C8u;
label_1be9c8:
    // 0x1be9c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9cc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1be9d0: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1be9d4: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x1be9d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1be9d8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1be9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1be9dc: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x1be9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x1be9e0: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x1be9e4: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x1be9e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1be9e8: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1be9ec: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE9ECu;
    {
        const bool branch_taken_0x1be9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1BE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9ECu;
        // 0x1be9f0: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9ec) {
            ctx->pc = 0x1BEA04u;
            goto label_1bea04;
        }
    }
    ctx->pc = 0x1BE9F4u;
    // 0x1be9f4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1be9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1be9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9fc: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BE9FCu;
    SET_GPR_U32(ctx, 31, 0x1BEA04u);
    ctx->pc = 0x1BEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9FCu;
    // 0x1bea00: 0x24a5b350  addiu       $a1, $a1, -0x4CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BE9FCu, 0x1BEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA04u;
label_1bea04:
    // 0x1bea04: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x1bea08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bea10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bea14: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1bea14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x1bea18: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BEA18u;
    SET_GPR_U32(ctx, 31, 0x1BEA20u);
    ctx->pc = 0x1BEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA18u;
    // 0x1bea1c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BEA18u, 0x1BEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA20u;
label_1bea20:
    // 0x1bea20: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1bea24: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bea28: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEA28u;
    {
        const bool branch_taken_0x1bea28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA28u;
        // 0x1bea2c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea28) {
            ctx->pc = 0x1BEA4Cu;
            goto label_1bea4c;
        }
    }
    ctx->pc = 0x1BEA30u;
    // 0x1bea30: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEA30u;
    {
        const bool branch_taken_0x1bea30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA30u;
        // 0x1bea34: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea30) {
            ctx->pc = 0x1BEA4Cu;
            goto label_1bea4c;
        }
    }
    ctx->pc = 0x1BEA38u;
    // 0x1bea38: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA38u;
    {
        const bool branch_taken_0x1bea38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA38u;
        // 0x1bea3c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea38) {
            ctx->pc = 0x1BEA4Cu;
            goto label_1bea4c;
        }
    }
    ctx->pc = 0x1BEA40u;
    // 0x1bea40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea44: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BEA44u;
    SET_GPR_U32(ctx, 31, 0x1BEA4Cu);
    ctx->pc = 0x1BEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA44u;
    // 0x1bea48: 0x24a5b378  addiu       $a1, $a1, -0x4C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BEA44u, 0x1BEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA4Cu;
label_1bea4c:
    // 0x1bea4c: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1bea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1bea50: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1bea50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x1bea54: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x1bea58: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1bea5c: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1bea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x1bea60: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x1bea64: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1bea68: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x1bea6c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1bea6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1bea70: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1bea70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1bea74: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1bea74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1bea78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1bea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1bea7c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1bea80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1bea84: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1bea84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x1bea88: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1bea88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x1bea8c: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1bea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x1bea90: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1bea90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x1bea94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bea98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1bea98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bea9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1beaa0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1beaa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1beaa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1beaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beaa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1beaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAB0u;
        // 0x1beab4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAB8u;
}
