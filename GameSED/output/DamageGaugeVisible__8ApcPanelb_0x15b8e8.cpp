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

// Function: DamageGaugeVisible__8ApcPanelb
// Address: 0x15b8e8 - 0x15baf0
void DamageGaugeVisible__8ApcPanelb_0x15b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageGaugeVisible__8ApcPanelb_0x15b8e8");
#endif

    switch (ctx->pc) {
        case 0x15b8e8u: goto label_15b8e8;
        case 0x15b8ecu: goto label_15b8ec;
        case 0x15b8f0u: goto label_15b8f0;
        case 0x15b8f4u: goto label_15b8f4;
        case 0x15b8f8u: goto label_15b8f8;
        case 0x15b8fcu: goto label_15b8fc;
        case 0x15b900u: goto label_15b900;
        case 0x15b904u: goto label_15b904;
        case 0x15b908u: goto label_15b908;
        case 0x15b90cu: goto label_15b90c;
        case 0x15b910u: goto label_15b910;
        case 0x15b914u: goto label_15b914;
        case 0x15b918u: goto label_15b918;
        case 0x15b91cu: goto label_15b91c;
        case 0x15b920u: goto label_15b920;
        case 0x15b924u: goto label_15b924;
        case 0x15b928u: goto label_15b928;
        case 0x15b92cu: goto label_15b92c;
        case 0x15b930u: goto label_15b930;
        case 0x15b934u: goto label_15b934;
        case 0x15b938u: goto label_15b938;
        case 0x15b93cu: goto label_15b93c;
        case 0x15b940u: goto label_15b940;
        case 0x15b944u: goto label_15b944;
        case 0x15b948u: goto label_15b948;
        case 0x15b94cu: goto label_15b94c;
        case 0x15b950u: goto label_15b950;
        case 0x15b954u: goto label_15b954;
        case 0x15b958u: goto label_15b958;
        case 0x15b95cu: goto label_15b95c;
        case 0x15b960u: goto label_15b960;
        case 0x15b964u: goto label_15b964;
        case 0x15b968u: goto label_15b968;
        case 0x15b96cu: goto label_15b96c;
        case 0x15b970u: goto label_15b970;
        case 0x15b974u: goto label_15b974;
        case 0x15b978u: goto label_15b978;
        case 0x15b97cu: goto label_15b97c;
        case 0x15b980u: goto label_15b980;
        case 0x15b984u: goto label_15b984;
        case 0x15b988u: goto label_15b988;
        case 0x15b98cu: goto label_15b98c;
        case 0x15b990u: goto label_15b990;
        case 0x15b994u: goto label_15b994;
        case 0x15b998u: goto label_15b998;
        case 0x15b99cu: goto label_15b99c;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9a4u: goto label_15b9a4;
        case 0x15b9a8u: goto label_15b9a8;
        case 0x15b9acu: goto label_15b9ac;
        case 0x15b9b0u: goto label_15b9b0;
        case 0x15b9b4u: goto label_15b9b4;
        case 0x15b9b8u: goto label_15b9b8;
        case 0x15b9bcu: goto label_15b9bc;
        case 0x15b9c0u: goto label_15b9c0;
        case 0x15b9c4u: goto label_15b9c4;
        case 0x15b9c8u: goto label_15b9c8;
        case 0x15b9ccu: goto label_15b9cc;
        case 0x15b9d0u: goto label_15b9d0;
        case 0x15b9d4u: goto label_15b9d4;
        case 0x15b9d8u: goto label_15b9d8;
        case 0x15b9dcu: goto label_15b9dc;
        case 0x15b9e0u: goto label_15b9e0;
        case 0x15b9e4u: goto label_15b9e4;
        case 0x15b9e8u: goto label_15b9e8;
        case 0x15b9ecu: goto label_15b9ec;
        case 0x15b9f0u: goto label_15b9f0;
        case 0x15b9f4u: goto label_15b9f4;
        case 0x15b9f8u: goto label_15b9f8;
        case 0x15b9fcu: goto label_15b9fc;
        case 0x15ba00u: goto label_15ba00;
        case 0x15ba04u: goto label_15ba04;
        case 0x15ba08u: goto label_15ba08;
        case 0x15ba0cu: goto label_15ba0c;
        case 0x15ba10u: goto label_15ba10;
        case 0x15ba14u: goto label_15ba14;
        case 0x15ba18u: goto label_15ba18;
        case 0x15ba1cu: goto label_15ba1c;
        case 0x15ba20u: goto label_15ba20;
        case 0x15ba24u: goto label_15ba24;
        case 0x15ba28u: goto label_15ba28;
        case 0x15ba2cu: goto label_15ba2c;
        case 0x15ba30u: goto label_15ba30;
        case 0x15ba34u: goto label_15ba34;
        case 0x15ba38u: goto label_15ba38;
        case 0x15ba3cu: goto label_15ba3c;
        case 0x15ba40u: goto label_15ba40;
        case 0x15ba44u: goto label_15ba44;
        case 0x15ba48u: goto label_15ba48;
        case 0x15ba4cu: goto label_15ba4c;
        case 0x15ba50u: goto label_15ba50;
        case 0x15ba54u: goto label_15ba54;
        case 0x15ba58u: goto label_15ba58;
        case 0x15ba5cu: goto label_15ba5c;
        case 0x15ba60u: goto label_15ba60;
        case 0x15ba64u: goto label_15ba64;
        case 0x15ba68u: goto label_15ba68;
        case 0x15ba6cu: goto label_15ba6c;
        case 0x15ba70u: goto label_15ba70;
        case 0x15ba74u: goto label_15ba74;
        case 0x15ba78u: goto label_15ba78;
        case 0x15ba7cu: goto label_15ba7c;
        case 0x15ba80u: goto label_15ba80;
        case 0x15ba84u: goto label_15ba84;
        case 0x15ba88u: goto label_15ba88;
        case 0x15ba8cu: goto label_15ba8c;
        case 0x15ba90u: goto label_15ba90;
        case 0x15ba94u: goto label_15ba94;
        case 0x15ba98u: goto label_15ba98;
        case 0x15ba9cu: goto label_15ba9c;
        case 0x15baa0u: goto label_15baa0;
        case 0x15baa4u: goto label_15baa4;
        case 0x15baa8u: goto label_15baa8;
        case 0x15baacu: goto label_15baac;
        case 0x15bab0u: goto label_15bab0;
        case 0x15bab4u: goto label_15bab4;
        case 0x15bab8u: goto label_15bab8;
        case 0x15babcu: goto label_15babc;
        case 0x15bac0u: goto label_15bac0;
        case 0x15bac4u: goto label_15bac4;
        case 0x15bac8u: goto label_15bac8;
        case 0x15baccu: goto label_15bacc;
        case 0x15bad0u: goto label_15bad0;
        case 0x15bad4u: goto label_15bad4;
        case 0x15bad8u: goto label_15bad8;
        case 0x15badcu: goto label_15badc;
        case 0x15bae0u: goto label_15bae0;
        case 0x15bae4u: goto label_15bae4;
        case 0x15bae8u: goto label_15bae8;
        case 0x15baecu: goto label_15baec;
        default: break;
    }

    ctx->pc = 0x15b8e8u;

label_15b8e8:
    // 0x15b8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b8ec:
    // 0x15b8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15b8f0:
    // 0x15b8f0: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_15b8f4:
    // 0x15b8f4: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_15b8f8:
    if (ctx->pc == 0x15B8F8u) {
        ctx->pc = 0x15B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8F4u;
        // 0x15b8f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B8FCu;
        goto label_15b8fc;
    }
    ctx->pc = 0x15B8F4u;
    {
        const bool branch_taken_0x15b8f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8F4u;
        // 0x15b8f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8f4) {
            ctx->pc = 0x15B9A0u;
            goto label_15b9a0;
        }
    }
    ctx->pc = 0x15B8FCu;
label_15b8fc:
    // 0x15b8fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15b900:
    // 0x15b900: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15b900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b904:
    // 0x15b904: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15b908:
    // 0x15b908: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15b90c:
    if (ctx->pc == 0x15B90Cu) {
        ctx->pc = 0x15B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B908u;
        // 0x15b90c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B910u;
        goto label_15b910;
    }
    ctx->pc = 0x15B908u;
    {
        const bool branch_taken_0x15b908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B908u;
        // 0x15b90c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b908) {
            ctx->pc = 0x15B928u;
            goto label_15b928;
        }
    }
    ctx->pc = 0x15B910u;
label_15b910:
    // 0x15b910: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b914:
    // 0x15b914: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b918:
    // 0x15b918: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b91c:
    // 0x15b91c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b920:
    // 0x15b920: 0x60f809  jalr        $v1
label_15b924:
    if (ctx->pc == 0x15B924u) {
        ctx->pc = 0x15B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B920u;
        // 0x15b924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B928u;
        goto label_15b928;
    }
    ctx->pc = 0x15B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B928u);
        ctx->pc = 0x15B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B920u;
        // 0x15b924: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B920u, 0x15B928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B928u;
label_15b928:
    // 0x15b928: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b92c:
    // 0x15b92c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15b930:
    if (ctx->pc == 0x15B930u) {
        ctx->pc = 0x15B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B92Cu;
        // 0x15b930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B934u;
        goto label_15b934;
    }
    ctx->pc = 0x15B92Cu;
    {
        const bool branch_taken_0x15b92c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B92Cu;
        // 0x15b930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b92c) {
            ctx->pc = 0x15B94Cu;
            goto label_15b94c;
        }
    }
    ctx->pc = 0x15B934u;
label_15b934:
    // 0x15b934: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b938:
    // 0x15b938: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b93c:
    // 0x15b93c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b940:
    // 0x15b940: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b944:
    // 0x15b944: 0x60f809  jalr        $v1
label_15b948:
    if (ctx->pc == 0x15B948u) {
        ctx->pc = 0x15B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B944u;
        // 0x15b948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B94Cu;
        goto label_15b94c;
    }
    ctx->pc = 0x15B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B94Cu);
        ctx->pc = 0x15B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B944u;
        // 0x15b948: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B944u, 0x15B94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B94Cu;
label_15b94c:
    // 0x15b94c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15b950:
    // 0x15b950: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15b954:
    if (ctx->pc == 0x15B954u) {
        ctx->pc = 0x15B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B950u;
        // 0x15b954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B958u;
        goto label_15b958;
    }
    ctx->pc = 0x15B950u;
    {
        const bool branch_taken_0x15b950 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B950u;
        // 0x15b954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b950) {
            ctx->pc = 0x15B970u;
            goto label_15b970;
        }
    }
    ctx->pc = 0x15B958u;
label_15b958:
    // 0x15b958: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b95c:
    // 0x15b95c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b960:
    // 0x15b960: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b964:
    // 0x15b964: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b968:
    // 0x15b968: 0x60f809  jalr        $v1
label_15b96c:
    if (ctx->pc == 0x15B96Cu) {
        ctx->pc = 0x15B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B968u;
        // 0x15b96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B970u;
        goto label_15b970;
    }
    ctx->pc = 0x15B968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B970u);
        ctx->pc = 0x15B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B968u;
        // 0x15b96c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B968u, 0x15B970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B970u;
label_15b970:
    // 0x15b970: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b974:
    // 0x15b974: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15b978:
    if (ctx->pc == 0x15B978u) {
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B97Cu;
        goto label_15b97c;
    }
    ctx->pc = 0x15B974u;
    {
        const bool branch_taken_0x15b974 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b974) {
            ctx->pc = 0x15BAE0u;
            goto label_15bae0;
        }
    }
    ctx->pc = 0x15B97Cu;
label_15b97c:
    // 0x15b97c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b980:
    // 0x15b980: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b984:
    // 0x15b984: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b988:
    // 0x15b988: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b98c:
    // 0x15b98c: 0x60f809  jalr        $v1
label_15b990:
    if (ctx->pc == 0x15B990u) {
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B994u;
        goto label_15b994;
    }
    ctx->pc = 0x15B98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B994u);
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B98Cu, 0x15B994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B994u;
label_15b994:
    // 0x15b994: 0x10000053  b           . + 4 + (0x53 << 2)
label_15b998:
    if (ctx->pc == 0x15B998u) {
        ctx->pc = 0x15B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B994u;
        // 0x15b998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B99Cu;
        goto label_15b99c;
    }
    ctx->pc = 0x15B994u;
    {
        const bool branch_taken_0x15b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B994u;
        // 0x15b998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b994) {
            ctx->pc = 0x15BAE4u;
            goto label_15bae4;
        }
    }
    ctx->pc = 0x15B99Cu;
label_15b99c:
    // 0x15b99c: 0x0  nop
    ctx->pc = 0x15b99cu;
    // NOP
label_15b9a0:
    // 0x15b9a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15b9a4:
    // 0x15b9a4: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15b9a8:
    // 0x15b9a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b9ac:
    // 0x15b9ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15b9b0:
    // 0x15b9b0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15b9b4:
    if (ctx->pc == 0x15B9B4u) {
        ctx->pc = 0x15B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9B0u;
        // 0x15b9b4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9B8u;
        goto label_15b9b8;
    }
    ctx->pc = 0x15B9B0u;
    {
        const bool branch_taken_0x15b9b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9B0u;
        // 0x15b9b4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9b0) {
            ctx->pc = 0x15B9D4u;
            goto label_15b9d4;
        }
    }
    ctx->pc = 0x15B9B8u;
label_15b9b8:
    // 0x15b9b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b9bc:
    // 0x15b9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b9c0:
    // 0x15b9c0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b9c4:
    // 0x15b9c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b9c8:
    // 0x15b9c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b9cc:
    // 0x15b9cc: 0x60f809  jalr        $v1
label_15b9d0:
    if (ctx->pc == 0x15B9D0u) {
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9D4u;
        goto label_15b9d4;
    }
    ctx->pc = 0x15B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B9D4u);
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B9CCu, 0x15B9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B9D4u;
label_15b9d4:
    // 0x15b9d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15b9d8:
    // 0x15b9d8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15b9dc:
    if (ctx->pc == 0x15B9DCu) {
        ctx->pc = 0x15B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9D8u;
        // 0x15b9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9E0u;
        goto label_15b9e0;
    }
    ctx->pc = 0x15B9D8u;
    {
        const bool branch_taken_0x15b9d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9D8u;
        // 0x15b9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9d8) {
            ctx->pc = 0x15B9F8u;
            goto label_15b9f8;
        }
    }
    ctx->pc = 0x15B9E0u;
label_15b9e0:
    // 0x15b9e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b9e4:
    // 0x15b9e4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b9e8:
    // 0x15b9e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b9e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b9ec:
    // 0x15b9ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b9f0:
    // 0x15b9f0: 0x60f809  jalr        $v1
label_15b9f4:
    if (ctx->pc == 0x15B9F4u) {
        ctx->pc = 0x15B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F0u;
        // 0x15b9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B9F8u;
        goto label_15b9f8;
    }
    ctx->pc = 0x15B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B9F8u);
        ctx->pc = 0x15B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F0u;
        // 0x15b9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B9F0u, 0x15B9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B9F8u;
label_15b9f8:
    // 0x15b9f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15b9fc:
    // 0x15b9fc: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15ba00:
    if (ctx->pc == 0x15BA00u) {
        ctx->pc = 0x15BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9FCu;
        // 0x15ba00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA04u;
        goto label_15ba04;
    }
    ctx->pc = 0x15B9FCu;
    {
        const bool branch_taken_0x15b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9fc) {
            ctx->pc = 0x15BA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B9FCu;
            // 0x15ba00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAE4u;
            goto label_15bae4;
        }
    }
    ctx->pc = 0x15BA04u;
label_15ba04:
    // 0x15ba04: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ba08:
    // 0x15ba08: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15ba0c:
    if (ctx->pc == 0x15BA0Cu) {
        ctx->pc = 0x15BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA08u;
        // 0x15ba0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA10u;
        goto label_15ba10;
    }
    ctx->pc = 0x15BA08u;
    {
        const bool branch_taken_0x15ba08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba08) {
            ctx->pc = 0x15BA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA08u;
            // 0x15ba0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAE4u;
            goto label_15bae4;
        }
    }
    ctx->pc = 0x15BA10u;
label_15ba10:
    // 0x15ba10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ba14:
    // 0x15ba14: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15ba18:
    // 0x15ba18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba1c:
    // 0x15ba1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ba20:
    if (ctx->pc == 0x15BA20u) {
        ctx->pc = 0x15BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA1Cu;
        // 0x15ba20: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA24u;
        goto label_15ba24;
    }
    ctx->pc = 0x15BA1Cu;
    {
        const bool branch_taken_0x15ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA1Cu;
        // 0x15ba20: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba1c) {
            ctx->pc = 0x15BA80u;
            goto label_15ba80;
        }
    }
    ctx->pc = 0x15BA24u;
label_15ba24:
    // 0x15ba24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba28:
    // 0x15ba28: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ba2c:
    if (ctx->pc == 0x15BA2Cu) {
        ctx->pc = 0x15BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA28u;
        // 0x15ba2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA30u;
        goto label_15ba30;
    }
    ctx->pc = 0x15BA28u;
    {
        const bool branch_taken_0x15ba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba28) {
            ctx->pc = 0x15BA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA28u;
            // 0x15ba2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BA74u;
            goto label_15ba74;
        }
    }
    ctx->pc = 0x15BA30u;
label_15ba30:
    // 0x15ba30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba34:
    // 0x15ba34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ba38:
    // 0x15ba38: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba3c:
    // 0x15ba3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba40:
    // 0x15ba40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ba44:
    // 0x15ba44: 0x60f809  jalr        $v1
label_15ba48:
    if (ctx->pc == 0x15BA48u) {
        ctx->pc = 0x15BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA44u;
        // 0x15ba48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA4Cu;
        goto label_15ba4c;
    }
    ctx->pc = 0x15BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BA4Cu);
        ctx->pc = 0x15BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA44u;
        // 0x15ba48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA44u, 0x15BA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BA4Cu;
label_15ba4c:
    // 0x15ba4c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ba50:
    // 0x15ba50: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ba54:
    if (ctx->pc == 0x15BA54u) {
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA50u;
        // 0x15ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA58u;
        goto label_15ba58;
    }
    ctx->pc = 0x15BA50u;
    {
        const bool branch_taken_0x15ba50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA50u;
        // 0x15ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba50) {
            ctx->pc = 0x15BA70u;
            goto label_15ba70;
        }
    }
    ctx->pc = 0x15BA58u;
label_15ba58:
    // 0x15ba58: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba5c:
    // 0x15ba5c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba60:
    // 0x15ba60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba64:
    // 0x15ba64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ba68:
    // 0x15ba68: 0x60f809  jalr        $v1
label_15ba6c:
    if (ctx->pc == 0x15BA6Cu) {
        ctx->pc = 0x15BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA68u;
        // 0x15ba6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA70u;
        goto label_15ba70;
    }
    ctx->pc = 0x15BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BA70u);
        ctx->pc = 0x15BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA68u;
        // 0x15ba6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA68u, 0x15BA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BA70u;
label_15ba70:
    // 0x15ba70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ba74:
    // 0x15ba74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15ba78:
    // 0x15ba78: 0x10000019  b           . + 4 + (0x19 << 2)
label_15ba7c:
    if (ctx->pc == 0x15BA7Cu) {
        ctx->pc = 0x15BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA78u;
        // 0x15ba7c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA80u;
        goto label_15ba80;
    }
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA78u;
        // 0x15ba7c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BAE0u;
            goto label_15bae0;
        }
    }
    ctx->pc = 0x15BA80u;
label_15ba80:
    // 0x15ba80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba84:
    // 0x15ba84: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ba88:
    if (ctx->pc == 0x15BA88u) {
        ctx->pc = 0x15BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA84u;
        // 0x15ba88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA8Cu;
        goto label_15ba8c;
    }
    ctx->pc = 0x15BA84u;
    {
        const bool branch_taken_0x15ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba84) {
            ctx->pc = 0x15BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA84u;
            // 0x15ba88: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAD0u;
            goto label_15bad0;
        }
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba90:
    // 0x15ba90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ba94:
    // 0x15ba94: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba98:
    // 0x15ba98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba9c:
    // 0x15ba9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15baa0:
    // 0x15baa0: 0x60f809  jalr        $v1
label_15baa4:
    if (ctx->pc == 0x15BAA4u) {
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAA8u;
        goto label_15baa8;
    }
    ctx->pc = 0x15BAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BAA8u);
        ctx->pc = 0x15BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA0u;
        // 0x15baa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAA0u, 0x15BAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BAA8u;
label_15baa8:
    // 0x15baa8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15baac:
    // 0x15baac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bab0:
    if (ctx->pc == 0x15BAB0u) {
        ctx->pc = 0x15BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAACu;
        // 0x15bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAB4u;
        goto label_15bab4;
    }
    ctx->pc = 0x15BAACu;
    {
        const bool branch_taken_0x15baac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAACu;
        // 0x15bab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baac) {
            ctx->pc = 0x15BACCu;
            goto label_15bacc;
        }
    }
    ctx->pc = 0x15BAB4u;
label_15bab4:
    // 0x15bab4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bab8:
    // 0x15bab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15babc:
    // 0x15babc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bac0:
    // 0x15bac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bac4:
    // 0x15bac4: 0x60f809  jalr        $v1
label_15bac8:
    if (ctx->pc == 0x15BAC8u) {
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BACCu;
        goto label_15bacc;
    }
    ctx->pc = 0x15BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BACCu);
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAC4u, 0x15BACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BACCu;
label_15bacc:
    // 0x15bacc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bad0:
    // 0x15bad0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15bad4:
    // 0x15bad4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15bad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15bad8:
    // 0x15bad8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15badc:
    // 0x15badc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15badcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15bae0:
    // 0x15bae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15bae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bae4:
    // 0x15bae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15bae8:
    // 0x15bae8: 0x3e00008  jr          $ra
label_15baec:
    if (ctx->pc == 0x15BAECu) {
        ctx->pc = 0x15BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAE8u;
        // 0x15baec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAF0u;
        goto label_fallthrough_0x15bae8;
    }
    ctx->pc = 0x15BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAE8u;
        // 0x15baec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bae8:
    ctx->pc = 0x15BAF0u;
}
