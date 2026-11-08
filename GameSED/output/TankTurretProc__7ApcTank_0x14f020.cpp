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

// Function: TankTurretProc__7ApcTank
// Address: 0x14f020 - 0x14f5f0
void TankTurretProc__7ApcTank_0x14f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankTurretProc__7ApcTank_0x14f020");
#endif

    switch (ctx->pc) {
        case 0x14f048u: goto label_14f048;
        case 0x14f08cu: goto label_14f08c;
        case 0x14f0b0u: goto label_14f0b0;
        case 0x14f0d4u: goto label_14f0d4;
        case 0x14f0e8u: goto label_14f0e8;
        case 0x14f14cu: goto label_14f14c;
        case 0x14f16cu: goto label_14f16c;
        case 0x14f190u: goto label_14f190;
        case 0x14f1b0u: goto label_14f1b0;
        case 0x14f1e4u: goto label_14f1e4;
        case 0x14f204u: goto label_14f204;
        case 0x14f234u: goto label_14f234;
        case 0x14f284u: goto label_14f284;
        case 0x14f2b4u: goto label_14f2b4;
        case 0x14f2c0u: goto label_14f2c0;
        case 0x14f4ccu: goto label_14f4cc;
        case 0x14f5dcu: goto label_14f5dc;
        default: break;
    }

    ctx->pc = 0x14f020u;

    // 0x14f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f034: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x14f038: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f03c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f040: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F040u;
    SET_GPR_U32(ctx, 31, 0x14F048u);
    ctx->pc = 0x14F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F040u;
    // 0x14f044: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F040u, 0x14F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F048u;
label_14f048:
    // 0x14f048: 0x8e250184  lw          $a1, 0x184($s1)
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14f04c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x14f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x14f050: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14f050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14f054: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14f058: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x14f058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14f05c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14f05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14f060: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x14f060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x14f064: 0xae300694  sw          $s0, 0x694($s1)
    ctx->pc = 0x14f064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 16));
    // 0x14f068: 0x14800095  bnez        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x14F068u;
    {
        const bool branch_taken_0x14f068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F068u;
        // 0x14f06c: 0xae250184  sw          $a1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f068) {
            ctx->pc = 0x14F2C0u;
            goto label_14f2c0;
        }
    }
    ctx->pc = 0x14F070u;
    // 0x14f070: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f074: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14f078: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F078u;
    {
        const bool branch_taken_0x14f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f078) {
            ctx->pc = 0x14F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F078u;
            // 0x14f07c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F098u;
            goto label_14f098;
        }
    }
    ctx->pc = 0x14F080u;
    // 0x14f080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f084: 0xc053e6e  jal         func_14F9B8
    ctx->pc = 0x14F084u;
    SET_GPR_U32(ctx, 31, 0x14F08Cu);
    ctx->pc = 0x14F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F084u;
    // 0x14f088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9B8u, 0x14F084u, 0x14F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F08Cu;
label_14f08c:
    // 0x14f08c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14F08Cu;
    {
        const bool branch_taken_0x14f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F08Cu;
        // 0x14f090: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f08c) {
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F094u;
    // 0x14f094: 0x0  nop
    ctx->pc = 0x14f094u;
    // NOP
label_14f098:
    // 0x14f098: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14f09c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F09Cu;
    {
        const bool branch_taken_0x14f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f09c) {
            ctx->pc = 0x14F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F09Cu;
            // 0x14f0a0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F0B8u;
            goto label_14f0b8;
        }
    }
    ctx->pc = 0x14F0A4u;
    // 0x14f0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0a8: 0xc053e6e  jal         func_14F9B8
    ctx->pc = 0x14F0A8u;
    SET_GPR_U32(ctx, 31, 0x14F0B0u);
    ctx->pc = 0x14F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0A8u;
    // 0x14f0ac: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9B8u, 0x14F0A8u, 0x14F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0B0u;
label_14f0b0:
    // 0x14f0b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14F0B0u;
    {
        const bool branch_taken_0x14f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0B0u;
        // 0x14f0b4: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0b0) {
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F0B8u;
label_14f0b8:
    // 0x14f0b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14f0bc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F0BCu;
    {
        const bool branch_taken_0x14f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0bc) {
            ctx->pc = 0x14F0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0BCu;
            // 0x14f0c0: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F0C4u;
    // 0x14f0c4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f0c8: 0x8e2507f0  lw          $a1, 0x7F0($s1)
    ctx->pc = 0x14f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x14f0cc: 0xc058562  jal         func_161588
    ctx->pc = 0x14F0CCu;
    SET_GPR_U32(ctx, 31, 0x14F0D4u);
    ctx->pc = 0x14F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0CCu;
    // 0x14f0d0: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x14F0CCu, 0x14F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0D4u;
label_14f0d4:
    // 0x14f0d4: 0x8e24076c  lw          $a0, 0x76C($s1)
    ctx->pc = 0x14f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1900)));
    // 0x14f0d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F0D8u;
    {
        const bool branch_taken_0x14f0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f0d8) {
            ctx->pc = 0x14F0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0D8u;
            // 0x14f0dc: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F0ECu;
            goto label_14f0ec;
        }
    }
    ctx->pc = 0x14F0E0u;
    // 0x14f0e0: 0xc061944  jal         func_186510
    ctx->pc = 0x14F0E0u;
    SET_GPR_U32(ctx, 31, 0x14F0E8u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x14F0E0u, 0x14F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0E8u;
label_14f0e8:
    // 0x14f0e8: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_14f0ec:
    // 0x14f0ec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x14f0f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f0f4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14F0F4u;
    {
        const bool branch_taken_0x14f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f0f4) {
            ctx->pc = 0x14F0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F0F4u;
            // 0x14f0f8: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F0FCu;
    // 0x14f0fc: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f100: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x14f104: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x14f104u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x14f108: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f10c: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x14f10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14f110: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F110u;
    {
        const bool branch_taken_0x14f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f110) {
            ctx->pc = 0x14F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F110u;
            // 0x14f114: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F124u;
            goto label_14f124;
        }
    }
    ctx->pc = 0x14F118u;
    // 0x14f118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f11c: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x14f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
    // 0x14f120: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_14f124:
    // 0x14f124: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14f128: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14f128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14f12c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F12Cu;
    {
        const bool branch_taken_0x14f12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f12c) {
            ctx->pc = 0x14F130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F12Cu;
            // 0x14f130: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F150u;
            goto label_14f150;
        }
    }
    ctx->pc = 0x14F134u;
    // 0x14f134: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14f138: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x14f138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x14f13c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F13Cu;
    {
        const bool branch_taken_0x14f13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f13c) {
            ctx->pc = 0x14F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F13Cu;
            // 0x14f140: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F150u;
            goto label_14f150;
        }
    }
    ctx->pc = 0x14F144u;
    // 0x14f144: 0xc053dbc  jal         func_14F6F0
    ctx->pc = 0x14F144u;
    SET_GPR_U32(ctx, 31, 0x14F14Cu);
    ctx->pc = 0x14F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F144u;
    // 0x14f148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F6F0u, 0x14F144u, 0x14F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F14Cu;
label_14f14c:
    // 0x14f14c: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x14f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_14f150:
    // 0x14f150: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14f154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f158: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F158u;
    {
        const bool branch_taken_0x14f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f158) {
            ctx->pc = 0x14F15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F158u;
            // 0x14f15c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F178u;
            goto label_14f178;
        }
    }
    ctx->pc = 0x14F160u;
    // 0x14f160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f164: 0xc053ec8  jal         func_14FB20
    ctx->pc = 0x14F164u;
    SET_GPR_U32(ctx, 31, 0x14F16Cu);
    ctx->pc = 0x14F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F164u;
    // 0x14f168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB20u, 0x14F164u, 0x14F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F16Cu;
label_14f16c:
    // 0x14f16c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x14F16Cu;
    {
        const bool branch_taken_0x14f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F16Cu;
        // 0x14f170: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f16c) {
            ctx->pc = 0x14F2B8u;
            goto label_14f2b8;
        }
    }
    ctx->pc = 0x14F174u;
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
label_14f178:
    // 0x14f178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f17c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F17Cu;
    {
        const bool branch_taken_0x14f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f17c) {
            ctx->pc = 0x14F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F17Cu;
            // 0x14f180: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F198u;
            goto label_14f198;
        }
    }
    ctx->pc = 0x14F184u;
    // 0x14f184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f188: 0xc053ec8  jal         func_14FB20
    ctx->pc = 0x14F188u;
    SET_GPR_U32(ctx, 31, 0x14F190u);
    ctx->pc = 0x14F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F188u;
    // 0x14f18c: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB20u, 0x14F188u, 0x14F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F190u;
label_14f190:
    // 0x14f190: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14F190u;
    {
        const bool branch_taken_0x14f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F190u;
        // 0x14f194: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f190) {
            ctx->pc = 0x14F2B8u;
            goto label_14f2b8;
        }
    }
    ctx->pc = 0x14F198u;
label_14f198:
    // 0x14f198: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f19c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14F19Cu;
    {
        const bool branch_taken_0x14f19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f19c) {
            ctx->pc = 0x14F1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F19Cu;
            // 0x14f1a0: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1F0u;
            goto label_14f1f0;
        }
    }
    ctx->pc = 0x14F1A4u;
    // 0x14f1a4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1a8: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F1A8u;
    SET_GPR_U32(ctx, 31, 0x14F1B0u);
    ctx->pc = 0x14F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1A8u;
    // 0x14f1ac: 0x8e300810  lw          $s0, 0x810($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F1A8u, 0x14F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1B0u;
label_14f1b0:
    // 0x14f1b0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f1b4: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f1b8: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f1bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F1BCu;
    {
        const bool branch_taken_0x14f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f1bc) {
            ctx->pc = 0x14F1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1BCu;
            // 0x14f1c0: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F1D4u;
            goto label_14f1d4;
        }
    }
    ctx->pc = 0x14F1C4u;
    // 0x14f1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1c8: 0x720210c8  pmaxw       $v0, $s0, $v0
    ctx->pc = 0x14f1c8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x14f1cc: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f1d0: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_14f1d4:
    // 0x14f1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1d8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1dc: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F1DCu;
    SET_GPR_U32(ctx, 31, 0x14F1E4u);
    ctx->pc = 0x14F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1DCu;
    // 0x14f1e0: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F1DCu, 0x14F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1E4u;
label_14f1e4:
    // 0x14f1e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x14F1E4u;
    {
        const bool branch_taken_0x14f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1E4u;
        // 0x14f1e8: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1e4) {
            ctx->pc = 0x14F2B8u;
            goto label_14f2b8;
        }
    }
    ctx->pc = 0x14F1ECu;
    // 0x14f1ec: 0x0  nop
    ctx->pc = 0x14f1ecu;
    // NOP
label_14f1f0:
    // 0x14f1f0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F1F0u;
    {
        const bool branch_taken_0x14f1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f1f0) {
            ctx->pc = 0x14F1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F1F0u;
            // 0x14f1f4: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F238u;
            goto label_14f238;
        }
    }
    ctx->pc = 0x14F1F8u;
    // 0x14f1f8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f1fc: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F1FCu;
    SET_GPR_U32(ctx, 31, 0x14F204u);
    ctx->pc = 0x14F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1FCu;
    // 0x14f200: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F1FCu, 0x14F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F204u;
label_14f204:
    // 0x14f204: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f208: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f20c: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f210: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F210u;
    {
        const bool branch_taken_0x14f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f210) {
            ctx->pc = 0x14F214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F210u;
            // 0x14f214: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F224u;
            goto label_14f224;
        }
    }
    ctx->pc = 0x14F218u;
    // 0x14f218: 0x721010c8  pmaxw       $v0, $s0, $s0
    ctx->pc = 0x14f218u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x14f21c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f220: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_14f224:
    // 0x14f224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f228: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f22c: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F22Cu;
    SET_GPR_U32(ctx, 31, 0x14F234u);
    ctx->pc = 0x14F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F22Cu;
    // 0x14f230: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F22Cu, 0x14F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F234u;
label_14f234:
    // 0x14f234: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_14f238:
    // 0x14f238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F238u;
    {
        const bool branch_taken_0x14f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F238u;
        // 0x14f23c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f238) {
            ctx->pc = 0x14F248u;
            goto label_14f248;
        }
    }
    ctx->pc = 0x14F240u;
    // 0x14f240: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14F240u;
    {
        const bool branch_taken_0x14f240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F240u;
        // 0x14f244: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f240) {
            ctx->pc = 0x14F2B4u;
            goto label_14f2b4;
        }
    }
    ctx->pc = 0x14F248u;
label_14f248:
    // 0x14f248: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f24c: 0x8c620c10  lw          $v0, 0xC10($v1)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3088)));
    // 0x14f250: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F250u;
    {
        const bool branch_taken_0x14f250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F250u;
        // 0x14f254: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f250) {
            ctx->pc = 0x14F268u;
            goto label_14f268;
        }
    }
    ctx->pc = 0x14F258u;
    // 0x14f258: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14f25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F25Cu;
    {
        const bool branch_taken_0x14f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F25Cu;
        // 0x14f260: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f25c) {
            ctx->pc = 0x14F26Cu;
            goto label_14f26c;
        }
    }
    ctx->pc = 0x14F264u;
    // 0x14f264: 0x0  nop
    ctx->pc = 0x14f264u;
    // NOP
label_14f268:
    // 0x14f268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f26c:
    // 0x14f26c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f270: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x14f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14f274: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F274u;
    {
        const bool branch_taken_0x14f274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F274u;
        // 0x14f278: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f274) {
            ctx->pc = 0x14F2B8u;
            goto label_14f2b8;
        }
    }
    ctx->pc = 0x14F27Cu;
    // 0x14f27c: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14F27Cu;
    SET_GPR_U32(ctx, 31, 0x14F284u);
    ctx->pc = 0x14F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F27Cu;
    // 0x14f280: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14F27Cu, 0x14F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F284u;
label_14f284:
    // 0x14f284: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14f288: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14f28c: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14f28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14f290: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F290u;
    {
        const bool branch_taken_0x14f290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f290) {
            ctx->pc = 0x14F294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F290u;
            // 0x14f294: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F2A4u;
            goto label_14f2a4;
        }
    }
    ctx->pc = 0x14F298u;
    // 0x14f298: 0x721010c8  pmaxw       $v0, $s0, $s0
    ctx->pc = 0x14f298u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 16)));
    // 0x14f29c: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f2a0: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_14f2a4:
    // 0x14f2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2a8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14f2ac: 0xc0585d0  jal         func_161740
    ctx->pc = 0x14F2ACu;
    SET_GPR_U32(ctx, 31, 0x14F2B4u);
    ctx->pc = 0x14F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2ACu;
    // 0x14f2b0: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161740u, 0x14F2ACu, 0x14F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2B4u;
label_14f2b4:
    // 0x14f2b4: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14f2b8:
    // 0x14f2b8: 0xc058602  jal         func_161808
    ctx->pc = 0x14F2B8u;
    SET_GPR_U32(ctx, 31, 0x14F2C0u);
    ctx->pc = 0x14F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2B8u;
    // 0x14f2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161808u, 0x14F2B8u, 0x14F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C0u;
label_14f2c0:
    // 0x14f2c0: 0x262406dc  addiu       $a0, $s1, 0x6DC
    ctx->pc = 0x14f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x14f2c4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f2c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F2C8u;
    {
        const bool branch_taken_0x14f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2C8u;
        // 0x14f2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2c8) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2D0u;
    // 0x14f2d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f2d4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F2D4u;
    {
        const bool branch_taken_0x14f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D4u;
        // 0x14f2d8: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d4) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F2DCu;
    // 0x14f2dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14F2DCu;
    {
        const bool branch_taken_0x14f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2DCu;
        // 0x14f2e0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2dc) {
            ctx->pc = 0x14F368u;
            goto label_14f368;
        }
    }
    ctx->pc = 0x14F2E4u;
    // 0x14f2e4: 0x0  nop
    ctx->pc = 0x14f2e4u;
    // NOP
label_14f2e8:
    // 0x14f2e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f2ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14F2ECu;
    {
        const bool branch_taken_0x14f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2ECu;
        // 0x14f2f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2ec) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F2F4u;
    // 0x14f2f4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14F2F4u;
    {
        const bool branch_taken_0x14f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2F4u;
        // 0x14f2f8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2f4) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F2FCu;
    // 0x14f2fc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f300: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x14F300u;
    {
        const bool branch_taken_0x14f300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F300u;
        // 0x14f304: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f300) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F308u;
    // 0x14f308: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f30c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f314: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F314u;
    {
        const bool branch_taken_0x14f314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F314u;
        // 0x14f318: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f314) {
            ctx->pc = 0x14F378u;
            goto label_14f378;
        }
    }
    ctx->pc = 0x14F31Cu;
    // 0x14f31c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f320: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f324: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f328: 0x54a00020  bnel        $a1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F328u;
            // 0x14f32c: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F3ACu;
            goto label_14f3ac;
        }
    }
    ctx->pc = 0x14F330u;
    // 0x14f330: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f334: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F334u;
    {
        const bool branch_taken_0x14f334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f334) {
            ctx->pc = 0x14F338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F334u;
            // 0x14f338: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F368u;
            goto label_14f368;
        }
    }
    ctx->pc = 0x14F33Cu;
    // 0x14f33c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f340: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F340u;
    {
        const bool branch_taken_0x14f340 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F340u;
        // 0x14f344: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f340) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F348u;
    // 0x14f348: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f34c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F34Cu;
        // 0x14f350: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f354u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f358: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f35c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F35Cu;
    {
        const bool branch_taken_0x14f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F35Cu;
        // 0x14f360: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f35c) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F364u;
    // 0x14f364: 0x0  nop
    ctx->pc = 0x14f364u;
    // NOP
label_14f368:
    // 0x14f368: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f36c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f370: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F378u;
label_14f378:
    // 0x14f378: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14f37c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f380: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F380u;
    {
        const bool branch_taken_0x14f380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F380u;
        // 0x14f384: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f380) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F388u;
    // 0x14f388: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x14f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14f38c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F390u;
    {
        const bool branch_taken_0x14f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F390u;
        // 0x14f394: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f390) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F398u;
    // 0x14f398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f39c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f39cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f3a0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f3a4: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x14f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_14f3a8:
    // 0x14f3a8: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_14f3ac:
    // 0x14f3ac: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x14f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x14f3b0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x14F3B0u;
    {
        const bool branch_taken_0x14f3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3B0u;
        // 0x14f3b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3b0) {
            ctx->pc = 0x14F5E0u;
            goto label_14f5e0;
        }
    }
    ctx->pc = 0x14F3B8u;
    // 0x14f3b8: 0x2624071c  addiu       $a0, $s1, 0x71C
    ctx->pc = 0x14f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
    // 0x14f3bc: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f3c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F3C0u;
    {
        const bool branch_taken_0x14f3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C0u;
        // 0x14f3c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c0) {
            ctx->pc = 0x14F3E8u;
            goto label_14f3e8;
        }
    }
    ctx->pc = 0x14F3C8u;
    // 0x14f3c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f3cc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14F3CCu;
    {
        const bool branch_taken_0x14f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3CCu;
        // 0x14f3d0: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3cc) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F3D4u;
    // 0x14f3d4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f3d8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f3dc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f3e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14F3E0u;
    {
        const bool branch_taken_0x14f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e0) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F3E8u;
label_14f3e8:
    // 0x14f3e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f3ec: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14F3ECu;
    {
        const bool branch_taken_0x14f3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3ECu;
        // 0x14f3f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3ec) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F3F4u;
    // 0x14f3f4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f400: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F400u;
    {
        const bool branch_taken_0x14f400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F400u;
        // 0x14f404: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f400) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F408u;
    // 0x14f408: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f40c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f414: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F414u;
    {
        const bool branch_taken_0x14f414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F414u;
        // 0x14f418: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f414) {
            ctx->pc = 0x14F478u;
            goto label_14f478;
        }
    }
    ctx->pc = 0x14F41Cu;
    // 0x14f41c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f420: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f424: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f428: 0x54a00024  bnel        $a1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x14F428u;
    {
        const bool branch_taken_0x14f428 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f428) {
            ctx->pc = 0x14F42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F428u;
            // 0x14f42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            goto label_14f4bc;
        }
    }
    ctx->pc = 0x14F430u;
    // 0x14f430: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f434: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F434u;
    {
        const bool branch_taken_0x14f434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f434) {
            ctx->pc = 0x14F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F434u;
            // 0x14f438: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F468u;
            goto label_14f468;
        }
    }
    ctx->pc = 0x14F43Cu;
    // 0x14f43c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f440: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F440u;
        // 0x14f444: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f44c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F44Cu;
    {
        const bool branch_taken_0x14f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f44c) {
            ctx->pc = 0x14F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F44Cu;
            // 0x14f450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            goto label_14f4bc;
        }
    }
    ctx->pc = 0x14F454u;
    // 0x14f454: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f458: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f458u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f45c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f460: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F460u;
    {
        const bool branch_taken_0x14f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F460u;
        // 0x14f464: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f460) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F468u;
label_14f468:
    // 0x14f468: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f46c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f470: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14F470u;
    {
        const bool branch_taken_0x14f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F470u;
        // 0x14f474: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f470) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F478u;
label_14f478:
    // 0x14f478: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x14f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14f47c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f480: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F480u;
    {
        const bool branch_taken_0x14f480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F480u;
        // 0x14f484: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f480) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F488u;
    // 0x14f488: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14f48c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f490: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F490u;
            // 0x14f494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F4BCu;
            goto label_14f4bc;
        }
    }
    ctx->pc = 0x14F498u;
    // 0x14f498: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f49c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f4a0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f4a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f4a4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f4a8: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x14f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_14f4ac:
    // 0x14f4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4ACu;
    {
        const bool branch_taken_0x14f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4ACu;
        // 0x14f4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ac) {
            ctx->pc = 0x14F4BCu;
            goto label_14f4bc;
        }
    }
    ctx->pc = 0x14F4B4u;
    // 0x14f4b4: 0x0  nop
    ctx->pc = 0x14f4b4u;
    // NOP
label_14f4b8:
    // 0x14f4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f4bc:
    // 0x14f4bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4BCu;
    {
        const bool branch_taken_0x14f4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4BCu;
        // 0x14f4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4bc) {
            ctx->pc = 0x14F4CCu;
            goto label_14f4cc;
        }
    }
    ctx->pc = 0x14F4C4u;
    // 0x14f4c4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x14F4C4u;
    SET_GPR_U32(ctx, 31, 0x14F4CCu);
    ctx->pc = 0x14F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4C4u;
    // 0x14f4c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x14F4C4u, 0x14F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4CCu;
label_14f4cc:
    // 0x14f4cc: 0x2624075c  addiu       $a0, $s1, 0x75C
    ctx->pc = 0x14f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x14f4d0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f4d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F4D4u;
    {
        const bool branch_taken_0x14f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4D4u;
        // 0x14f4d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4d4) {
            ctx->pc = 0x14F4F8u;
            goto label_14f4f8;
        }
    }
    ctx->pc = 0x14F4DCu;
    // 0x14f4dc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x14F4DCu;
    {
        const bool branch_taken_0x14f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4DCu;
        // 0x14f4e0: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4dc) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F4E4u;
    // 0x14f4e4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f4e8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f4ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f4f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14F4F0u;
    {
        const bool branch_taken_0x14f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F0u;
        // 0x14f4f4: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f0) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F4F8u;
label_14f4f8:
    // 0x14f4f8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x14f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14f4fc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x14F4FCu;
    {
        const bool branch_taken_0x14f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4FCu;
        // 0x14f500: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4fc) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F504u;
    // 0x14f504: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14F504u;
    {
        const bool branch_taken_0x14f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F504u;
        // 0x14f508: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f504) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F50Cu;
    // 0x14f50c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14f510: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F510u;
    {
        const bool branch_taken_0x14f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F510u;
        // 0x14f514: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f510) {
            ctx->pc = 0x14F5C8u;
            goto label_14f5c8;
        }
    }
    ctx->pc = 0x14F518u;
    // 0x14f518: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f51c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x14f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x14f520: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f524: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F524u;
    {
        const bool branch_taken_0x14f524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F524u;
        // 0x14f528: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f524) {
            ctx->pc = 0x14F588u;
            goto label_14f588;
        }
    }
    ctx->pc = 0x14F52Cu;
    // 0x14f52c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x14f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f530: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14f534: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x14f534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14f538: 0x54a00024  bnel        $a1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x14F538u;
    {
        const bool branch_taken_0x14f538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f538) {
            ctx->pc = 0x14F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F538u;
            // 0x14f53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            goto label_14f5cc;
        }
    }
    ctx->pc = 0x14F540u;
    // 0x14f540: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14f544: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14F544u;
    {
        const bool branch_taken_0x14f544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f544) {
            ctx->pc = 0x14F548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F544u;
            // 0x14f548: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F578u;
            goto label_14f578;
        }
    }
    ctx->pc = 0x14F54Cu;
    // 0x14f54c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x14f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x14f550: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14F550u;
    {
        const bool branch_taken_0x14f550 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F550u;
        // 0x14f554: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f550) {
            ctx->pc = 0x14F5BCu;
            goto label_14f5bc;
        }
    }
    ctx->pc = 0x14F558u;
    // 0x14f558: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x14f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x14f55c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x14F55Cu;
    {
        const bool branch_taken_0x14f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f55c) {
            ctx->pc = 0x14F560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F55Cu;
            // 0x14f560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            goto label_14f5cc;
        }
    }
    ctx->pc = 0x14F564u;
    // 0x14f564: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f568: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x14f568u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x14f56c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f570: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F570u;
    {
        const bool branch_taken_0x14f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F570u;
        // 0x14f574: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f570) {
            ctx->pc = 0x14F5BCu;
            goto label_14f5bc;
        }
    }
    ctx->pc = 0x14F578u;
label_14f578:
    // 0x14f578: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f57c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f580: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14F580u;
    {
        const bool branch_taken_0x14f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F580u;
        // 0x14f584: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f580) {
            ctx->pc = 0x14F5BCu;
            goto label_14f5bc;
        }
    }
    ctx->pc = 0x14F588u;
label_14f588:
    // 0x14f588: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14f58c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f590: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14F590u;
    {
        const bool branch_taken_0x14f590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F590u;
        // 0x14f594: 0xac830038  sw          $v1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f590) {
            ctx->pc = 0x14F5BCu;
            goto label_14f5bc;
        }
    }
    ctx->pc = 0x14F598u;
    // 0x14f598: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14f59c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f5a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14F5A0u;
    {
        const bool branch_taken_0x14f5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f5a0) {
            ctx->pc = 0x14F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F5A0u;
            // 0x14f5a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F5CCu;
            goto label_14f5cc;
        }
    }
    ctx->pc = 0x14F5A8u;
    // 0x14f5a8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14f5ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f5b0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f5b0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f5b4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f5b8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x14f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_14f5bc:
    // 0x14f5bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F5BCu;
    {
        const bool branch_taken_0x14f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5BCu;
        // 0x14f5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5bc) {
            ctx->pc = 0x14F5CCu;
            goto label_14f5cc;
        }
    }
    ctx->pc = 0x14F5C4u;
    // 0x14f5c4: 0x0  nop
    ctx->pc = 0x14f5c4u;
    // NOP
label_14f5c8:
    // 0x14f5c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f5cc:
    // 0x14f5cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F5CCu;
    {
        const bool branch_taken_0x14f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5CCu;
        // 0x14f5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5cc) {
            ctx->pc = 0x14F5DCu;
            goto label_14f5dc;
        }
    }
    ctx->pc = 0x14F5D4u;
    // 0x14f5d4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x14F5D4u;
    SET_GPR_U32(ctx, 31, 0x14F5DCu);
    ctx->pc = 0x14F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5D4u;
    // 0x14f5d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x14F5D4u, 0x14F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5DCu;
label_14f5dc:
    // 0x14f5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f5e0:
    // 0x14f5e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14f5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5E8u;
        // 0x14f5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F5F0u;
}
