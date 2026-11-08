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

// Function: entry_0015f2a8
// Address: 0x15f2a8 - 0x15f460
void entry_0015f2a8_0x15f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f2a8_0x15f2a8");
#endif

    switch (ctx->pc) {
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f324u: goto label_15f324;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f354u: goto label_15f354;
        case 0x15f374u: goto label_15f374;
        case 0x15f384u: goto label_15f384;
        case 0x15f3a0u: goto label_15f3a0;
        default: break;
    }

    ctx->pc = 0x15f2a8u;

label_15f2a8:
    // 0x15f2a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f2ac:
    // 0x15f2ac: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f2b0:
    // 0x15f2b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f2b4:
    // 0x15f2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f2b8:
    // 0x15f2b8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f2bc:
    // 0x15f2bc: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15f2c0:
    // 0x15f2c0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f2c4:
    // 0x15f2c4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f2c8:
    // 0x15f2c8: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x15f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_15f2cc:
    // 0x15f2cc: 0xaeb00f30  sw          $s0, 0xF30($s5)
    ctx->pc = 0x15f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3888), GPR_U32(ctx, 16));
label_15f2d0:
    // 0x15f2d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f2d4:
    // 0x15f2d4: 0x40f809  jalr        $v0
label_15f2d8:
    if (ctx->pc == 0x15F2D8u) {
        ctx->pc = 0x15F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D4u;
        // 0x15f2d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F2DCu;
        goto label_15f2dc;
    }
    ctx->pc = 0x15F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F2DCu);
        ctx->pc = 0x15F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D4u;
        // 0x15f2d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2D4u, 0x15F2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F2DCu;
label_15f2dc:
    // 0x15f2dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f2e0:
    // 0x15f2e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f2e4:
    // 0x15f2e4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f2e8:
    // 0x15f2e8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f2ec:
    // 0x15f2ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15f2f0:
    // 0x15f2f0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f2f4:
    // 0x15f2f4: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15f2f8:
    // 0x15f2f8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f2fc:
    // 0x15f2fc: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f300:
    // 0x15f300: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15f304:
    // 0x15f304: 0xe0f809  jalr        $a3
label_15f308:
    if (ctx->pc == 0x15F308u) {
        ctx->pc = 0x15F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F304u;
        // 0x15f308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F30Cu;
        goto label_15f30c;
    }
    ctx->pc = 0x15F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15F30Cu);
        ctx->pc = 0x15F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F304u;
        // 0x15f308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F304u, 0x15F30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F30Cu;
label_15f30c:
    // 0x15f30c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15f310:
    // 0x15f310: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f314:
    // 0x15f314: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f318:
    // 0x15f318: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15f318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15f31c:
    // 0x15f31c: 0xc06bd28  jal         func_1AF4A0
label_15f320:
    if (ctx->pc == 0x15F320u) {
        ctx->pc = 0x15F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F31Cu;
        // 0x15f320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F324u;
        goto label_15f324;
    }
    ctx->pc = 0x15F31Cu;
    SET_GPR_U32(ctx, 31, 0x15F324u);
    ctx->pc = 0x15F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F31Cu;
    // 0x15f320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F31Cu, 0x15F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F324u;
label_15f324:
    // 0x15f324: 0xc06bd20  jal         func_1AF480
label_15f328:
    if (ctx->pc == 0x15F328u) {
        ctx->pc = 0x15F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F324u;
        // 0x15f328: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F32Cu;
        goto label_15f32c;
    }
    ctx->pc = 0x15F324u;
    SET_GPR_U32(ctx, 31, 0x15F32Cu);
    ctx->pc = 0x15F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F324u;
    // 0x15f328: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F324u, 0x15F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F32Cu;
label_15f32c:
    // 0x15f32c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f330:
    // 0x15f330: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15f334:
    // 0x15f334: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f338:
    // 0x15f338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f33c:
    // 0x15f33c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f340:
    // 0x15f340: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15f344:
    // 0x15f344: 0xc0682b2  jal         func_1A0AC8
label_15f348:
    if (ctx->pc == 0x15F348u) {
        ctx->pc = 0x15F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F344u;
        // 0x15f348: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F34Cu;
        goto label_15f34c;
    }
    ctx->pc = 0x15F344u;
    SET_GPR_U32(ctx, 31, 0x15F34Cu);
    ctx->pc = 0x15F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F344u;
    // 0x15f348: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F344u, 0x15F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F34Cu;
label_15f34c:
    // 0x15f34c: 0xc0682b6  jal         func_1A0AD8
label_15f350:
    if (ctx->pc == 0x15F350u) {
        ctx->pc = 0x15F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F34Cu;
        // 0x15f350: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F354u;
        goto label_15f354;
    }
    ctx->pc = 0x15F34Cu;
    SET_GPR_U32(ctx, 31, 0x15F354u);
    ctx->pc = 0x15F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F34Cu;
    // 0x15f350: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F34Cu, 0x15F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F354u;
label_15f354:
    // 0x15f354: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f358:
    // 0x15f358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f35c:
    // 0x15f35c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15f360:
    // 0x15f360: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f364:
    // 0x15f364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f368:
    // 0x15f368: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15f368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f36c:
    // 0x15f36c: 0xc062cb0  jal         func_18B2C0
label_15f370:
    if (ctx->pc == 0x15F370u) {
        ctx->pc = 0x15F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F36Cu;
        // 0x15f370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F374u;
        goto label_15f374;
    }
    ctx->pc = 0x15F36Cu;
    SET_GPR_U32(ctx, 31, 0x15F374u);
    ctx->pc = 0x15F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F36Cu;
    // 0x15f370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F36Cu, 0x15F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F374u;
label_15f374:
    // 0x15f374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f378:
    // 0x15f378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f37c:
    // 0x15f37c: 0xc06825c  jal         func_1A0970
label_15f380:
    if (ctx->pc == 0x15F380u) {
        ctx->pc = 0x15F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F37Cu;
        // 0x15f380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F384u;
        goto label_15f384;
    }
    ctx->pc = 0x15F37Cu;
    SET_GPR_U32(ctx, 31, 0x15F384u);
    ctx->pc = 0x15F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F37Cu;
    // 0x15f380: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F37Cu, 0x15F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F384u;
label_15f384:
    // 0x15f384: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f388:
    // 0x15f388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f38c:
    // 0x15f38c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f390:
    // 0x15f390: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f394:
    // 0x15f394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f398:
    // 0x15f398: 0x60f809  jalr        $v1
label_15f39c:
    if (ctx->pc == 0x15F39Cu) {
        ctx->pc = 0x15F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F398u;
        // 0x15f39c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3A0u;
        goto label_15f3a0;
    }
    ctx->pc = 0x15F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F3A0u);
        ctx->pc = 0x15F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F398u;
        // 0x15f39c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F398u, 0x15F3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F3A0u;
label_15f3a0:
    // 0x15f3a0: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f3a4:
    // 0x15f3a4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f3a8:
    if (ctx->pc == 0x15F3A8u) {
        ctx->pc = 0x15F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3A4u;
        // 0x15f3a8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3ACu;
        goto label_15f3ac;
    }
    ctx->pc = 0x15F3A4u;
    {
        const bool branch_taken_0x15f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3A4u;
        // 0x15f3a8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3a4) {
            ctx->pc = 0x15F460u;
            return;
        }
    }
    ctx->pc = 0x15F3ACu;
label_15f3ac:
    // 0x15f3ac: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f3b0:
    // 0x15f3b0: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f3b4:
    // 0x15f3b4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f3b8:
    // 0x15f3b8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f3bc:
    // 0x15f3bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f3c0:
    // 0x15f3c0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f3c4:
    // 0x15f3c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f3c8:
    // 0x15f3c8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f3c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f3cc:
    // 0x15f3cc: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f3d0:
    // 0x15f3d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f3d4:
    // 0x15f3d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f3d8:
    // 0x15f3d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f3dc:
    // 0x15f3dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f3e0:
    // 0x15f3e0: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f3e4:
    // 0x15f3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f3e8:
    // 0x15f3e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f3ec:
    // 0x15f3ec: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f3f0:
    // 0x15f3f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f3f4:
    // 0x15f3f4: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f3f8:
    // 0x15f3f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f3f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f3fc:
    // 0x15f3fc: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f400:
    // 0x15f400: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f400u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f404:
    // 0x15f404: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f408:
    // 0x15f408: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f40c:
    // 0x15f40c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f410:
    // 0x15f410: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f414:
    // 0x15f414: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f414u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f418:
    // 0x15f418: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f418u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f41c:
    // 0x15f41c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f41cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f420:
    // 0x15f420: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f420u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f424:
    // 0x15f424: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f428:
    // 0x15f428: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f42c:
    // 0x15f42c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f430:
    // 0x15f430: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f434:
    // 0x15f434: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f438:
    // 0x15f438: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f43c:
    // 0x15f43c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f440:
    // 0x15f440: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f440u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f444:
    // 0x15f444: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f444u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f448:
    // 0x15f448: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f448u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f44c:
    // 0x15f44c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f450:
    // 0x15f450: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f454:
    // 0x15f454: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f454u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f458:
    // 0x15f458: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f45c:
    // 0x15f45c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15f460u;
}
