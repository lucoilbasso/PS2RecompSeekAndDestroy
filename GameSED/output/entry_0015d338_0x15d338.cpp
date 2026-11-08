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

// Function: entry_0015d338
// Address: 0x15d338 - 0x15d3a0
void entry_0015d338_0x15d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d338_0x15d338");
#endif

    switch (ctx->pc) {
        case 0x15d39cu: goto label_15d39c;
        default: break;
    }

    ctx->pc = 0x15d338u;

label_15d338:
    // 0x15d338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15d33c:
    // 0x15d33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d340:
    // 0x15d340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15d344:
    // 0x15d344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15d348:
    // 0x15d348: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_15d34c:
    // 0x15d34c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15d350:
    // 0x15d350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d354:
    // 0x15d354: 0x8c713630  lw          $s1, 0x3630($v1)
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
label_15d358:
    // 0x15d358: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x15d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_15d35c:
    // 0x15d35c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_15d360:
    // 0x15d360: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_15d364:
    if (ctx->pc == 0x15D364u) {
        ctx->pc = 0x15D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D360u;
        // 0x15d364: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D368u;
        goto label_15d368;
    }
    ctx->pc = 0x15D360u;
    {
        const bool branch_taken_0x15d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D360u;
        // 0x15d364: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d360) {
            ctx->pc = 0x15D3B0u;
            return;
        }
    }
    ctx->pc = 0x15D368u;
label_15d368:
    // 0x15d368: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15d36c:
    // 0x15d36c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_15d370:
    if (ctx->pc == 0x15D370u) {
        ctx->pc = 0x15D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D36Cu;
        // 0x15d370: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D374u;
        goto label_15d374;
    }
    ctx->pc = 0x15D36Cu;
    {
        const bool branch_taken_0x15d36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d36c) {
            ctx->pc = 0x15D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D36Cu;
            // 0x15d370: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D400u;
            return;
        }
    }
    ctx->pc = 0x15D374u;
label_15d374:
    // 0x15d374: 0x8e050164  lw          $a1, 0x164($s0)
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_15d378:
    // 0x15d378: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d37c:
    // 0x15d37c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d380:
    if (ctx->pc == 0x15D380u) {
        ctx->pc = 0x15D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D37Cu;
        // 0x15d380: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D384u;
        goto label_15d384;
    }
    ctx->pc = 0x15D37Cu;
    {
        const bool branch_taken_0x15d37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d37c) {
            ctx->pc = 0x15D380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D37Cu;
            // 0x15d380: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D3A0u;
            return;
        }
    }
    ctx->pc = 0x15D384u;
label_15d384:
    // 0x15d384: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d388:
    // 0x15d388: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d38c:
    // 0x15d38c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d390:
    // 0x15d390: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d394:
    // 0x15d394: 0x60f809  jalr        $v1
label_15d398:
    if (ctx->pc == 0x15D398u) {
        ctx->pc = 0x15D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D394u;
        // 0x15d398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D39Cu;
        goto label_15d39c;
    }
    ctx->pc = 0x15D394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D39Cu);
        ctx->pc = 0x15D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D394u;
        // 0x15d398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D394u, 0x15D39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D39Cu;
label_15d39c:
    // 0x15d39c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15d39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15d3a0u;
}
