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

// Function: main
// Address: 0x1001d8 - 0x100388
void ps2_main_0x1001d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_main_0x1001d8");
#endif

    switch (ctx->pc) {
        case 0x1001d8u: goto label_1001d8;
        case 0x1001dcu: goto label_1001dc;
        case 0x1001e0u: goto label_1001e0;
        case 0x1001e4u: goto label_1001e4;
        case 0x1001e8u: goto label_1001e8;
        case 0x1001ecu: goto label_1001ec;
        case 0x1001f0u: goto label_1001f0;
        case 0x1001f4u: goto label_1001f4;
        case 0x1001f8u: goto label_1001f8;
        case 0x1001fcu: goto label_1001fc;
        case 0x100200u: goto label_100200;
        case 0x100204u: goto label_100204;
        case 0x100208u: goto label_100208;
        case 0x10020cu: goto label_10020c;
        case 0x100210u: goto label_100210;
        case 0x100214u: goto label_100214;
        case 0x100218u: goto label_100218;
        case 0x10021cu: goto label_10021c;
        case 0x100220u: goto label_100220;
        case 0x100224u: goto label_100224;
        case 0x100228u: goto label_100228;
        case 0x10022cu: goto label_10022c;
        case 0x100230u: goto label_100230;
        case 0x100234u: goto label_100234;
        case 0x100238u: goto label_100238;
        case 0x10023cu: goto label_10023c;
        case 0x100240u: goto label_100240;
        case 0x100244u: goto label_100244;
        case 0x100248u: goto label_100248;
        case 0x10024cu: goto label_10024c;
        case 0x100250u: goto label_100250;
        case 0x100254u: goto label_100254;
        case 0x100258u: goto label_100258;
        case 0x10025cu: goto label_10025c;
        case 0x100260u: goto label_100260;
        case 0x100264u: goto label_100264;
        case 0x100268u: goto label_100268;
        case 0x10026cu: goto label_10026c;
        case 0x100270u: goto label_100270;
        case 0x100274u: goto label_100274;
        case 0x100278u: goto label_100278;
        case 0x10027cu: goto label_10027c;
        case 0x100280u: goto label_100280;
        case 0x100284u: goto label_100284;
        case 0x100288u: goto label_100288;
        case 0x10028cu: goto label_10028c;
        case 0x100290u: goto label_100290;
        case 0x100294u: goto label_100294;
        case 0x100298u: goto label_100298;
        case 0x10029cu: goto label_10029c;
        case 0x1002a0u: goto label_1002a0;
        case 0x1002a4u: goto label_1002a4;
        case 0x1002a8u: goto label_1002a8;
        case 0x1002acu: goto label_1002ac;
        case 0x1002b0u: goto label_1002b0;
        case 0x1002b4u: goto label_1002b4;
        case 0x1002b8u: goto label_1002b8;
        case 0x1002bcu: goto label_1002bc;
        case 0x1002c0u: goto label_1002c0;
        case 0x1002c4u: goto label_1002c4;
        case 0x1002c8u: goto label_1002c8;
        case 0x1002ccu: goto label_1002cc;
        case 0x1002d0u: goto label_1002d0;
        case 0x1002d4u: goto label_1002d4;
        case 0x1002d8u: goto label_1002d8;
        case 0x1002dcu: goto label_1002dc;
        case 0x1002e0u: goto label_1002e0;
        case 0x1002e4u: goto label_1002e4;
        case 0x1002e8u: goto label_1002e8;
        case 0x1002ecu: goto label_1002ec;
        case 0x1002f0u: goto label_1002f0;
        case 0x1002f4u: goto label_1002f4;
        case 0x1002f8u: goto label_1002f8;
        case 0x1002fcu: goto label_1002fc;
        case 0x100300u: goto label_100300;
        case 0x100304u: goto label_100304;
        case 0x100308u: goto label_100308;
        case 0x10030cu: goto label_10030c;
        case 0x100310u: goto label_100310;
        case 0x100314u: goto label_100314;
        case 0x100318u: goto label_100318;
        case 0x10031cu: goto label_10031c;
        case 0x100320u: goto label_100320;
        case 0x100324u: goto label_100324;
        case 0x100328u: goto label_100328;
        case 0x10032cu: goto label_10032c;
        case 0x100330u: goto label_100330;
        case 0x100334u: goto label_100334;
        case 0x100338u: goto label_100338;
        case 0x10033cu: goto label_10033c;
        case 0x100340u: goto label_100340;
        case 0x100344u: goto label_100344;
        case 0x100348u: goto label_100348;
        case 0x10034cu: goto label_10034c;
        case 0x100350u: goto label_100350;
        case 0x100354u: goto label_100354;
        case 0x100358u: goto label_100358;
        case 0x10035cu: goto label_10035c;
        case 0x100360u: goto label_100360;
        case 0x100364u: goto label_100364;
        case 0x100368u: goto label_100368;
        case 0x10036cu: goto label_10036c;
        case 0x100370u: goto label_100370;
        case 0x100374u: goto label_100374;
        case 0x100378u: goto label_100378;
        case 0x10037cu: goto label_10037c;
        case 0x100380u: goto label_100380;
        case 0x100384u: goto label_100384;
        default: break;
    }

    ctx->pc = 0x1001d8u;

label_1001d8:
    // 0x1001d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1001d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1001dc:
    // 0x1001dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1001dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1001e0:
    // 0x1001e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1001e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1001e4:
    // 0x1001e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1001e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1001e8:
    // 0x1001e8: 0xc07272a  jal         func_1C9CA8
label_1001ec:
    if (ctx->pc == 0x1001ECu) {
        ctx->pc = 0x1001F0u;
        goto label_1001f0;
    }
    ctx->pc = 0x1001E8u;
    SET_GPR_U32(ctx, 31, 0x1001F0u);
    ctx->pc = 0x1C9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CA8u, 0x1001E8u, 0x1001F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001F0u;
label_1001f0:
    // 0x1001f0: 0xc067fb4  jal         func_19FED0
label_1001f4:
    if (ctx->pc == 0x1001F4u) {
        ctx->pc = 0x1001F8u;
        goto label_1001f8;
    }
    ctx->pc = 0x1001F0u;
    SET_GPR_U32(ctx, 31, 0x1001F8u);
    ctx->pc = 0x19FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FED0u, 0x1001F0u, 0x1001F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001F8u;
label_1001f8:
    // 0x1001f8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1001f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_1001fc:
    // 0x1001fc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x1001fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_100200:
    // 0x100200: 0xc067fd6  jal         func_19FF58
label_100204:
    if (ctx->pc == 0x100204u) {
        ctx->pc = 0x100204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100200u;
        // 0x100204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100208u;
        goto label_100208;
    }
    ctx->pc = 0x100200u;
    SET_GPR_U32(ctx, 31, 0x100208u);
    ctx->pc = 0x100204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100200u;
    // 0x100204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF58u, 0x100200u, 0x100208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100208u;
label_100208:
    // 0x100208: 0x3c0400a0  lui         $a0, 0xA0
    ctx->pc = 0x100208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)160 << 16));
label_10020c:
    // 0x10020c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100210:
    // 0x100210: 0xc067fd6  jal         func_19FF58
label_100214:
    if (ctx->pc == 0x100214u) {
        ctx->pc = 0x100214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100210u;
        // 0x100214: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100218u;
        goto label_100218;
    }
    ctx->pc = 0x100210u;
    SET_GPR_U32(ctx, 31, 0x100218u);
    ctx->pc = 0x100214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100210u;
    // 0x100214: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FF58u, 0x100210u, 0x100218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100218u;
label_100218:
    // 0x100218: 0xc0680f6  jal         func_1A03D8
label_10021c:
    if (ctx->pc == 0x10021Cu) {
        ctx->pc = 0x10021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100218u;
        // 0x10021c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100220u;
        goto label_100220;
    }
    ctx->pc = 0x100218u;
    SET_GPR_U32(ctx, 31, 0x100220u);
    ctx->pc = 0x10021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100218u;
    // 0x10021c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x100218u, 0x100220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100220u;
label_100220:
    // 0x100220: 0xc068064  jal         func_1A0190
label_100224:
    if (ctx->pc == 0x100224u) {
        ctx->pc = 0x100224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100220u;
        // 0x100224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100228u;
        goto label_100228;
    }
    ctx->pc = 0x100220u;
    SET_GPR_U32(ctx, 31, 0x100228u);
    ctx->pc = 0x100224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100220u;
    // 0x100224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0190u, 0x100220u, 0x100228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100228u;
label_100228:
    // 0x100228: 0xc0680f6  jal         func_1A03D8
label_10022c:
    if (ctx->pc == 0x10022Cu) {
        ctx->pc = 0x10022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100228u;
        // 0x10022c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100230u;
        goto label_100230;
    }
    ctx->pc = 0x100228u;
    SET_GPR_U32(ctx, 31, 0x100230u);
    ctx->pc = 0x10022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100228u;
    // 0x10022c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x100228u, 0x100230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100230u;
label_100230:
    // 0x100230: 0xc068066  jal         func_1A0198
label_100234:
    if (ctx->pc == 0x100234u) {
        ctx->pc = 0x100234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100230u;
        // 0x100234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100238u;
        goto label_100238;
    }
    ctx->pc = 0x100230u;
    SET_GPR_U32(ctx, 31, 0x100238u);
    ctx->pc = 0x100234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100230u;
    // 0x100234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0198u, 0x100230u, 0x100238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100238u;
label_100238:
    // 0x100238: 0xc0680f6  jal         func_1A03D8
label_10023c:
    if (ctx->pc == 0x10023Cu) {
        ctx->pc = 0x10023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100238u;
        // 0x10023c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100240u;
        goto label_100240;
    }
    ctx->pc = 0x100238u;
    SET_GPR_U32(ctx, 31, 0x100240u);
    ctx->pc = 0x10023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100238u;
    // 0x10023c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x100238u, 0x100240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100240u;
label_100240:
    // 0x100240: 0xc068068  jal         func_1A01A0
label_100244:
    if (ctx->pc == 0x100244u) {
        ctx->pc = 0x100244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100240u;
        // 0x100244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100248u;
        goto label_100248;
    }
    ctx->pc = 0x100240u;
    SET_GPR_U32(ctx, 31, 0x100248u);
    ctx->pc = 0x100244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100240u;
    // 0x100244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A01A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A01A0u, 0x100240u, 0x100248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100248u;
label_100248:
    // 0x100248: 0xc0671d2  jal         func_19C748
label_10024c:
    if (ctx->pc == 0x10024Cu) {
        ctx->pc = 0x100250u;
        goto label_100250;
    }
    ctx->pc = 0x100248u;
    SET_GPR_U32(ctx, 31, 0x100250u);
    ctx->pc = 0x19C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C748u, 0x100248u, 0x100250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100250u;
label_100250:
    // 0x100250: 0xc06797e  jal         func_19E5F8
label_100254:
    if (ctx->pc == 0x100254u) {
        ctx->pc = 0x100258u;
        goto label_100258;
    }
    ctx->pc = 0x100250u;
    SET_GPR_U32(ctx, 31, 0x100258u);
    ctx->pc = 0x19E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E5F8u, 0x100250u, 0x100258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100258u;
label_100258:
    // 0x100258: 0xc0682d2  jal         func_1A0B48
label_10025c:
    if (ctx->pc == 0x10025Cu) {
        ctx->pc = 0x100260u;
        goto label_100260;
    }
    ctx->pc = 0x100258u;
    SET_GPR_U32(ctx, 31, 0x100260u);
    ctx->pc = 0x1A0B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B48u, 0x100258u, 0x100260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100260u;
label_100260:
    // 0x100260: 0xc068ff2  jal         func_1A3FC8
label_100264:
    if (ctx->pc == 0x100264u) {
        ctx->pc = 0x100268u;
        goto label_100268;
    }
    ctx->pc = 0x100260u;
    SET_GPR_U32(ctx, 31, 0x100268u);
    ctx->pc = 0x1A3FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3FC8u, 0x100260u, 0x100268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100268u;
label_100268:
    // 0x100268: 0xc04501a  jal         func_114068
label_10026c:
    if (ctx->pc == 0x10026Cu) {
        ctx->pc = 0x10026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100268u;
        // 0x10026c: 0x3c044400  lui         $a0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100270u;
        goto label_100270;
    }
    ctx->pc = 0x100268u;
    SET_GPR_U32(ctx, 31, 0x100270u);
    ctx->pc = 0x10026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100268u;
    // 0x10026c: 0x3c044400  lui         $a0, 0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114068u, 0x100268u, 0x100270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100270u;
label_100270:
    // 0x100270: 0xc0400e2  jal         func_100388
label_100274:
    if (ctx->pc == 0x100274u) {
        ctx->pc = 0x100274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100270u;
        // 0x100274: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100278u;
        goto label_100278;
    }
    ctx->pc = 0x100270u;
    SET_GPR_U32(ctx, 31, 0x100278u);
    ctx->pc = 0x100274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100270u;
    // 0x100274: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100388u, 0x100270u, 0x100278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100278u;
label_100278:
    // 0x100278: 0x8f8486bc  lw          $a0, -0x7944($gp)
    ctx->pc = 0x100278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
label_10027c:
    // 0x10027c: 0xc05e7fa  jal         func_179FE8
label_100280:
    if (ctx->pc == 0x100280u) {
        ctx->pc = 0x100280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10027Cu;
        // 0x100280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100284u;
        goto label_100284;
    }
    ctx->pc = 0x10027Cu;
    SET_GPR_U32(ctx, 31, 0x100284u);
    ctx->pc = 0x100280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10027Cu;
    // 0x100280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FE8u, 0x10027Cu, 0x100284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100284u;
label_100284:
    // 0x100284: 0xc05dc8c  jal         func_177230
label_100288:
    if (ctx->pc == 0x100288u) {
        ctx->pc = 0x10028Cu;
        goto label_10028c;
    }
    ctx->pc = 0x100284u;
    SET_GPR_U32(ctx, 31, 0x10028Cu);
    ctx->pc = 0x177230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177230u, 0x100284u, 0x10028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10028Cu;
label_10028c:
    // 0x10028c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10028cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100290:
    // 0x100290: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x100290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_100294:
    // 0x100294: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100298:
    // 0x100298: 0xc06ab72  jal         func_1AADC8
label_10029c:
    if (ctx->pc == 0x10029Cu) {
        ctx->pc = 0x10029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100298u;
        // 0x10029c: 0xac50001c  sw          $s0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002A0u;
        goto label_1002a0;
    }
    ctx->pc = 0x100298u;
    SET_GPR_U32(ctx, 31, 0x1002A0u);
    ctx->pc = 0x10029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100298u;
    // 0x10029c: 0xac50001c  sw          $s0, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x100298u, 0x1002A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002A0u;
label_1002a0:
    // 0x1002a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1002a4:
    // 0x1002a4: 0xc05d934  jal         func_1764D0
label_1002a8:
    if (ctx->pc == 0x1002A8u) {
        ctx->pc = 0x1002A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002A4u;
        // 0x1002a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002ACu;
        goto label_1002ac;
    }
    ctx->pc = 0x1002A4u;
    SET_GPR_U32(ctx, 31, 0x1002ACu);
    ctx->pc = 0x1002A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002A4u;
    // 0x1002a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1764D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1764D0u, 0x1002A4u, 0x1002ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002ACu;
label_1002ac:
    // 0x1002ac: 0xc05e8e4  jal         func_17A390
label_1002b0:
    if (ctx->pc == 0x1002B0u) {
        ctx->pc = 0x1002B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ACu;
        // 0x1002b0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002B4u;
        goto label_1002b4;
    }
    ctx->pc = 0x1002ACu;
    SET_GPR_U32(ctx, 31, 0x1002B4u);
    ctx->pc = 0x1002B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ACu;
    // 0x1002b0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A390u, 0x1002ACu, 0x1002B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002B4u;
label_1002b4:
    // 0x1002b4: 0xc05de58  jal         func_177960
label_1002b8:
    if (ctx->pc == 0x1002B8u) {
        ctx->pc = 0x1002BCu;
        goto label_1002bc;
    }
    ctx->pc = 0x1002B4u;
    SET_GPR_U32(ctx, 31, 0x1002BCu);
    ctx->pc = 0x177960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177960u, 0x1002B4u, 0x1002BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002BCu;
label_1002bc:
    // 0x1002bc: 0xc05e114  jal         func_178450
label_1002c0:
    if (ctx->pc == 0x1002C0u) {
        ctx->pc = 0x1002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002BCu;
        // 0x1002c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002C4u;
        goto label_1002c4;
    }
    ctx->pc = 0x1002BCu;
    SET_GPR_U32(ctx, 31, 0x1002C4u);
    ctx->pc = 0x1002C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002BCu;
    // 0x1002c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178450u, 0x1002BCu, 0x1002C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002C4u;
label_1002c4:
    // 0x1002c4: 0xc047580  jal         func_11D600
label_1002c8:
    if (ctx->pc == 0x1002C8u) {
        ctx->pc = 0x1002C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002C4u;
        // 0x1002c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002CCu;
        goto label_1002cc;
    }
    ctx->pc = 0x1002C4u;
    SET_GPR_U32(ctx, 31, 0x1002CCu);
    ctx->pc = 0x1002C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C4u;
    // 0x1002c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D600u, 0x1002C4u, 0x1002CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002CCu;
label_1002cc:
    // 0x1002cc: 0xc04506c  jal         func_1141B0
label_1002d0:
    if (ctx->pc == 0x1002D0u) {
        ctx->pc = 0x1002D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002CCu;
        // 0x1002d0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002D4u;
        goto label_1002d4;
    }
    ctx->pc = 0x1002CCu;
    SET_GPR_U32(ctx, 31, 0x1002D4u);
    ctx->pc = 0x1002D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002CCu;
    // 0x1002d0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141B0u, 0x1002CCu, 0x1002D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002D4u;
label_1002d4:
    // 0x1002d4: 0xc045074  jal         func_1141D0
label_1002d8:
    if (ctx->pc == 0x1002D8u) {
        ctx->pc = 0x1002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002D4u;
        // 0x1002d8: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002DCu;
        goto label_1002dc;
    }
    ctx->pc = 0x1002D4u;
    SET_GPR_U32(ctx, 31, 0x1002DCu);
    ctx->pc = 0x1002D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002D4u;
    // 0x1002d8: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141D0u, 0x1002D4u, 0x1002DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002DCu;
label_1002dc:
    // 0x1002dc: 0xc044b5a  jal         func_112D68
label_1002e0:
    if (ctx->pc == 0x1002E0u) {
        ctx->pc = 0x1002E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002DCu;
        // 0x1002e0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002E4u;
        goto label_1002e4;
    }
    ctx->pc = 0x1002DCu;
    SET_GPR_U32(ctx, 31, 0x1002E4u);
    ctx->pc = 0x1002E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002DCu;
    // 0x1002e0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D68u, 0x1002DCu, 0x1002E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002E4u;
label_1002e4:
    // 0x1002e4: 0xc05f180  jal         func_17C600
label_1002e8:
    if (ctx->pc == 0x1002E8u) {
        ctx->pc = 0x1002ECu;
        goto label_1002ec;
    }
    ctx->pc = 0x1002E4u;
    SET_GPR_U32(ctx, 31, 0x1002ECu);
    ctx->pc = 0x17C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C600u, 0x1002E4u, 0x1002ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002ECu;
label_1002ec:
    // 0x1002ec: 0xc04507c  jal         func_1141F0
label_1002f0:
    if (ctx->pc == 0x1002F0u) {
        ctx->pc = 0x1002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ECu;
        // 0x1002f0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1002F4u;
        goto label_1002f4;
    }
    ctx->pc = 0x1002ECu;
    SET_GPR_U32(ctx, 31, 0x1002F4u);
    ctx->pc = 0x1002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ECu;
    // 0x1002f0: 0x8f8486bc  lw          $a0, -0x7944($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141F0u, 0x1002ECu, 0x1002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002F4u;
label_1002f4:
    // 0x1002f4: 0x8f8586bc  lw          $a1, -0x7944($gp)
    ctx->pc = 0x1002f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
label_1002f8:
    // 0x1002f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1002f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1002fc:
    // 0x1002fc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1002fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_100300:
    // 0x100300: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100304:
    // 0x100304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100308:
    // 0x100308: 0x60f809  jalr        $v1
label_10030c:
    if (ctx->pc == 0x10030Cu) {
        ctx->pc = 0x10030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100308u;
        // 0x10030c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100310u;
        goto label_100310;
    }
    ctx->pc = 0x100308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100310u);
        ctx->pc = 0x10030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100308u;
        // 0x10030c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100308u, 0x100310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100310u;
label_100310:
    // 0x100310: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x100310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_100314:
    // 0x100314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100318:
    // 0x100318: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10031c:
    // 0x10031c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10031cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100320:
    // 0x100320: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100324:
    // 0x100324: 0x60f809  jalr        $v1
label_100328:
    if (ctx->pc == 0x100328u) {
        ctx->pc = 0x100328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100324u;
        // 0x100328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10032Cu;
        goto label_10032c;
    }
    ctx->pc = 0x100324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10032Cu);
        ctx->pc = 0x100328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100324u;
        // 0x100328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100324u, 0x10032Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10032Cu;
label_10032c:
    // 0x10032c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_100330:
    // 0x100330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100334:
    // 0x100334: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100338:
    // 0x100338: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10033c:
    // 0x10033c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100340:
    // 0x100340: 0x60f809  jalr        $v1
label_100344:
    if (ctx->pc == 0x100344u) {
        ctx->pc = 0x100344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100340u;
        // 0x100344: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100348u;
        goto label_100348;
    }
    ctx->pc = 0x100340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100348u);
        ctx->pc = 0x100344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100340u;
        // 0x100344: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100340u, 0x100348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100348u;
label_100348:
    // 0x100348: 0x8f8486bc  lw          $a0, -0x7944($gp)
    ctx->pc = 0x100348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
label_10034c:
    // 0x10034c: 0xc05e8cc  jal         func_17A330
label_100350:
    if (ctx->pc == 0x100350u) {
        ctx->pc = 0x100350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10034Cu;
        // 0x100350: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100354u;
        goto label_100354;
    }
    ctx->pc = 0x10034Cu;
    SET_GPR_U32(ctx, 31, 0x100354u);
    ctx->pc = 0x100350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10034Cu;
    // 0x100350: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A330u, 0x10034Cu, 0x100354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100354u;
label_100354:
    // 0x100354: 0x8f8586bc  lw          $a1, -0x7944($gp)
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
label_100358:
    // 0x100358: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x100358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_10035c:
    // 0x10035c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_100360:
    // 0x100360: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100364:
    // 0x100364: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100368:
    // 0x100368: 0x60f809  jalr        $v1
label_10036c:
    if (ctx->pc == 0x10036Cu) {
        ctx->pc = 0x10036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100368u;
        // 0x10036c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100370u;
        goto label_100370;
    }
    ctx->pc = 0x100368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100370u);
        ctx->pc = 0x10036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100368u;
        // 0x10036c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100368u, 0x100370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100370u;
label_100370:
    // 0x100370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100374:
    // 0x100374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100378:
    // 0x100378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10037c:
    // 0x10037c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100380:
    // 0x100380: 0x3e00008  jr          $ra
label_100384:
    if (ctx->pc == 0x100384u) {
        ctx->pc = 0x100384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100380u;
        // 0x100384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100388u;
        goto label_fallthrough_0x100380;
    }
    ctx->pc = 0x100380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100380u;
        // 0x100384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100380:
    ctx->pc = 0x100388u;
}
