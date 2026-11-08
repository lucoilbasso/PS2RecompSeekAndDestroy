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

// Function: WeaponGaugeClean__8ApcPanel
// Address: 0x1da0c0 - 0x1da360
void WeaponGaugeClean__8ApcPanel_0x1da0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeClean__8ApcPanel_0x1da0c0");
#endif

    switch (ctx->pc) {
        case 0x1da0c0u: goto label_1da0c0;
        case 0x1da0c4u: goto label_1da0c4;
        case 0x1da0c8u: goto label_1da0c8;
        case 0x1da0ccu: goto label_1da0cc;
        case 0x1da0d0u: goto label_1da0d0;
        case 0x1da0d4u: goto label_1da0d4;
        case 0x1da0d8u: goto label_1da0d8;
        case 0x1da0dcu: goto label_1da0dc;
        case 0x1da0e0u: goto label_1da0e0;
        case 0x1da0e4u: goto label_1da0e4;
        case 0x1da0e8u: goto label_1da0e8;
        case 0x1da0ecu: goto label_1da0ec;
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da0f4u: goto label_1da0f4;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da0fcu: goto label_1da0fc;
        case 0x1da100u: goto label_1da100;
        case 0x1da104u: goto label_1da104;
        case 0x1da108u: goto label_1da108;
        case 0x1da10cu: goto label_1da10c;
        case 0x1da110u: goto label_1da110;
        case 0x1da114u: goto label_1da114;
        case 0x1da118u: goto label_1da118;
        case 0x1da11cu: goto label_1da11c;
        case 0x1da120u: goto label_1da120;
        case 0x1da124u: goto label_1da124;
        case 0x1da128u: goto label_1da128;
        case 0x1da12cu: goto label_1da12c;
        case 0x1da130u: goto label_1da130;
        case 0x1da134u: goto label_1da134;
        case 0x1da138u: goto label_1da138;
        case 0x1da13cu: goto label_1da13c;
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        case 0x1da228u: goto label_1da228;
        case 0x1da22cu: goto label_1da22c;
        case 0x1da230u: goto label_1da230;
        case 0x1da234u: goto label_1da234;
        case 0x1da238u: goto label_1da238;
        case 0x1da23cu: goto label_1da23c;
        case 0x1da240u: goto label_1da240;
        case 0x1da244u: goto label_1da244;
        case 0x1da248u: goto label_1da248;
        case 0x1da24cu: goto label_1da24c;
        case 0x1da250u: goto label_1da250;
        case 0x1da254u: goto label_1da254;
        case 0x1da258u: goto label_1da258;
        case 0x1da25cu: goto label_1da25c;
        case 0x1da260u: goto label_1da260;
        case 0x1da264u: goto label_1da264;
        case 0x1da268u: goto label_1da268;
        case 0x1da26cu: goto label_1da26c;
        case 0x1da270u: goto label_1da270;
        case 0x1da274u: goto label_1da274;
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        case 0x1da310u: goto label_1da310;
        case 0x1da314u: goto label_1da314;
        case 0x1da318u: goto label_1da318;
        case 0x1da31cu: goto label_1da31c;
        case 0x1da320u: goto label_1da320;
        case 0x1da324u: goto label_1da324;
        case 0x1da328u: goto label_1da328;
        case 0x1da32cu: goto label_1da32c;
        case 0x1da330u: goto label_1da330;
        case 0x1da334u: goto label_1da334;
        case 0x1da338u: goto label_1da338;
        case 0x1da33cu: goto label_1da33c;
        case 0x1da340u: goto label_1da340;
        case 0x1da344u: goto label_1da344;
        case 0x1da348u: goto label_1da348;
        case 0x1da34cu: goto label_1da34c;
        case 0x1da350u: goto label_1da350;
        case 0x1da354u: goto label_1da354;
        case 0x1da358u: goto label_1da358;
        case 0x1da35cu: goto label_1da35c;
        default: break;
    }

    ctx->pc = 0x1da0c0u;

label_1da0c0:
    // 0x1da0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1da0c4:
    // 0x1da0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1da0c8:
    // 0x1da0c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1da0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1da0cc:
    // 0x1da0cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1da0ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da0d0:
    // 0x1da0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1da0d4:
    // 0x1da0d4: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1da0d8:
    // 0x1da0d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1da0dc:
    // 0x1da0dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da0e0:
    // 0x1da0e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da0e4:
    if (ctx->pc == 0x1DA0E4u) {
        ctx->pc = 0x1DA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0E0u;
        // 0x1da0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA0E8u;
        goto label_1da0e8;
    }
    ctx->pc = 0x1DA0E0u;
    {
        const bool branch_taken_0x1da0e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0E0u;
        // 0x1da0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0e0) {
            ctx->pc = 0x1DA100u;
            goto label_1da100;
        }
    }
    ctx->pc = 0x1DA0E8u;
label_1da0e8:
    // 0x1da0e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da0ec:
    // 0x1da0ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da0f0:
    // 0x1da0f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da0f4:
    // 0x1da0f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da0f8:
    // 0x1da0f8: 0x60f809  jalr        $v1
label_1da0fc:
    if (ctx->pc == 0x1DA0FCu) {
        ctx->pc = 0x1DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0F8u;
        // 0x1da0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA100u;
        goto label_1da100;
    }
    ctx->pc = 0x1DA0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA100u);
        ctx->pc = 0x1DA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0F8u;
        // 0x1da0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA0F8u, 0x1DA100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA100u;
label_1da100:
    // 0x1da100: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da104:
    // 0x1da104: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da108:
    if (ctx->pc == 0x1DA108u) {
        ctx->pc = 0x1DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA104u;
        // 0x1da108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA10Cu;
        goto label_1da10c;
    }
    ctx->pc = 0x1DA104u;
    {
        const bool branch_taken_0x1da104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA104u;
        // 0x1da108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da104) {
            ctx->pc = 0x1DA124u;
            goto label_1da124;
        }
    }
    ctx->pc = 0x1DA10Cu;
label_1da10c:
    // 0x1da10c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da110:
    // 0x1da110: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da114:
    // 0x1da114: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da118:
    // 0x1da118: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da11c:
    // 0x1da11c: 0x60f809  jalr        $v1
label_1da120:
    if (ctx->pc == 0x1DA120u) {
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA124u;
        goto label_1da124;
    }
    ctx->pc = 0x1DA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA124u);
        ctx->pc = 0x1DA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA11Cu;
        // 0x1da120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA11Cu, 0x1DA124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA124u;
label_1da124:
    // 0x1da124: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1da128:
    // 0x1da128: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da12c:
    if (ctx->pc == 0x1DA12Cu) {
        ctx->pc = 0x1DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA128u;
        // 0x1da12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA130u;
        goto label_1da130;
    }
    ctx->pc = 0x1DA128u;
    {
        const bool branch_taken_0x1da128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA128u;
        // 0x1da12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da128) {
            ctx->pc = 0x1DA148u;
            goto label_1da148;
        }
    }
    ctx->pc = 0x1DA130u;
label_1da130:
    // 0x1da130: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da134:
    // 0x1da134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da138:
    // 0x1da138: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da13c:
    // 0x1da13c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da140:
    // 0x1da140: 0x60f809  jalr        $v1
label_1da144:
    if (ctx->pc == 0x1DA144u) {
        ctx->pc = 0x1DA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA140u;
        // 0x1da144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA148u;
        goto label_1da148;
    }
    ctx->pc = 0x1DA140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA148u);
        ctx->pc = 0x1DA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA140u;
        // 0x1da144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA140u, 0x1DA148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA148u;
label_1da148:
    // 0x1da148: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1da148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da14c:
    // 0x1da14c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da150:
    if (ctx->pc == 0x1DA150u) {
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA154u;
        goto label_1da154;
    }
    ctx->pc = 0x1DA14Cu;
    {
        const bool branch_taken_0x1da14c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da14c) {
            ctx->pc = 0x1DA16Cu;
            goto label_1da16c;
        }
    }
    ctx->pc = 0x1DA154u;
label_1da154:
    // 0x1da154: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da158:
    // 0x1da158: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da15c:
    // 0x1da15c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da160:
    // 0x1da160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da164:
    // 0x1da164: 0x60f809  jalr        $v1
label_1da168:
    if (ctx->pc == 0x1DA168u) {
        ctx->pc = 0x1DA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA164u;
        // 0x1da168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA16Cu;
        goto label_1da16c;
    }
    ctx->pc = 0x1DA164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA16Cu);
        ctx->pc = 0x1DA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA164u;
        // 0x1da168: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA164u, 0x1DA16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA16Cu;
label_1da16c:
    // 0x1da16c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1da170:
    // 0x1da170: 0x265100e0  addiu       $s1, $s2, 0xE0
    ctx->pc = 0x1da170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_1da174:
    // 0x1da174: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1da178:
    // 0x1da178: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1da17c:
    // 0x1da17c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1da180:
    // 0x1da180: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da184:
    // 0x1da184: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1da188:
    // 0x1da188: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1da18c:
    // 0x1da18c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1da190:
    // 0x1da190: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1da194:
    // 0x1da194: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da198:
    if (ctx->pc == 0x1DA198u) {
        ctx->pc = 0x1DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA194u;
        // 0x1da198: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA19Cu;
        goto label_1da19c;
    }
    ctx->pc = 0x1DA194u;
    {
        const bool branch_taken_0x1da194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA194u;
        // 0x1da198: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da194) {
            ctx->pc = 0x1DA1B8u;
            goto label_1da1b8;
        }
    }
    ctx->pc = 0x1DA19Cu;
label_1da19c:
    // 0x1da19c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da1a0:
    // 0x1da1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da1a4:
    // 0x1da1a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da1a8:
    // 0x1da1a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da1ac:
    // 0x1da1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da1b0:
    // 0x1da1b0: 0x60f809  jalr        $v1
label_1da1b4:
    if (ctx->pc == 0x1DA1B4u) {
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B0u;
        // 0x1da1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1B8u;
        goto label_1da1b8;
    }
    ctx->pc = 0x1DA1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA1B8u);
        ctx->pc = 0x1DA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1B0u;
        // 0x1da1b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1B0u, 0x1DA1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA1B8u;
label_1da1b8:
    // 0x1da1b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1da1bc:
    // 0x1da1bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da1c0:
    if (ctx->pc == 0x1DA1C0u) {
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1C4u;
        goto label_1da1c4;
    }
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1BCu;
        // 0x1da1c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA1DCu;
            goto label_1da1dc;
        }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da1c8:
    // 0x1da1c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da1cc:
    // 0x1da1cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da1ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da1d0:
    // 0x1da1d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da1d4:
    // 0x1da1d4: 0x60f809  jalr        $v1
label_1da1d8:
    if (ctx->pc == 0x1DA1D8u) {
        ctx->pc = 0x1DA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1D4u;
        // 0x1da1d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1DCu;
        goto label_1da1dc;
    }
    ctx->pc = 0x1DA1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA1DCu);
        ctx->pc = 0x1DA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1D4u;
        // 0x1da1d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1D4u, 0x1DA1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA1DCu;
label_1da1dc:
    // 0x1da1dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1da1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1da1e0:
    // 0x1da1e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da1e4:
    if (ctx->pc == 0x1DA1E4u) {
        ctx->pc = 0x1DA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1E0u;
        // 0x1da1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1E8u;
        goto label_1da1e8;
    }
    ctx->pc = 0x1DA1E0u;
    {
        const bool branch_taken_0x1da1e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1E0u;
        // 0x1da1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1e0) {
            ctx->pc = 0x1DA200u;
            goto label_1da200;
        }
    }
    ctx->pc = 0x1DA1E8u;
label_1da1e8:
    // 0x1da1e8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da1ec:
    // 0x1da1ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da1f0:
    // 0x1da1f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da1f4:
    // 0x1da1f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da1f8:
    // 0x1da1f8: 0x60f809  jalr        $v1
label_1da1fc:
    if (ctx->pc == 0x1DA1FCu) {
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA200u;
        goto label_1da200;
    }
    ctx->pc = 0x1DA1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA200u);
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1F8u, 0x1DA200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA200u;
label_1da200:
    // 0x1da200: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1da204:
    // 0x1da204: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da208:
    if (ctx->pc == 0x1DA208u) {
        ctx->pc = 0x1DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA204u;
        // 0x1da208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA20Cu;
        goto label_1da20c;
    }
    ctx->pc = 0x1DA204u;
    {
        const bool branch_taken_0x1da204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA204u;
        // 0x1da208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da204) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA20Cu;
label_1da20c:
    // 0x1da20c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da210:
    // 0x1da210: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da214:
    // 0x1da214: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da218:
    // 0x1da218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da21c:
    // 0x1da21c: 0x60f809  jalr        $v1
label_1da220:
    if (ctx->pc == 0x1DA220u) {
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA224u;
        goto label_1da224;
    }
    ctx->pc = 0x1DA21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA224u);
        ctx->pc = 0x1DA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA21Cu;
        // 0x1da220: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA21Cu, 0x1DA224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA224u;
label_1da224:
    // 0x1da224: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1da224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1da228:
    // 0x1da228: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_1da22c:
    // 0x1da22c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1da22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1da230:
    // 0x1da230: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1da230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1da234:
    // 0x1da234: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1da234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_1da238:
    // 0x1da238: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1da238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da23c:
    // 0x1da23c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1da23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1da240:
    // 0x1da240: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1da240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1da244:
    // 0x1da244: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1da244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1da248:
    // 0x1da248: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1da248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1da24c:
    // 0x1da24c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da250:
    if (ctx->pc == 0x1DA250u) {
        ctx->pc = 0x1DA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA24Cu;
        // 0x1da250: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA254u;
        goto label_1da254;
    }
    ctx->pc = 0x1DA24Cu;
    {
        const bool branch_taken_0x1da24c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA24Cu;
        // 0x1da250: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da24c) {
            ctx->pc = 0x1DA270u;
            goto label_1da270;
        }
    }
    ctx->pc = 0x1DA254u;
label_1da254:
    // 0x1da254: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da258:
    // 0x1da258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da25c:
    // 0x1da25c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da260:
    // 0x1da260: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da264:
    // 0x1da264: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da268:
    // 0x1da268: 0x60f809  jalr        $v1
label_1da26c:
    if (ctx->pc == 0x1DA26Cu) {
        ctx->pc = 0x1DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA268u;
        // 0x1da26c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA270u;
        goto label_1da270;
    }
    ctx->pc = 0x1DA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA270u);
        ctx->pc = 0x1DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA268u;
        // 0x1da26c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA268u, 0x1DA270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA270u;
label_1da270:
    // 0x1da270: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da274:
    // 0x1da274: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da278:
    if (ctx->pc == 0x1DA278u) {
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA27Cu;
        goto label_1da27c;
    }
    ctx->pc = 0x1DA274u;
    {
        const bool branch_taken_0x1da274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA274u;
        // 0x1da278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da274) {
            ctx->pc = 0x1DA294u;
            goto label_1da294;
        }
    }
    ctx->pc = 0x1DA27Cu;
label_1da27c:
    // 0x1da27c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da280:
    // 0x1da280: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da284:
    // 0x1da284: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da288:
    // 0x1da288: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da28c:
    // 0x1da28c: 0x60f809  jalr        $v1
label_1da290:
    if (ctx->pc == 0x1DA290u) {
        ctx->pc = 0x1DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA28Cu;
        // 0x1da290: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA294u;
        goto label_1da294;
    }
    ctx->pc = 0x1DA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA294u);
        ctx->pc = 0x1DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA28Cu;
        // 0x1da290: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA28Cu, 0x1DA294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA294u;
label_1da294:
    // 0x1da294: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1da298:
    // 0x1da298: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da29c:
    if (ctx->pc == 0x1DA29Cu) {
        ctx->pc = 0x1DA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA298u;
        // 0x1da29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2A0u;
        goto label_1da2a0;
    }
    ctx->pc = 0x1DA298u;
    {
        const bool branch_taken_0x1da298 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA298u;
        // 0x1da29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da298) {
            ctx->pc = 0x1DA2B8u;
            goto label_1da2b8;
        }
    }
    ctx->pc = 0x1DA2A0u;
label_1da2a0:
    // 0x1da2a0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da2a4:
    // 0x1da2a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da2a8:
    // 0x1da2a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da2ac:
    // 0x1da2ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da2b0:
    // 0x1da2b0: 0x60f809  jalr        $v1
label_1da2b4:
    if (ctx->pc == 0x1DA2B4u) {
        ctx->pc = 0x1DA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2B0u;
        // 0x1da2b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2B8u;
        goto label_1da2b8;
    }
    ctx->pc = 0x1DA2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA2B8u);
        ctx->pc = 0x1DA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2B0u;
        // 0x1da2b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2B0u, 0x1DA2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA2B8u;
label_1da2b8:
    // 0x1da2b8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1da2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da2bc:
    // 0x1da2bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da2c0:
    if (ctx->pc == 0x1DA2C0u) {
        ctx->pc = 0x1DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2BCu;
        // 0x1da2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2C4u;
        goto label_1da2c4;
    }
    ctx->pc = 0x1DA2BCu;
    {
        const bool branch_taken_0x1da2bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2BCu;
        // 0x1da2c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2bc) {
            ctx->pc = 0x1DA2DCu;
            goto label_1da2dc;
        }
    }
    ctx->pc = 0x1DA2C4u;
label_1da2c4:
    // 0x1da2c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da2c8:
    // 0x1da2c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da2cc:
    // 0x1da2cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da2ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da2d0:
    // 0x1da2d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da2d4:
    // 0x1da2d4: 0x60f809  jalr        $v1
label_1da2d8:
    if (ctx->pc == 0x1DA2D8u) {
        ctx->pc = 0x1DA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2D4u;
        // 0x1da2d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2DCu;
        goto label_1da2dc;
    }
    ctx->pc = 0x1DA2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA2DCu);
        ctx->pc = 0x1DA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2D4u;
        // 0x1da2d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2D4u, 0x1DA2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA2DCu;
label_1da2dc:
    // 0x1da2dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1da2e0:
    // 0x1da2e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1da2e4:
    // 0x1da2e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1da2e8:
    // 0x1da2e8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1da2ec:
    // 0x1da2ec: 0x8e460164  lw          $a2, 0x164($s2)
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_1da2f0:
    // 0x1da2f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1da2f4:
    // 0x1da2f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1da2f8:
    // 0x1da2f8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1da2fc:
    // 0x1da2fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1da300:
    // 0x1da300: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1da304:
    if (ctx->pc == 0x1DA304u) {
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA308u;
        goto label_1da308;
    }
    ctx->pc = 0x1DA300u;
    {
        const bool branch_taken_0x1da300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da300) {
            ctx->pc = 0x1DA324u;
            goto label_1da324;
        }
    }
    ctx->pc = 0x1DA308u;
label_1da308:
    // 0x1da308: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da30c:
    // 0x1da30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da310:
    // 0x1da310: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da314:
    // 0x1da314: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da318:
    // 0x1da318: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da31c:
    // 0x1da31c: 0x60f809  jalr        $v1
label_1da320:
    if (ctx->pc == 0x1DA320u) {
        ctx->pc = 0x1DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA31Cu;
        // 0x1da320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA324u;
        goto label_1da324;
    }
    ctx->pc = 0x1DA31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA324u);
        ctx->pc = 0x1DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA31Cu;
        // 0x1da320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA31Cu, 0x1DA324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA324u;
label_1da324:
    // 0x1da324: 0x8e460168  lw          $a2, 0x168($s2)
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 360)));
label_1da328:
    // 0x1da328: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da32c:
    if (ctx->pc == 0x1DA32Cu) {
        ctx->pc = 0x1DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA328u;
        // 0x1da32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA330u;
        goto label_1da330;
    }
    ctx->pc = 0x1DA328u;
    {
        const bool branch_taken_0x1da328 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA328u;
        // 0x1da32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da328) {
            ctx->pc = 0x1DA348u;
            goto label_1da348;
        }
    }
    ctx->pc = 0x1DA330u;
label_1da330:
    // 0x1da330: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da334:
    // 0x1da334: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da338:
    // 0x1da338: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da33c:
    // 0x1da33c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da340:
    // 0x1da340: 0x60f809  jalr        $v1
label_1da344:
    if (ctx->pc == 0x1DA344u) {
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA348u;
        goto label_1da348;
    }
    ctx->pc = 0x1DA340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA348u);
        ctx->pc = 0x1DA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA340u;
        // 0x1da344: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA340u, 0x1DA348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA348u;
label_1da348:
    // 0x1da348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da34c:
    // 0x1da34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1da350:
    // 0x1da350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1da354:
    // 0x1da354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1da358:
    // 0x1da358: 0x3e00008  jr          $ra
label_1da35c:
    if (ctx->pc == 0x1DA35Cu) {
        ctx->pc = 0x1DA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA358u;
        // 0x1da35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA360u;
        goto label_fallthrough_0x1da358;
    }
    ctx->pc = 0x1DA358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA358u;
        // 0x1da35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da358:
    ctx->pc = 0x1DA360u;
}
