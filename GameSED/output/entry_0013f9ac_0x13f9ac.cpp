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

// Function: entry_0013f9ac
// Address: 0x13f9ac - 0x13fa20
void entry_0013f9ac_0x13f9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f9ac_0x13f9ac");
#endif

    switch (ctx->pc) {
        case 0x13f9c0u: goto label_13f9c0;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9f0u: goto label_13f9f0;
        case 0x13fa1cu: goto label_13fa1c;
        default: break;
    }

    ctx->pc = 0x13f9acu;

label_13f9ac:
    // 0x13f9ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f9b0:
    // 0x13f9b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f9b4:
    // 0x13f9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f9b8:
    // 0x13f9b8: 0xc04fce4  jal         func_13F390
label_13f9bc:
    if (ctx->pc == 0x13F9BCu) {
        ctx->pc = 0x13F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B8u;
        // 0x13f9bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9C0u;
        goto label_13f9c0;
    }
    ctx->pc = 0x13F9B8u;
    SET_GPR_U32(ctx, 31, 0x13F9C0u);
    ctx->pc = 0x13F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9B8u;
    // 0x13f9bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13F9B8u, 0x13F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9C0u;
label_13f9c0:
    // 0x13f9c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f9c4:
    // 0x13f9c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13f9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f9c8:
    // 0x13f9c8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_13f9cc:
    // 0x13f9cc: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_13f9d0:
    // 0x13f9d0: 0xc05063e  jal         func_1418F8
label_13f9d4:
    if (ctx->pc == 0x13F9D4u) {
        ctx->pc = 0x13F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D0u;
        // 0x13f9d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9D8u;
        goto label_13f9d8;
    }
    ctx->pc = 0x13F9D0u;
    SET_GPR_U32(ctx, 31, 0x13F9D8u);
    ctx->pc = 0x13F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9D0u;
    // 0x13f9d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418F8u, 0x13F9D0u, 0x13F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_13f9dc:
    if (ctx->pc == 0x13F9DCu) {
        ctx->pc = 0x13F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D8u;
        // 0x13f9dc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9E0u;
        goto label_13f9e0;
    }
    ctx->pc = 0x13F9D8u;
    {
        const bool branch_taken_0x13f9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D8u;
        // 0x13f9dc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9d8) {
            ctx->pc = 0x13FA84u;
            return;
        }
    }
    ctx->pc = 0x13F9E0u;
label_13f9e0:
    // 0x13f9e0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f9e4:
    // 0x13f9e4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13f9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_13f9e8:
    // 0x13f9e8: 0xc061a46  jal         func_186918
label_13f9ec:
    if (ctx->pc == 0x13F9ECu) {
        ctx->pc = 0x13F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9E8u;
        // 0x13f9ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9F0u;
        goto label_13f9f0;
    }
    ctx->pc = 0x13F9E8u;
    SET_GPR_U32(ctx, 31, 0x13F9F0u);
    ctx->pc = 0x13F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9E8u;
    // 0x13f9ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F9E8u, 0x13F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9F0u;
label_13f9f0:
    // 0x13f9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f9f4:
    // 0x13f9f4: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_13f9f8:
    if (ctx->pc == 0x13F9F8u) {
        ctx->pc = 0x13F9FCu;
        goto label_13f9fc;
    }
    ctx->pc = 0x13F9F4u;
    {
        const bool branch_taken_0x13f9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9f4) {
            ctx->pc = 0x13FA84u;
            return;
        }
    }
    ctx->pc = 0x13F9FCu;
label_13f9fc:
    // 0x13f9fc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_13fa00:
    // 0x13fa00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_13fa04:
    if (ctx->pc == 0x13FA04u) {
        ctx->pc = 0x13FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA00u;
        // 0x13fa04: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA08u;
        goto label_13fa08;
    }
    ctx->pc = 0x13FA00u;
    {
        const bool branch_taken_0x13fa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA00u;
        // 0x13fa04: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa00) {
            ctx->pc = 0x13FA84u;
            return;
        }
    }
    ctx->pc = 0x13FA08u;
label_13fa08:
    // 0x13fa08: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_13fa0c:
    // 0x13fa0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13fa10:
    if (ctx->pc == 0x13FA10u) {
        ctx->pc = 0x13FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA0Cu;
        // 0x13fa10: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA14u;
        goto label_13fa14;
    }
    ctx->pc = 0x13FA0Cu;
    {
        const bool branch_taken_0x13fa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa0c) {
            ctx->pc = 0x13FA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FA0Cu;
            // 0x13fa10: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FA20u;
            return;
        }
    }
    ctx->pc = 0x13FA14u;
label_13fa14:
    // 0x13fa14: 0x40f809  jalr        $v0
label_13fa18:
    if (ctx->pc == 0x13FA18u) {
        ctx->pc = 0x13FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA14u;
        // 0x13fa18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA1Cu;
        goto label_13fa1c;
    }
    ctx->pc = 0x13FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FA1Cu);
        ctx->pc = 0x13FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA14u;
        // 0x13fa18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA14u, 0x13FA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13FA1Cu;
label_13fa1c:
    // 0x13fa1c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13fa1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13fa20u;
}
