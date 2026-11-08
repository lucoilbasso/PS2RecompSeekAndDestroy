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

// Function: compose__5PBHDRPvP5BcObj
// Address: 0x17f3f0 - 0x17f544
void compose__5PBHDRPvP5BcObj_0x17f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("compose__5PBHDRPvP5BcObj_0x17f3f0");
#endif

    switch (ctx->pc) {
        case 0x17f4bcu: goto label_17f4bc;
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f4ecu: goto label_17f4ec;
        case 0x17f500u: goto label_17f500;
        default: break;
    }

    ctx->pc = 0x17f3f0u;

    // 0x17f3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f3fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f40c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17f40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f410: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f414: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17f414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f418: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f41c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f420: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f424: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x17f424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f428: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17f42c: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x17f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x17f430: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17f434: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f43c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f440: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x17f440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x17f444: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f44c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f450: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17f450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17f454: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17f458: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f45c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17f460: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x17f460u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f468: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x17f468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x17f46c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x17f470: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x17f470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x17f474: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x17f478: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x17f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x17f47c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x17f480: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17f480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x17f484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f488: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x17f488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x17f48c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17f490: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x17f490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x17f494: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17f498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f49c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f4a0: 0xa6260016  sh          $a2, 0x16($s1)
    ctx->pc = 0x17f4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x17f4a4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x17f4a8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F4A8u;
    {
        const bool branch_taken_0x17f4a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A8u;
        // 0x17f4ac: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a8) {
            ctx->pc = 0x17F4B4u;
            goto label_17f4b4;
        }
    }
    ctx->pc = 0x17F4B0u;
    // 0x17f4b0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17f4b4:
    // 0x17f4b4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17F4B4u;
    SET_GPR_U32(ctx, 31, 0x17F4BCu);
    ctx->pc = 0x17F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4B4u;
    // 0x17f4b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17F4B4u, 0x17F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4BCu;
label_17f4bc:
    // 0x17f4bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17F4BCu;
    {
        const bool branch_taken_0x17f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4BCu;
        // 0x17f4c0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4bc) {
            ctx->pc = 0x17F4ECu;
            goto label_17f4ec;
        }
    }
    ctx->pc = 0x17F4C4u;
    // 0x17f4c4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17f4c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17f4cc: 0x24847d18  addiu       $a0, $a0, 0x7D18
    ctx->pc = 0x17f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32024));
    // 0x17f4d0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17F4D0u;
    SET_GPR_U32(ctx, 31, 0x17F4D8u);
    ctx->pc = 0x17F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4D0u;
    // 0x17f4d4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17F4D0u, 0x17F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4D8u;
label_17f4d8:
    // 0x17f4d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17f4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4e0: 0x24a57d38  addiu       $a1, $a1, 0x7D38
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32056));
    // 0x17f4e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17F4E4u;
    SET_GPR_U32(ctx, 31, 0x17F4ECu);
    ctx->pc = 0x17F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4E4u;
    // 0x17f4e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17F4E4u, 0x17F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4ECu;
label_17f4ec:
    // 0x17f4ec: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17f4f0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17F4F0u;
    {
        const bool branch_taken_0x17f4f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F0u;
        // 0x17f4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4f0) {
            ctx->pc = 0x17F528u;
            goto label_17f528;
        }
    }
    ctx->pc = 0x17F4F8u;
    // 0x17f4f8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
label_17f500:
    // 0x17f500: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x17f500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x17f504: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17f504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f508: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17f50c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f510: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17f514: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x17f514u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17f518: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f51c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17f520: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17F520u;
    {
        const bool branch_taken_0x17f520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F520u;
        // 0x17f524: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f520) {
            ctx->pc = 0x17F500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f500;
        }
    }
    ctx->pc = 0x17F528u;
label_17f528:
    // 0x17f528: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x17f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17f52c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f538: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f53c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F53Cu;
        // 0x17f540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F544u;
}
