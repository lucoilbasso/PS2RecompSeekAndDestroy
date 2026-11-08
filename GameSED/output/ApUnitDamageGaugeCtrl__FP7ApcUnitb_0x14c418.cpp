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

// Function: ApUnitDamageGaugeCtrl__FP7ApcUnitb
// Address: 0x14c418 - 0x14c588
void ApUnitDamageGaugeCtrl__FP7ApcUnitb_0x14c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitDamageGaugeCtrl__FP7ApcUnitb_0x14c418");
#endif

    switch (ctx->pc) {
        case 0x14c508u: goto label_14c508;
        default: break;
    }

    ctx->pc = 0x14c418u;

    // 0x14c418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14c41c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14c420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14c428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14c42c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14c430: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14c434: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14c438: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14c438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14c43c: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14c440: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x14C440u;
    {
        const bool branch_taken_0x14c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c440) {
            ctx->pc = 0x14C444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C440u;
            // 0x14c444: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C570u;
            goto label_14c570;
        }
    }
    ctx->pc = 0x14C448u;
    // 0x14c448: 0x8e23024c  lw          $v1, 0x24C($s1)
    ctx->pc = 0x14c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x14c44c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c450: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x14C450u;
    {
        const bool branch_taken_0x14c450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C450u;
        // 0x14c454: 0x26260188  addiu       $a2, $s1, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c450) {
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C458u;
    // 0x14c458: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x14c458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14c45c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x14c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x14c460: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14C460u;
    {
        const bool branch_taken_0x14c460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14c460) {
            ctx->pc = 0x14C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C460u;
            // 0x14c464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C494u;
            goto label_14c494;
        }
    }
    ctx->pc = 0x14C468u;
    // 0x14c468: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x14c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14c46c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x14c46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c470: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x14c470u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c474: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x14c474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x14c478: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14c478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14c47c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x14c47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c480: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14c480u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c484: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14c484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14c488: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x14c488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14c48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c490: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x14c490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_14c494:
    // 0x14c494: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C494u;
    {
        const bool branch_taken_0x14c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c494) {
            ctx->pc = 0x14C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C494u;
            // 0x14c498: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4CCu;
            goto label_14c4cc;
        }
    }
    ctx->pc = 0x14C49Cu;
    // 0x14c49c: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14C49Cu;
    {
        const bool branch_taken_0x14c49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C49Cu;
        // 0x14c4a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c49c) {
            ctx->pc = 0x14C570u;
            goto label_14c570;
        }
    }
    ctx->pc = 0x14C4A4u;
    // 0x14c4a4: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x14c4a8: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x14C4A8u;
    {
        const bool branch_taken_0x14c4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4a8) {
            ctx->pc = 0x14C4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4A8u;
            // 0x14c4ac: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C574u;
            goto label_14c574;
        }
    }
    ctx->pc = 0x14C4B0u;
    // 0x14c4b0: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x14c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x14c4b4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x14c4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c4b8: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14c4b8u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c4bc: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14c4bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14c4c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14c4c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14c4c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c4cc:
    // 0x14c4cc: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x14c4d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C4D0u;
    {
        const bool branch_taken_0x14c4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4D0u;
        // 0x14c4d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4d0) {
            ctx->pc = 0x14C4F8u;
            goto label_14c4f8;
        }
    }
    ctx->pc = 0x14C4D8u;
    // 0x14c4d8: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x14c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x14c4dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C4DCu;
    {
        const bool branch_taken_0x14c4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4dc) {
            ctx->pc = 0x14C4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4DCu;
            // 0x14c4e0: 0x8e30024c  lw          $s0, 0x24C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4FCu;
            goto label_14c4fc;
        }
    }
    ctx->pc = 0x14C4E4u;
    // 0x14c4e4: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14c4e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14c4ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14C4ECu;
    {
        const bool branch_taken_0x14c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4ECu;
        // 0x14c4f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4ec) {
            ctx->pc = 0x14C570u;
            goto label_14c570;
        }
    }
    ctx->pc = 0x14C4F4u;
    // 0x14c4f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c4f8:
    // 0x14c4f8: 0x8e30024c  lw          $s0, 0x24C($s1)
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_14c4fc:
    // 0x14c4fc: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c500: 0xc0582b2  jal         func_160AC8
    ctx->pc = 0x14C500u;
    SET_GPR_U32(ctx, 31, 0x14C508u);
    ctx->pc = 0x14C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C500u;
    // 0x14c504: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160AC8u, 0x14C500u, 0x14C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C508u;
label_14c508:
    // 0x14c508: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14c508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c50c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C50Cu;
    {
        const bool branch_taken_0x14c50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C50Cu;
        // 0x14c510: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c50c) {
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C514u;
    // 0x14c514: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14C514u;
    {
        const bool branch_taken_0x14c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c514) {
            ctx->pc = 0x14C518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C514u;
            // 0x14c518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C570u;
            goto label_14c570;
        }
    }
    ctx->pc = 0x14C51Cu;
    // 0x14c51c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x14c520: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c524: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14c524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14c528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c52c: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x14c530: 0x8c830204  lw          $v1, 0x204($a0)
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x14c534: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14c538: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c53c: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x14c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x14c540: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x14c540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x14c544: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14c544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14c548: 0x8c820204  lw          $v0, 0x204($a0)
    ctx->pc = 0x14c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x14c54c: 0x8c830200  lw          $v1, 0x200($a0)
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x14c550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c554: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14c558: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C558u;
    {
        const bool branch_taken_0x14c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C558u;
        // 0x14c55c: 0xac820204  sw          $v0, 0x204($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c558) {
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C560u;
    // 0x14c560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c564: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14c568: 0xac820200  sw          $v0, 0x200($a0)
    ctx->pc = 0x14c568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
label_14c56c:
    // 0x14c56c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14c56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14c570:
    // 0x14c570: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14c574:
    // 0x14c574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14c574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c578: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14c578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c57c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14c57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c580: 0x3e00008  jr          $ra
    ctx->pc = 0x14C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C580u;
        // 0x14c584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C588u;
}
