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

// Function: entry_0015b188
// Address: 0x15b188 - 0x15b344
void entry_0015b188_0x15b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b188_0x15b188");
#endif

    switch (ctx->pc) {
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b200u: goto label_15b200;
        case 0x15b208u: goto label_15b208;
        case 0x15b228u: goto label_15b228;
        case 0x15b230u: goto label_15b230;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b268u: goto label_15b268;
        case 0x15b284u: goto label_15b284;
        default: break;
    }

    ctx->pc = 0x15b188u;

label_15b188:
    // 0x15b188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b18c:
    // 0x15b18c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b190:
    // 0x15b190: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b194:
    // 0x15b194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b198:
    // 0x15b198: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b19c:
    // 0x15b19c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15b1a0:
    // 0x15b1a0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b1a4:
    // 0x15b1a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b1a8:
    // 0x15b1a8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15b1ac:
    // 0x15b1ac: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15b1b0:
    // 0x15b1b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b1b4:
    // 0x15b1b4: 0x40f809  jalr        $v0
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B1BCu);
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B1B4u, 0x15B1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b1c0:
    // 0x15b1c0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b1c4:
    // 0x15b1c4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15b1c8:
    // 0x15b1c8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b1cc:
    // 0x15b1cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b1d0:
    // 0x15b1d0: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_15b1d4:
    // 0x15b1d4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b1d8:
    // 0x15b1d8: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15b1dc:
    // 0x15b1dc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b1e0:
    // 0x15b1e0: 0xe0f809  jalr        $a3
label_15b1e4:
    if (ctx->pc == 0x15B1E4u) {
        ctx->pc = 0x15B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E0u;
        // 0x15b1e4: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1E8u;
        goto label_15b1e8;
    }
    ctx->pc = 0x15B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15B1E8u);
        ctx->pc = 0x15B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E0u;
        // 0x15b1e4: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B1E0u, 0x15B1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B1E8u;
label_15b1e8:
    // 0x15b1e8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b1ec:
    // 0x15b1ec: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b1f0:
    // 0x15b1f0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b1f4:
    // 0x15b1f4: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15b1f8:
    // 0x15b1f8: 0xc06bd28  jal         func_1AF4A0
label_15b1fc:
    if (ctx->pc == 0x15B1FCu) {
        ctx->pc = 0x15B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1F8u;
        // 0x15b1fc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B200u;
        goto label_15b200;
    }
    ctx->pc = 0x15B1F8u;
    SET_GPR_U32(ctx, 31, 0x15B200u);
    ctx->pc = 0x15B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1F8u;
    // 0x15b1fc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B1F8u, 0x15B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B200u;
label_15b200:
    // 0x15b200: 0xc06bd20  jal         func_1AF480
label_15b204:
    if (ctx->pc == 0x15B204u) {
        ctx->pc = 0x15B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B200u;
        // 0x15b204: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B208u;
        goto label_15b208;
    }
    ctx->pc = 0x15B200u;
    SET_GPR_U32(ctx, 31, 0x15B208u);
    ctx->pc = 0x15B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B200u;
    // 0x15b204: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B200u, 0x15B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B208u;
label_15b208:
    // 0x15b208: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b20c:
    // 0x15b20c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15b210:
    // 0x15b210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b214:
    // 0x15b214: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b218:
    // 0x15b218: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b21c:
    // 0x15b21c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b220:
    // 0x15b220: 0xc0682b2  jal         func_1A0AC8
label_15b224:
    if (ctx->pc == 0x15B224u) {
        ctx->pc = 0x15B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B220u;
        // 0x15b224: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B228u;
        goto label_15b228;
    }
    ctx->pc = 0x15B220u;
    SET_GPR_U32(ctx, 31, 0x15B228u);
    ctx->pc = 0x15B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B220u;
    // 0x15b224: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B220u, 0x15B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B228u;
label_15b228:
    // 0x15b228: 0xc0682b6  jal         func_1A0AD8
label_15b22c:
    if (ctx->pc == 0x15B22Cu) {
        ctx->pc = 0x15B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B228u;
        // 0x15b22c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B230u;
        goto label_15b230;
    }
    ctx->pc = 0x15B228u;
    SET_GPR_U32(ctx, 31, 0x15B230u);
    ctx->pc = 0x15B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B228u;
    // 0x15b22c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B228u, 0x15B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B230u;
label_15b230:
    // 0x15b230: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_15b234:
    // 0x15b234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b238:
    // 0x15b238: 0x24c601c0  addiu       $a2, $a2, 0x1C0
    ctx->pc = 0x15b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
label_15b23c:
    // 0x15b23c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15b240:
    // 0x15b240: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x15b240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
label_15b244:
    // 0x15b244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b248:
    // 0x15b248: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15b248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b24c:
    // 0x15b24c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b250:
    // 0x15b250: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b254:
    // 0x15b254: 0xc062cb0  jal         func_18B2C0
label_15b258:
    if (ctx->pc == 0x15B258u) {
        ctx->pc = 0x15B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B254u;
        // 0x15b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B25Cu;
        goto label_15b25c;
    }
    ctx->pc = 0x15B254u;
    SET_GPR_U32(ctx, 31, 0x15B25Cu);
    ctx->pc = 0x15B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B254u;
    // 0x15b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B254u, 0x15B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B25Cu;
label_15b25c:
    // 0x15b25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b260:
    // 0x15b260: 0xc06825c  jal         func_1A0970
label_15b264:
    if (ctx->pc == 0x15B264u) {
        ctx->pc = 0x15B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B260u;
        // 0x15b264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B268u;
        goto label_15b268;
    }
    ctx->pc = 0x15B260u;
    SET_GPR_U32(ctx, 31, 0x15B268u);
    ctx->pc = 0x15B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B260u;
    // 0x15b264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B260u, 0x15B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B268u;
label_15b268:
    // 0x15b268: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b26c:
    // 0x15b26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b270:
    // 0x15b270: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b274:
    // 0x15b274: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b278:
    // 0x15b278: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b27c:
    // 0x15b27c: 0x60f809  jalr        $v1
label_15b280:
    if (ctx->pc == 0x15B280u) {
        ctx->pc = 0x15B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B27Cu;
        // 0x15b280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B284u;
        goto label_15b284;
    }
    ctx->pc = 0x15B27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B284u);
        ctx->pc = 0x15B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B27Cu;
        // 0x15b280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B27Cu, 0x15B284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B284u;
label_15b284:
    // 0x15b284: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b288:
    // 0x15b288: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b28c:
    if (ctx->pc == 0x15B28Cu) {
        ctx->pc = 0x15B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B288u;
        // 0x15b28c: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B290u;
        goto label_15b290;
    }
    ctx->pc = 0x15B288u;
    {
        const bool branch_taken_0x15b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B288u;
        // 0x15b28c: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b288) {
            ctx->pc = 0x15B344u;
            return;
        }
    }
    ctx->pc = 0x15B290u;
label_15b290:
    // 0x15b290: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b294:
    // 0x15b294: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b298:
    // 0x15b298: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b29c:
    // 0x15b29c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b2a0:
    // 0x15b2a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b2a4:
    // 0x15b2a4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b2a8:
    // 0x15b2a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b2ac:
    // 0x15b2ac: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b2b0:
    // 0x15b2b0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b2b4:
    // 0x15b2b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b2b8:
    // 0x15b2b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b2bc:
    // 0x15b2bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b2c0:
    // 0x15b2c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b2c4:
    // 0x15b2c4: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b2c8:
    // 0x15b2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b2cc:
    // 0x15b2cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b2d0:
    // 0x15b2d0: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b2d4:
    // 0x15b2d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b2d8:
    // 0x15b2d8: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b2dc:
    // 0x15b2dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b2dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b2e0:
    // 0x15b2e0: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b2e4:
    // 0x15b2e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b2e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b2e8:
    // 0x15b2e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b2ec:
    // 0x15b2ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b2ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b2f0:
    // 0x15b2f0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b2f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b2f4:
    // 0x15b2f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b2f8:
    // 0x15b2f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b2fc:
    // 0x15b2fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b2fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b300:
    // 0x15b300: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b300u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b304:
    // 0x15b304: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b304u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b308:
    // 0x15b308: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b30c:
    // 0x15b30c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b310:
    // 0x15b310: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b314:
    // 0x15b314: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b318:
    // 0x15b318: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b31c:
    // 0x15b31c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b320:
    // 0x15b320: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b324:
    // 0x15b324: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b324u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b328:
    // 0x15b328: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b328u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b32c:
    // 0x15b32c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b32cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b330:
    // 0x15b330: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b330u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b334:
    // 0x15b334: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b338:
    // 0x15b338: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b338u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b33c:
    // 0x15b33c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b340:
    // 0x15b340: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b340u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15b344u;
}
