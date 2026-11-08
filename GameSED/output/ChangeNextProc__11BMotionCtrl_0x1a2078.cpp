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

// Function: ChangeNextProc__11BMotionCtrl
// Address: 0x1a2078 - 0x1a2194
void ChangeNextProc__11BMotionCtrl_0x1a2078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeNextProc__11BMotionCtrl_0x1a2078");
#endif

    switch (ctx->pc) {
        case 0x1a2078u: goto label_1a2078;
        case 0x1a207cu: goto label_1a207c;
        case 0x1a2080u: goto label_1a2080;
        case 0x1a2084u: goto label_1a2084;
        case 0x1a2088u: goto label_1a2088;
        case 0x1a208cu: goto label_1a208c;
        case 0x1a2090u: goto label_1a2090;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a2098u: goto label_1a2098;
        case 0x1a209cu: goto label_1a209c;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20a4u: goto label_1a20a4;
        case 0x1a20a8u: goto label_1a20a8;
        case 0x1a20acu: goto label_1a20ac;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a20b4u: goto label_1a20b4;
        case 0x1a20b8u: goto label_1a20b8;
        case 0x1a20bcu: goto label_1a20bc;
        case 0x1a20c0u: goto label_1a20c0;
        case 0x1a20c4u: goto label_1a20c4;
        case 0x1a20c8u: goto label_1a20c8;
        case 0x1a20ccu: goto label_1a20cc;
        case 0x1a20d0u: goto label_1a20d0;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20dcu: goto label_1a20dc;
        case 0x1a20e0u: goto label_1a20e0;
        case 0x1a20e4u: goto label_1a20e4;
        case 0x1a20e8u: goto label_1a20e8;
        case 0x1a20ecu: goto label_1a20ec;
        case 0x1a20f0u: goto label_1a20f0;
        case 0x1a20f4u: goto label_1a20f4;
        case 0x1a20f8u: goto label_1a20f8;
        case 0x1a20fcu: goto label_1a20fc;
        case 0x1a2100u: goto label_1a2100;
        case 0x1a2104u: goto label_1a2104;
        case 0x1a2108u: goto label_1a2108;
        case 0x1a210cu: goto label_1a210c;
        case 0x1a2110u: goto label_1a2110;
        case 0x1a2114u: goto label_1a2114;
        case 0x1a2118u: goto label_1a2118;
        case 0x1a211cu: goto label_1a211c;
        case 0x1a2120u: goto label_1a2120;
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2128u: goto label_1a2128;
        case 0x1a212cu: goto label_1a212c;
        case 0x1a2130u: goto label_1a2130;
        case 0x1a2134u: goto label_1a2134;
        case 0x1a2138u: goto label_1a2138;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a2140u: goto label_1a2140;
        case 0x1a2144u: goto label_1a2144;
        case 0x1a2148u: goto label_1a2148;
        case 0x1a214cu: goto label_1a214c;
        case 0x1a2150u: goto label_1a2150;
        case 0x1a2154u: goto label_1a2154;
        case 0x1a2158u: goto label_1a2158;
        case 0x1a215cu: goto label_1a215c;
        case 0x1a2160u: goto label_1a2160;
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2168u: goto label_1a2168;
        case 0x1a216cu: goto label_1a216c;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2178u: goto label_1a2178;
        case 0x1a217cu: goto label_1a217c;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2184u: goto label_1a2184;
        case 0x1a2188u: goto label_1a2188;
        case 0x1a218cu: goto label_1a218c;
        case 0x1a2190u: goto label_1a2190;
        default: break;
    }

    ctx->pc = 0x1a2078u;

label_1a2078:
    // 0x1a2078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a207c:
    // 0x1a207c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2080:
    // 0x1a2080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2084:
    // 0x1a2084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2088:
    // 0x1a2088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a208c:
    // 0x1a208c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a208cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a2090:
    // 0x1a2090: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a2094:
    // 0x1a2094: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x1a2094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_1a2098:
    // 0x1a2098: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1a209c:
    if (ctx->pc == 0x1A209Cu) {
        ctx->pc = 0x1A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2098u;
        // 0x1a209c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20A0u;
        goto label_1a20a0;
    }
    ctx->pc = 0x1A2098u;
    {
        const bool branch_taken_0x1a2098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2098u;
        // 0x1a209c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2098) {
            ctx->pc = 0x1A2180u;
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A20A0u;
label_1a20a0:
    // 0x1a20a0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1a20a4:
    // 0x1a20a4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1a20a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a20a8:
    // 0x1a20a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a20ac:
    if (ctx->pc == 0x1A20ACu) {
        ctx->pc = 0x1A20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20A8u;
        // 0x1a20ac: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20B0u;
        goto label_1a20b0;
    }
    ctx->pc = 0x1A20A8u;
    {
        const bool branch_taken_0x1a20a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20A8u;
        // 0x1a20ac: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20a8) {
            ctx->pc = 0x1A20C0u;
            goto label_1a20c0;
        }
    }
    ctx->pc = 0x1A20B0u;
label_1a20b0:
    // 0x1a20b0: 0xc0690e8  jal         func_1A43A0
label_1a20b4:
    if (ctx->pc == 0x1A20B4u) {
        ctx->pc = 0x1A20B8u;
        goto label_1a20b8;
    }
    ctx->pc = 0x1A20B0u;
    SET_GPR_U32(ctx, 31, 0x1A20B8u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A20B0u, 0x1A20B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20B8u;
label_1a20b8:
    // 0x1a20b8: 0xc069612  jal         func_1A5848
label_1a20bc:
    if (ctx->pc == 0x1A20BCu) {
        ctx->pc = 0x1A20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20B8u;
        // 0x1a20bc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20C0u;
        goto label_1a20c0;
    }
    ctx->pc = 0x1A20B8u;
    SET_GPR_U32(ctx, 31, 0x1A20C0u);
    ctx->pc = 0x1A20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20B8u;
    // 0x1a20bc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A20B8u, 0x1A20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20C0u;
label_1a20c0:
    // 0x1a20c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a20c4:
    // 0x1a20c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1a20c8:
    if (ctx->pc == 0x1A20C8u) {
        ctx->pc = 0x1A20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C4u;
        // 0x1a20c8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20CCu;
        goto label_1a20cc;
    }
    ctx->pc = 0x1A20C4u;
    {
        const bool branch_taken_0x1a20c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C4u;
        // 0x1a20c8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20c4) {
            ctx->pc = 0x1A20E8u;
            goto label_1a20e8;
        }
    }
    ctx->pc = 0x1A20CCu;
label_1a20cc:
    // 0x1a20cc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a20ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1a20d0:
    // 0x1a20d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a20d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1a20d4:
    // 0x1a20d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a20d8:
    if (ctx->pc == 0x1A20D8u) {
        ctx->pc = 0x1A20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20D4u;
        // 0x1a20d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20DCu;
        goto label_1a20dc;
    }
    ctx->pc = 0x1A20D4u;
    {
        const bool branch_taken_0x1a20d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a20d4) {
            ctx->pc = 0x1A20D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A20D4u;
            // 0x1a20d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A20ECu;
            goto label_1a20ec;
        }
    }
    ctx->pc = 0x1A20DCu;
label_1a20dc:
    // 0x1a20dc: 0xc067f04  jal         func_19FC10
label_1a20e0:
    if (ctx->pc == 0x1A20E0u) {
        ctx->pc = 0x1A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20DCu;
        // 0x1a20e0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20E4u;
        goto label_1a20e4;
    }
    ctx->pc = 0x1A20DCu;
    SET_GPR_U32(ctx, 31, 0x1A20E4u);
    ctx->pc = 0x1A20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20DCu;
    // 0x1a20e0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A20DCu, 0x1A20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20E4u;
label_1a20e4:
    // 0x1a20e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a20e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a20e8:
    // 0x1a20e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a20ec:
    // 0x1a20ec: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1a20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1a20f0:
    // 0x1a20f0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1a20f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a20f4:
    // 0x1a20f4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1a20f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_1a20f8:
    // 0x1a20f8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1a20f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_1a20fc:
    // 0x1a20fc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1a20fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_1a2100:
    // 0x1a2100: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1a2100u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_1a2104:
    // 0x1a2104: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1a2104u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_1a2108:
    // 0x1a2108: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1a2108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_1a210c:
    // 0x1a210c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1a210cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_1a2110:
    // 0x1a2110: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a2114:
    // 0x1a2114: 0x0  nop
    ctx->pc = 0x1a2114u;
    // NOP
label_1a2118:
    // 0x1a2118: 0x0  nop
    ctx->pc = 0x1a2118u;
    // NOP
label_1a211c:
    // 0x1a211c: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
label_1a2120:
    if (ctx->pc == 0x1A2120u) {
        ctx->pc = 0x1A2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A211Cu;
        // 0x1a2120: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2124u;
        goto label_1a2124;
    }
    ctx->pc = 0x1A211Cu;
    {
        const bool branch_taken_0x1a211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A211Cu;
        // 0x1a2120: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a211c) {
            ctx->pc = 0x1A20F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a20f0;
        }
    }
    ctx->pc = 0x1A2124u;
label_1a2124:
    // 0x1a2124: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a2128:
    // 0x1a2128: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a212c:
    if (ctx->pc == 0x1A212Cu) {
        ctx->pc = 0x1A2130u;
        goto label_1a2130;
    }
    ctx->pc = 0x1A2128u;
    {
        const bool branch_taken_0x1a2128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2128) {
            ctx->pc = 0x1A2144u;
            goto label_1a2144;
        }
    }
    ctx->pc = 0x1A2130u;
label_1a2130:
    // 0x1a2130: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a2130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2134:
    // 0x1a2134: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1a2138:
    // 0x1a2138: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a213c:
    if (ctx->pc == 0x1A213Cu) {
        ctx->pc = 0x1A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2138u;
        // 0x1a213c: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2140u;
        goto label_1a2140;
    }
    ctx->pc = 0x1A2138u;
    {
        const bool branch_taken_0x1a2138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2138u;
        // 0x1a213c: 0x26020030  addiu       $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2138) {
            ctx->pc = 0x1A2144u;
            goto label_1a2144;
        }
    }
    ctx->pc = 0x1A2140u;
label_1a2140:
    // 0x1a2140: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a2140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a2144:
    // 0x1a2144: 0xc069612  jal         func_1A5848
label_1a2148:
    if (ctx->pc == 0x1A2148u) {
        ctx->pc = 0x1A2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2144u;
        // 0x1a2148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A214Cu;
        goto label_1a214c;
    }
    ctx->pc = 0x1A2144u;
    SET_GPR_U32(ctx, 31, 0x1A214Cu);
    ctx->pc = 0x1A2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2144u;
    // 0x1a2148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A2144u, 0x1A214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A214Cu;
label_1a214c:
    // 0x1a214c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1a214cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a2150:
    // 0x1a2150: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a2150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1a2154:
    // 0x1a2154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a2158:
    if (ctx->pc == 0x1A2158u) {
        ctx->pc = 0x1A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2154u;
        // 0x1a2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A215Cu;
        goto label_1a215c;
    }
    ctx->pc = 0x1A2154u;
    {
        const bool branch_taken_0x1a2154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2154u;
        // 0x1a2158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2154) {
            ctx->pc = 0x1A2178u;
            goto label_1a2178;
        }
    }
    ctx->pc = 0x1A215Cu;
label_1a215c:
    // 0x1a215c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a2160:
    // 0x1a2160: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1a2160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a2164:
    // 0x1a2164: 0x40f809  jalr        $v0
label_1a2168:
    if (ctx->pc == 0x1A2168u) {
        ctx->pc = 0x1A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2164u;
        // 0x1a2168: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A216Cu;
        goto label_1a216c;
    }
    ctx->pc = 0x1A2164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A216Cu);
        ctx->pc = 0x1A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2164u;
        // 0x1a2168: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2164u, 0x1A216Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A216Cu;
label_1a216c:
    // 0x1a216c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a2170:
    if (ctx->pc == 0x1A2170u) {
        ctx->pc = 0x1A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A216Cu;
        // 0x1a2170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2174u;
        goto label_1a2174;
    }
    ctx->pc = 0x1A216Cu;
    {
        const bool branch_taken_0x1a216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A216Cu;
        // 0x1a2170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a216c) {
            ctx->pc = 0x1A2184u;
            goto label_1a2184;
        }
    }
    ctx->pc = 0x1A2174u;
label_1a2174:
    // 0x1a2174: 0x0  nop
    ctx->pc = 0x1a2174u;
    // NOP
label_1a2178:
    // 0x1a2178: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1a2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1a217c:
    // 0x1a217c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a217cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a2180:
    // 0x1a2180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2184:
    // 0x1a2184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2188:
    // 0x1a2188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a218c:
    // 0x1a218c: 0x3e00008  jr          $ra
label_1a2190:
    if (ctx->pc == 0x1A2190u) {
        ctx->pc = 0x1A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A218Cu;
        // 0x1a2190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2194u;
        goto label_fallthrough_0x1a218c;
    }
    ctx->pc = 0x1A218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A218Cu;
        // 0x1a2190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A218Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a218c:
    ctx->pc = 0x1A2194u;
}
