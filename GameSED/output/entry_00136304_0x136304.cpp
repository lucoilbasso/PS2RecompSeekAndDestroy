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

// Function: entry_00136304
// Address: 0x136304 - 0x13635c
void entry_00136304_0x136304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136304_0x136304");
#endif

    switch (ctx->pc) {
        case 0x13634cu: goto label_13634c;
        default: break;
    }

    ctx->pc = 0x136304u;

    // 0x136304: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x136304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x136308: 0x12000074  beqz        $s0, . + 4 + (0x74 << 2)
    ctx->pc = 0x136308u;
    {
        const bool branch_taken_0x136308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x136308) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136310u;
    // 0x136310: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x136310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x136314: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x136314u;
    {
        const bool branch_taken_0x136314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136314) {
            ctx->pc = 0x136318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136314u;
            // 0x136318: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13637Cu;
            return;
        }
    }
    ctx->pc = 0x13631Cu;
    // 0x13631c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x13631cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136320: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x136320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x136324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x136324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x136328: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x136328u;
    {
        const bool branch_taken_0x136328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136328u;
        // 0x13632c: 0x3c120010  lui         $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136328) {
            ctx->pc = 0x136378u;
            return;
        }
    }
    ctx->pc = 0x136330u;
    // 0x136330: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136334: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x136334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x136338: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x136338u;
    {
        const bool branch_taken_0x136338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136338) {
            ctx->pc = 0x13633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136338u;
            // 0x13633c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13635Cu;
            return;
        }
    }
    ctx->pc = 0x136340u;
    // 0x136340: 0x260401fc  addiu       $a0, $s0, 0x1FC
    ctx->pc = 0x136340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x136344: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x136344u;
    SET_GPR_U32(ctx, 31, 0x13634Cu);
    ctx->pc = 0x136348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136344u;
    // 0x136348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x136344u, 0x13634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13634Cu;
label_13634c:
    // 0x13634c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136350: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x136350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x136354: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x136354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x136358: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x13635cu;
}
