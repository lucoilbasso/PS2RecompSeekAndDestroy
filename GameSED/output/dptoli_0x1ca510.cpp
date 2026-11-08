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

// Function: dptoli
// Address: 0x1ca510 - 0x1ca5ac
void dptoli_0x1ca510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x1ca510");
#endif

    switch (ctx->pc) {
        case 0x1ca528u: goto label_1ca528;
        default: break;
    }

    ctx->pc = 0x1ca510u;

    // 0x1ca510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca514: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1ca514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1ca518: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca51c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca520: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA520u;
    SET_GPR_U32(ctx, 31, 0x1CA528u);
    ctx->pc = 0x1CA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA520u;
    // 0x1ca524: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA520u, 0x1CA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA528u;
label_1ca528:
    // 0x1ca528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca52c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca530: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1ca530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1ca534: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CA534u;
    {
        const bool branch_taken_0x1ca534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA534u;
        // 0x1ca538: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca534) {
            ctx->pc = 0x1CA5A0u;
            goto label_1ca5a0;
        }
    }
    ctx->pc = 0x1CA53Cu;
    // 0x1ca53c: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA53Cu;
    {
        const bool branch_taken_0x1ca53c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA53Cu;
        // 0x1ca540: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca53c) {
            ctx->pc = 0x1CA5A4u;
            goto label_1ca5a4;
        }
    }
    ctx->pc = 0x1CA544u;
    // 0x1ca544: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1ca544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1ca548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA548u;
    {
        const bool branch_taken_0x1ca548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA548u;
        // 0x1ca54c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca548) {
            ctx->pc = 0x1CA56Cu;
            goto label_1ca56c;
        }
    }
    ctx->pc = 0x1CA550u;
    // 0x1ca550: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1ca550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca558: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA558u;
    {
        const bool branch_taken_0x1ca558 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1CA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA558u;
        // 0x1ca55c: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca558) {
            ctx->pc = 0x1CA5A4u;
            goto label_1ca5a4;
        }
    }
    ctx->pc = 0x1CA560u;
    // 0x1ca560: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA560u;
    {
        const bool branch_taken_0x1ca560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA560u;
        // 0x1ca564: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca560) {
            ctx->pc = 0x1CA580u;
            goto label_1ca580;
        }
    }
    ctx->pc = 0x1CA568u;
    // 0x1ca568: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ca56c:
    // 0x1ca56c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ca570: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca574: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA578u;
    {
        const bool branch_taken_0x1ca578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA578u;
        // 0x1ca57c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca578) {
            ctx->pc = 0x1CA5A0u;
            goto label_1ca5a0;
        }
    }
    ctx->pc = 0x1CA580u;
label_1ca580:
    // 0x1ca580: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1ca580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca584: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca588: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca58c: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1ca58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1ca590: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca594: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ca598: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1ca59c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1ca59cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1ca5a0:
    // 0x1ca5a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca5a4:
    // 0x1ca5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5A4u;
        // 0x1ca5a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5ACu;
}
